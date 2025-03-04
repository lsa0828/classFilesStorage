package com.example.my12application

import android.content.Intent
import android.content.SharedPreferences
import android.database.Cursor
import android.database.sqlite.SQLiteDatabase
import android.graphics.Color
import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import android.os.PersistableBundle
import android.util.Log
import android.view.Menu
import android.view.MenuItem
import androidx.activity.result.ActivityResultLauncher
import androidx.activity.result.contract.ActivityResultContracts
import androidx.preference.PreferenceManager
import androidx.recyclerview.widget.DividerItemDecoration
import androidx.recyclerview.widget.LinearLayoutManager
import com.example.my12application.databinding.ActivityMainBinding
import java.io.BufferedReader
import java.io.File
import java.io.InputStreamReader
import java.io.OutputStreamWriter

class MainActivity : AppCompatActivity() {

    lateinit var binding: ActivityMainBinding
    var datas: MutableList<String>? = null
    lateinit var adapter: MyAdapter

    lateinit var sharedPreferences: SharedPreferences

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        binding= ActivityMainBinding.inflate(layoutInflater)
        setContentView(binding.root)

        //add................................
        sharedPreferences = PreferenceManager.getDefaultSharedPreferences(this)
        val bgColor:String? = sharedPreferences.getString("bg_color", "")
        binding.mainRecyclerView.setBackgroundColor(Color.parseColor(bgColor))

        var requestlauncher : ActivityResultLauncher<Intent>
            = registerForActivityResult(ActivityResultContracts.StartActivityForResult()){
                it.data!!.getStringExtra("result")?.let{
                    datas?.add(it)
                    adapter.notifyDataSetChanged()

                    var db:SQLiteDatabase = DBHelper(this).writableDatabase
                    // SQL : insert into todo_tbl (todo) values (it...)
                    db.execSQL("insert into todo_tbl (todo) values (?)", arrayOf<String>(it))
                    db.close()
                }
        }
        binding.mainFab.setOnClickListener {
            var intent = Intent(this, AddActivity::class.java)
            intent.putExtra("data","My Todo List")
            //startActivity(intent)
            //startActivityForResult()
            //ActivityResultLauncher
            requestlauncher.launch(intent)
        }

        /*
        datas = savedInstanceState?.let{
            it.getStringArrayList("datas")?.toMutableList()
        } ?: let { mutableListOf<String> () }
        */
        // DB 읽기
        datas = mutableListOf<String>()
        val db:SQLiteDatabase = DBHelper(this).readableDatabase
        var cursor: Cursor = db.rawQuery("select * from todo_tbl", null)
        while(cursor.moveToNext()) {
            datas?.add(cursor.getString(1))
        }
        db.close()

        val layoutManager = LinearLayoutManager(this)
        binding.mainRecyclerView.layoutManager=layoutManager
        adapter=MyAdapter(datas)
        binding.mainRecyclerView.adapter=adapter
        binding.mainRecyclerView.addItemDecoration(
            DividerItemDecoration(this, LinearLayoutManager.VERTICAL)
        )
    }

    //add...............................
    override fun onResume() {
        super.onResume()

        val bgColor:String? = sharedPreferences.getString("bg_color", "")
        binding.mainRecyclerView.setBackgroundColor(Color.parseColor(bgColor))

        adapter.notifyDataSetChanged()
    }

    override fun onCreateOptionsMenu(menu: Menu?): Boolean {
        menuInflater.inflate(R.menu.menu_main, menu)
        return super.onCreateOptionsMenu(menu)
    }

    override fun onOptionsItemSelected(item: MenuItem): Boolean {
        val file: File = File(filesDir, "todo_list.txt")
        when(item.itemId){
            R.id.menu_save_file -> {
                val writeStream:OutputStreamWriter = file.writer()
                writeStream.write("hello android!!!\n")
                for(i in datas!!.indices)
                    writeStream.write(datas!![i] + "\n") // !!은 null이 아니라는 것을 표시, ?는 null일 수도 있다는 것을 표시
                writeStream.flush()
                return true
            }
            R.id.menu_read_file -> {
                val readStream:BufferedReader = file.reader().buffered() // InputStreamReader
                readStream.forEachLine {
                    Log.d("mobileApp", "$it")
                }
                return true
            }
            R.id.menu_main_setting -> {
                val intent = Intent(this, SettingActivity::class.java)
                startActivity(intent)
                return true
            }
        }
        return super.onOptionsItemSelected(item)
    }

    override fun onSaveInstanceState(outState: Bundle, outPersistentState: PersistableBundle) {
        super.onSaveInstanceState(outState, outPersistentState)
        outState.putStringArrayList("datas", ArrayList(datas))
    }
}