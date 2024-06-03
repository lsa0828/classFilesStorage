package com.example.myfinapplication

import android.content.Intent
import android.content.SharedPreferences
import android.graphics.Color
import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import android.view.Menu
import android.view.MenuItem
import androidx.fragment.app.Fragment
import androidx.fragment.app.FragmentActivity
import androidx.preference.PreferenceManager
import androidx.viewpager2.adapter.FragmentStateAdapter
import com.example.myfinapplication.databinding.ActivityMainBinding
import com.google.android.material.tabs.TabLayoutMediator

class MainActivity : AppCompatActivity() {
    lateinit var binding: ActivityMainBinding
    var authMenuItem : MenuItem? = null
    lateinit var sharedPreferences: SharedPreferences
    lateinit var boardFragment: BoardFragment
    lateinit var twoFragment: TwoFragment
    lateinit var threeFragment: ThreeFragment
    var mode = "아름다운 순간"

    override fun onCreate(savedInstanceState: Bundle?) {
        binding = ActivityMainBinding.inflate(layoutInflater)
        super.onCreate(savedInstanceState)
        setContentView(binding.root)

        boardFragment = BoardFragment()
        twoFragment = TwoFragment()
        threeFragment = ThreeFragment()

        supportFragmentManager.beginTransaction()
            .replace(R.id.activity_content, boardFragment)
            .commit()
        supportFragmentManager.beginTransaction()
            .add(R.id.activity_content, twoFragment)
            .hide(twoFragment)
            .commit()
        supportFragmentManager.beginTransaction()
            .add(R.id.activity_content, threeFragment)
            .hide(threeFragment)
            .commit()

        sharedPreferences = PreferenceManager.getDefaultSharedPreferences(this)
    }

    override fun onCreateOptionsMenu(menu: Menu?): Boolean {
        menuInflater.inflate(R.menu.menu_main, menu)

        authMenuItem = menu!!.findItem(R.id.menu_auth)
        if(MyApplication.checkAuth()) {
            authMenuItem!!.title = "${MyApplication.email}님"
        }
        else {
            authMenuItem!!.title = "인증"
        }

        return super.onCreateOptionsMenu(menu)
    }

    override fun onStart() {
        // Intent에서 finish() 돌아올 때 실행
        // onCreate -> onStart -> onCreateOptionsMenu
        super.onStart()
        if(authMenuItem !== null){
            if(MyApplication.checkAuth()) {
                authMenuItem!!.title = "${MyApplication.email}님"
            }
            else {
                authMenuItem!!.title = "인증"
            }
        }
    }

    override fun onOptionsItemSelected(item: MenuItem): Boolean {
        if(item.itemId === R.id.menu_board && mode !== "아름다운 순간"){
            supportFragmentManager.beginTransaction()
                .show(boardFragment)
                .commit()
            supportFragmentManager.beginTransaction()
                .hide(twoFragment)
                .commit()
            supportFragmentManager.beginTransaction()
                .hide(threeFragment)
                .commit()
            mode="아름다운 순간"
        }
        else if(item.itemId === R.id.menu_two && mode !== "순간 기록"){
            supportFragmentManager.beginTransaction()
                .show(twoFragment)
                .commit()
            supportFragmentManager.beginTransaction()
                .hide(boardFragment)
                .commit()
            supportFragmentManager.beginTransaction()
                .hide(threeFragment)
                .commit()
            mode="순간 기록"
        }
        else if(item.itemId === R.id.menu_three && mode !== "복지관 현황"){
            supportFragmentManager.beginTransaction()
                .show(threeFragment)
                .commit()
            supportFragmentManager.beginTransaction()
                .hide(boardFragment)
                .commit()
            supportFragmentManager.beginTransaction()
                .hide(twoFragment)
                .commit()
            mode="복지관 현황"
        }
        else if(item.itemId === R.id.menu_auth){
            val intent = Intent(this,AuthActivity::class.java)
            if(authMenuItem!!.title!!.equals("인증")) {
                intent.putExtra("data", "logout")
            }
            else { // 이메일, 구글계정
                intent.putExtra("data", "login")
            }
            startActivity(intent)
        }
        else if(item.itemId === R.id.menu_main_setting) {
            val intent = Intent(this, SettingActivity::class.java)
            startActivity(intent)
        }
        else if(item.itemId === R.id.menu_more) {
            val intent = Intent(this, MoreActivity::class.java)
            startActivity(intent)
        }
        else if(item.itemId === R.id.menu_want) {
            val intent = Intent(this, WantActivity::class.java)
            startActivity(intent)
        }
        else if(item.itemId === R.id.menu_graph) {
            val intent = Intent(this, GraphActivity::class.java)
            startActivity(intent)
        }
        else if(item.itemId === R.id.menu_addr) {
            val intent = Intent(this, AddressActivity::class.java)
            startActivity(intent)
        }
        return super.onOptionsItemSelected(item)
    }

    override fun onResume() {
        super.onResume()
    }
}