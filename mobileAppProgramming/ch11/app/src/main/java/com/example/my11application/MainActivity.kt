package com.example.my11application

import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import android.util.Log
import android.view.Menu
import android.view.MenuItem
import androidx.appcompat.app.ActionBarDrawerToggle
import androidx.appcompat.widget.SearchView
import androidx.fragment.app.Fragment
import androidx.fragment.app.FragmentActivity
import androidx.viewpager2.adapter.FragmentStateAdapter
import com.example.my11application.databinding.ActivityMainBinding
import com.google.android.material.navigation.NavigationView.OnNavigationItemSelectedListener
import com.google.android.material.tabs.TabLayoutMediator

class MainActivity : AppCompatActivity(), OnNavigationItemSelectedListener  {
    lateinit var toolbar : ActionBarDrawerToggle

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

        /* 액션바의 내용을 툴바에 적용 */
        setSupportActionBar(binding.toolbar)

        binding.viewpager2.adapter = MyFragmentAdapter(this)// 아답터 연결

        toolbar = ActionBarDrawerToggle(this, binding.drawer, R.string.drawer_opened, R.string.drawer_closed)
        supportActionBar?.setDisplayHomeAsUpEnabled(true)
        toolbar.syncState()

        binding.mainDrawer.setNavigationItemSelectedListener(this)

        TabLayoutMediator(binding.tabs, binding.viewpager2) {
            tab, position -> tab.text = "TAB ${position+1}"
        }.attach()
    }

    override fun onNavigationItemSelected(item: MenuItem): Boolean {
        when(item.itemId) {
            R.id.menu_1 -> { Log.d("mobileApp", "네비게이션뷰 메뉴 1") }
            R.id.menu_2 -> { Log.d("mobileApp", "네비게이션뷰 메뉴 2") }
            R.id.menu_3 -> { Log.d("mobileApp", "네비게이션뷰 메뉴 3") }
            R.id.menu_4 -> { Log.d("mobileApp", "네비게이션뷰 메뉴 4") }
        }
        return true
    }

    /* 메뉴 구성 함수 */
    override fun onCreateOptionsMenu(menu: Menu?): Boolean {
        menuInflater.inflate(R.menu.menu_actionbar, menu)
        /* 서치 뷰 검색 기능 구현 */
        val menuItem = menu?.findItem(R.id.menu_search)
        val searchView = menuItem?.actionView as SearchView
        searchView.setOnQueryTextListener(object:SearchView.OnQueryTextListener {
            override fun onQueryTextSubmit(query: String?): Boolean {
                Log.d("mobileApp", "검색어 : $query")
                return true
            }

            override fun onQueryTextChange(newText: String?): Boolean {
                TODO("Not yet implemented")
                return true
            }
        })
        /* 여기까지 */
        return super.onCreateOptionsMenu(menu)
    }

    /* 메뉴 선택 시 이벤트 처리 */
    override fun onOptionsItemSelected(item: MenuItem): Boolean {
        if(toolbar.onOptionsItemSelected(item)) {
            return true
        }
        when(item.itemId) {
            R.id.menu1 -> {
                Log.d("mobileApp", "Menu1")
            }
            R.id.menu2 -> {}
            R.id.menu_search -> {}
        }
        return super.onOptionsItemSelected(item)
    }
}