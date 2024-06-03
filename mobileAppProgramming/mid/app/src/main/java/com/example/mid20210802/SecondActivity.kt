package com.example.mid20210802

import android.app.Activity
import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import android.view.Menu
import android.view.MenuItem
import com.example.mid20210802.databinding.ActivitySecondBinding

class SecondActivity : AppCompatActivity() {
    lateinit var binding: ActivitySecondBinding

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        binding= ActivitySecondBinding.inflate(layoutInflater)
        setContentView(binding.root)

        val mystr = intent.getStringExtra("data")
        binding.myData.text = mystr
    }

    override fun onOptionsItemSelected(item: MenuItem): Boolean {
        if(item.itemId == R.id.saveBtn){
            intent.putExtra("result", "["+binding.myData.text+"]"+binding.nameEdit.text+" "+binding.phoneEdit.text.toString())
            setResult(Activity.RESULT_OK, intent)
            finish()
            return true
        }
        return false
    }
}