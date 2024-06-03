package com.example.mypra3application

import android.app.ProgressDialog.show
import android.content.DialogInterface
import android.graphics.Color
import android.os.Build
import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import android.util.Log
import android.widget.Toast
import androidx.annotation.RequiresApi
import androidx.appcompat.app.AlertDialog
import com.example.mypra3application.databinding.ActivityMenu2Binding

class MenuActivity2 : AppCompatActivity() {
    @RequiresApi(Build.VERSION_CODES.R)
    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        val binding= ActivityMenu2Binding.inflate(layoutInflater)
        setContentView(binding.root)

        setSupportActionBar(binding.toolbar)

        val alertHandler = object: DialogInterface.OnClickListener{
            override fun onClick(dialog: DialogInterface?, which: Int) {
                when(which) {
                    DialogInterface.BUTTON_POSITIVE -> {
                        if(binding.back.isChecked  == true) {
                            if(binding.red.isChecked == true) {
                                Toast.makeText(getApplicationContext(), "배경색(빨간색) 변경되었습니다.", Toast.LENGTH_LONG).show()
                                binding.set.setBackgroundColor(Color.parseColor("#ff0000"))
                            }
                            else if(binding.green.isChecked == true) {
                                Toast.makeText(getApplicationContext(), "배경색(초록색) 변경되었습니다.", Toast.LENGTH_LONG).show()
                                binding.set.setBackgroundColor(Color.parseColor("#00ff00"))
                            }
                            else if(binding.blue.isChecked == true) {
                                Toast.makeText(getApplicationContext(), "배경색(파란색) 변경되었습니다.", Toast.LENGTH_LONG).show()
                                binding.set.setBackgroundColor(Color.parseColor("#0000ff"))
                            }
                        }
                        else if(binding.email.isChecked == true) {
                            Toast.makeText(getApplicationContext(), "이메일("+binding.emailEdit.text.toString()+") 변경되었습니다.", Toast.LENGTH_LONG).show()
                        }
                        else if(binding.phone.isChecked == true) {
                            Toast.makeText(getApplicationContext(), "전화번호("+binding.phoneEdit.text.toString()+") 변경되었습니다.", Toast.LENGTH_LONG).show()
                        }
                        else {
                            Toast.makeText(getApplicationContext(), "변경 설정이 없습니다.", Toast.LENGTH_LONG).show()
                        }
                    }
                    DialogInterface.BUTTON_NEGATIVE -> {
                        Toast.makeText(getApplicationContext(), "설정이 취소되었습니다.", Toast.LENGTH_LONG).show()
                    }
                }
            }
        }
        binding.setting.setOnClickListener {
            AlertDialog.Builder(this).run{
                setTitle("알림")
                setMessage("정말 종료하시겠습니까?")
                setPositiveButton("Yes", alertHandler)
                setNegativeButton("No", alertHandler)
                show()
            }
        }
    }
}