package com.example.mid20210802

import android.app.AlertDialog
import android.content.DialogInterface
import android.content.Intent
import android.net.Uri
import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import android.util.Log
import android.view.Menu
import android.view.MenuItem
import android.widget.Toast
import androidx.appcompat.app.ActionBarDrawerToggle
import androidx.appcompat.widget.SearchView
import androidx.core.content.ContentProviderCompat.requireContext
import androidx.fragment.app.Fragment
import androidx.fragment.app.FragmentActivity
import androidx.viewpager2.adapter.FragmentStateAdapter
import com.example.mid20210802.databinding.ActivityMainBinding
import com.google.android.material.navigation.NavigationView
import com.google.android.material.tabs.TabLayoutMediator
import java.security.AccessController.getContext

class MainActivity : AppCompatActivity(), NavigationView.OnNavigationItemSelectedListener {
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
            R.id.menuDuk -> {
                var intent = Intent(Intent.ACTION_VIEW, Uri.parse("http://www.duksung.ac.kr"))
                startActivity(intent)
            }
            R.id.menuTel -> {
                var intent = Intent(Intent.ACTION_VIEW, Uri.parse("tel:/119"))
                startActivity(intent)
            }
            R.id.menuMap -> {
                var intent = Intent(Intent.ACTION_VIEW, Uri.parse("geo:37.6513783, 127.0163402"))
                startActivity(intent)
            }
        }
        return true
    }

    override fun onCreateOptionsMenu(menu: Menu?): Boolean {
        menuInflater.inflate(R.menu.menu_actionbar, menu)
        val menuItem = menu?.findItem(R.id.menu_search)
        val searchView = menuItem?.actionView as SearchView
        searchView.setOnQueryTextListener(object: SearchView.OnQueryTextListener {
            override fun onQueryTextSubmit(query: String?): Boolean {
                AlertDialog.Builder(getApplicationContext()).run{
                    setTitle("검색어 입력 확인")
                    setMessage("검색어${query}을/를 입력하였습니다.")
                    setPositiveButton("닫기", null)
                    show()
                }
                return true
            }

            override fun onQueryTextChange(newText: String?): Boolean {
                TODO("Not yet implemented")
                return true
            }
        })
        return super.onCreateOptionsMenu(menu)
    }

    override fun onOptionsItemSelected(item: MenuItem): Boolean {
        if(toggle.onOptionsItemSelected(item)) {
            return true
        }
        when(item.itemId) {
            R.id.menu_login -> {
               Toast.makeText(this, "개발 중 입니다.", Toast.LENGTH_LONG).show()
            }
        }
        return super.onOptionsItemSelected(item)
    }
}