package com.example.myfinapplication

import android.content.Intent
import android.database.Cursor
import android.database.sqlite.SQLiteDatabase
import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import android.os.PersistableBundle
import android.util.Log
import androidx.activity.result.ActivityResultLauncher
import androidx.activity.result.contract.ActivityResultContracts
import androidx.recyclerview.widget.DividerItemDecoration
import androidx.recyclerview.widget.LinearLayoutManager
import com.example.myfinapplication.databinding.ActivityWantBinding
import java.io.BufferedReader
import java.io.File
import java.io.OutputStreamWriter

class WantActivity : AppCompatActivity() {
    lateinit var binding: ActivityWantBinding
    var datas: MutableList<String>? = null
    lateinit var adapter: MyAdapter

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        binding=ActivityWantBinding.inflate(layoutInflater)
        setContentView(binding.root)

        var requestlauncher : ActivityResultLauncher<Intent>
                = registerForActivityResult(ActivityResultContracts.StartActivityForResult()){
            it.data!!.getStringExtra("result")?.let{
                datas?.add(it)
                adapter.notifyDataSetChanged()

                var db: SQLiteDatabase = DBHelper(this).writableDatabase
                // SQL : insert into todo_tbl (todo) values (it...)
                db.execSQL("insert into todo_tbl (todo) values (?)", arrayOf<String>(it))
                db.close()
            }
        }

        binding.wantFab.setOnClickListener {
            var intent = Intent(this, AddActivity2::class.java)
            intent.putExtra("data", "원하는 순간 등록")
            requestlauncher.launch(intent)
        }

        datas = mutableListOf<String>()
        val db:SQLiteDatabase = DBHelper(this).readableDatabase
        var cursor: Cursor = db.rawQuery("select * from todo_tbl", null)
        while(cursor.moveToNext()) {
            datas?.add(cursor.getString(1))
        }
        db.close()

        val layoutManager = LinearLayoutManager(this)
        binding.wantRecyclerView.layoutManager=layoutManager
        adapter=MyAdapter(datas)
        binding.wantRecyclerView.adapter=adapter
        binding.wantRecyclerView.addItemDecoration(
            DividerItemDecoration(this, LinearLayoutManager.VERTICAL)
        )

        val file: File? = getExternalFilesDir(null)
        binding.menuSaveFile.setOnClickListener {
            val writeStream: OutputStreamWriter = file!!.writer()
            writeStream.write("나의 원하는 순간~\n")
            for(i in datas!!.indices)
                writeStream.write(datas!![i]+"\n")
            writeStream.flush()
        }

        binding.menuReadFile.setOnClickListener {
            val readStream: BufferedReader = file!!.reader().buffered()
            readStream.forEachLine{
                Log.d("mobileApp", "$it")
            }
        }
    }

    override fun onResume(){
        super.onResume()
        adapter.notifyDataSetChanged()
    }
}