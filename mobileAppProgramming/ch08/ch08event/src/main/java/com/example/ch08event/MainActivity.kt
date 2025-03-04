package com.example.ch08event

import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import android.os.SystemClock
import android.util.Log
import android.view.View
import androidx.core.content.res.ResourcesCompat
import com.example.ch08event.databinding.ActivityMainBinding

class MainActivity : AppCompatActivity() {
    var pauseTime = 0L
    var initTime = 0L

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        //setContentView(R.layout.activity_main)
        val binding = ActivityMainBinding.inflate(layoutInflater)
        setContentView(binding.root)

        binding.startBtn.setTextColor(ResourcesCompat.getColor(resources,R.color.textColor,null))
        binding.startBtn.setOnClickListener(object: View.OnClickListener{
            override fun onClick(v: View?) {
                binding.myChrono.base = SystemClock.elapsedRealtime() + pauseTime
                binding.myChrono.start()
                binding.startBtn.isEnabled = false
                binding.stopBtn.isEnabled = true
                binding.resetBtn.isEnabled = true
            }
        })

        binding.stopBtn.setOnClickListener {
            pauseTime = binding.myChrono.base - SystemClock.elapsedRealtime()
            binding.myChrono.stop()
            binding.startBtn.isEnabled = true
            binding.stopBtn.isEnabled = false
            binding.resetBtn.isEnabled = true
        }

        binding.resetBtn.setOnClickListener {
            pauseTime = 0L
            binding.myChrono.base = SystemClock.elapsedRealtime()
            binding.myChrono.stop()
            binding.startBtn.isEnabled = true
            binding.stopBtn.isEnabled = false
            binding.resetBtn.isEnabled = false
        }
    }

    override fun onBackPressed(){
        if(SystemClock.elapsedRealtime()-initTime > 3000) { // 3sec
            Log.d("mobildApp", "종료하려면 한번 더 누르세요!!!")
            initTime = SystemClock.elapsedRealtime()
        }
    }
}