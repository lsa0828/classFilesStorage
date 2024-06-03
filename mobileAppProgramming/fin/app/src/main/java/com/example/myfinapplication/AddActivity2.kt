package com.example.myfinapplication

import android.app.Activity
import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import com.example.myfinapplication.databinding.ActivityAdd2Binding

class AddActivity2 : AppCompatActivity() {
    lateinit var binding: ActivityAdd2Binding

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        binding = ActivityAdd2Binding.inflate(layoutInflater)
        setContentView(binding.root)

        binding.menuAddSave.setOnClickListener {
            intent.putExtra("result", binding.addEditView.text.toString())
            setResult(Activity.RESULT_OK, intent)
            finish()
        }
    }
}