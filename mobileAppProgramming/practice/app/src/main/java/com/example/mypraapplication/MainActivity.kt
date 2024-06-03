package com.example.mypraapplication

import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import android.util.Log
import android.view.KeyEvent
import android.view.MotionEvent
import android.view.View
import com.example.mypraapplication.databinding.ActivityMainBinding

class MainActivity : AppCompatActivity() {
    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)

        val binding = ActivityMainBinding.inflate(layoutInflater)
        setContentView(binding.root)

        binding.button.setOnClickListener {
            binding.button.visibility = View.INVISIBLE
            binding.imageView.visibility = View.VISIBLE
        }
        binding.imageView.setOnClickListener {
            binding.button.visibility = View.VISIBLE
            binding.imageView.visibility = View.INVISIBLE
        }

        binding.helloBtn.setOnClickListener(object: View.OnClickListener{
            override fun onClick(v: View?) {
                Log.d("mobileApp", "helloBtn_CLICK")
            }
        })
        binding.helloBtn.setOnLongClickListener(object: View.OnLongClickListener{
            override fun onLongClick(v:View?): Boolean {
                Log.d("mobileApp", "helloBtn_LONG_CLICK")
                return true
            }
        })
        /*super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_main)*/
    }

    /* 화면 터치 */
    override fun onTouchEvent(event: MotionEvent?): Boolean {
        when (event?.action){
            MotionEvent.ACTION_DOWN -> {
                Log.d("mobileApp", "화면 누른 순간")
            }
            MotionEvent.ACTION_UP -> {
                Log.d("mobileApp", "손가락 떼는 순간, 객체 뷰x:${event.x}, 화면X:${event.rawX}")
            }
            MotionEvent.ACTION_MOVE -> {
                Log.d("mobileApp", "손가락 누른 채 이동하는 순간")
            }
        }
        return super.onTouchEvent(event)
    }

    override fun onKeyDown(KeyCode: Int, event: KeyEvent?): Boolean {
        when(KeyCode){
            KeyEvent.KEYCODE_0 -> Log.d("mobileApp", "KeyEvent.KEYCODE_0")
            KeyEvent.KEYCODE_A -> Log.d("mobileApp", "KeyEvent.KEYCODE_A")
            KeyEvent.KEYCODE_BACK -> Log.d("", "")
            KeyEvent.KEYCODE_VOLUME_UP -> Log.d("", "")
        }
        Log.d("mobileApp", "키 누른 순간")
        return super.onKeyDown(keyCode, event)
    }
    override fun onBackPressed() {
        Log.d("","")
    }
}