package com.example.mypra3application

import android.app.Activity
import android.content.Intent
import android.graphics.BitmapFactory
import android.net.Uri
import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import android.provider.MediaStore
import android.util.Log
import android.view.Menu
import android.view.MenuItem
import androidx.activity.result.contract.ActivityResultContracts
import com.example.mypra3application.databinding.ActivityAddBinding

public class AddActivity : AppCompatActivity() {
    lateinit var binding: ActivityAddBinding

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        binding = ActivityAddBinding.inflate(layoutInflater)
        setContentView(binding.root)

        setSupportActionBar(binding.toolbar)

        val mystr = intent.getStringExtra("data")
        binding.myData.text = mystr
    }

    override fun onOptionsItemSelected(item: MenuItem): Boolean {
        if(item.itemId == R.id.menu_add_save){
            intent.putExtra("result", "["+binding.myData.text+"]"+binding.addEditView.text.toString())
            setResult(Activity.RESULT_OK, intent)
            finish()
            return true
        }
        return false
    }
}
