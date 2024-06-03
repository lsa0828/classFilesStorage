package com.example.mypra3application

import android.content.Intent
import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import android.util.Log
import android.view.MenuItem
import androidx.appcompat.app.ActionBarDrawerToggle
import androidx.fragment.app.Fragment
import androidx.fragment.app.FragmentActivity
import androidx.viewpager2.adapter.FragmentStateAdapter
import com.example.mypra3application.databinding.ActivityMainBinding
import com.google.android.material.navigation.NavigationView.OnNavigationItemSelectedListener
import com.google.android.material.tabs.TabLayoutMediator

class MainActivity : AppCompatActivity(), OnNavigationItemSelectedListener {
    lateinit var toggle : ActionBarDrawerToggle

    class MyFragmentAdapter(activity: FragmentActivity) : FragmentStateAdapter(activity) {
        val fragments : List<Fragment>
        init {
            fragments = listOf(OneFragment(), TwoFragment(), ThreeFragment())
        }
        override fun getItemCount(): Int {
            return fragments.size
        }
        override fun createFragment(position: Int): Fragment {
            return fragments[position]
        }
    }

    override fun onCreate(savedInstanceState: Bundle?) {
        val binding = ActivityMainBinding.inflate(layoutInflater)
        super.onCreate(savedInstanceState)
        setContentView(binding.root)

        setSupportActionBar(binding.toolbar)

        toggle = ActionBarDrawerToggle(this, binding.drawer, R.string.drawer_opened, R.string.drawer_closed)
        supportActionBar?.setDisplayHomeAsUpEnabled(true)
        toggle.syncState()

        binding.mainDrawer.setNavigationItemSelectedListener(this)

        binding.viewpager2.adapter = MyFragmentAdapter(this)

        TabLayoutMediator(binding.tabs, binding.viewpager2) {
            tab, position -> tab.text = "TAB ${position+1}"
        }.attach()
    }

    override fun onNavigationItemSelected(item: MenuItem): Boolean {
        when(item.itemId) {
            R.id.menu_1 -> {
                var intent = Intent(this, Menu1Activity::class.java)
                startActivity(intent)
            }
            R.id.menu_2 -> {
                /* 페이지 이동 함수 이것만 있어도 됨 activity 만들고 */
                var intent = Intent(this, MenuActivity2::class.java)
                startActivity(intent)
            }
            R.id.menu_3 -> { Log.d("mobileApp", "네비게이션뷰 메뉴 3") }
            R.id.menu_4 -> { Log.d("mobileApp", "네비게이션뷰 메뉴 4") }
        }
        return true
    }

    override fun onOptionsItemSelected(item: MenuItem): Boolean {
        if(toggle.onOptionsItemSelected(item)) {
            return true
        }
        return super.onOptionsItemSelected(item)
    }
}