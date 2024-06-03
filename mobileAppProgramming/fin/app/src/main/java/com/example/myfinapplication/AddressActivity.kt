package com.example.myfinapplication

import android.content.Intent
import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import androidx.activity.result.ActivityResultLauncher
import androidx.activity.result.contract.ActivityResultContracts
import com.example.myfinapplication.databinding.ActivityAddressBinding

class AddressActivity : AppCompatActivity() {
    lateinit var binding: ActivityAddressBinding
    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        //setContentView(R.layout.activity_address)
        binding = ActivityAddressBinding.inflate(layoutInflater)
        setContentView(binding.root)

        val requestLauncher: ActivityResultLauncher<Intent>
            = registerForActivityResult(ActivityResultContracts.StartActivityForResult()) {
                it.data!!.getStringExtra("result")?.let{
                    binding.etAddress.setText(it!!)
                }
        }
        binding.button.setOnClickListener {
            val intent = Intent(this@AddressActivity, WebViewActivity::class.java)
            requestLauncher.launch(intent)
        }
    }
}