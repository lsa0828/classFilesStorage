package com.example.myfinapplication

import android.content.Intent
import android.content.SharedPreferences
import android.graphics.Color
import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import android.util.Log
import android.view.Menu
import android.view.MenuItem
import androidx.preference.PreferenceManager
import androidx.recyclerview.widget.LinearLayoutManager
import com.example.myfinapplication.databinding.ActivityMoreBinding
import retrofit2.Call
import retrofit2.Callback
import retrofit2.Response

class MoreActivity : AppCompatActivity() {
    lateinit var binding: ActivityMoreBinding
    lateinit var sharedPreferences: SharedPreferences

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        binding = ActivityMoreBinding.inflate(layoutInflater)
        setContentView(binding.root)

        sharedPreferences = PreferenceManager.getDefaultSharedPreferences(this)
        val bgColor:String? = sharedPreferences.getString("more_bg_color", "#FFFFFF")
        binding.moreInput.setBackgroundColor(Color.parseColor(bgColor))
        val txColor:String? = sharedPreferences.getString("more_tx_color", "#000000")
        binding.input1.setTextColor(Color.parseColor(txColor))

        binding.searchButton.setOnClickListener {
            var call: Call<SearchListResponse> = MyApplication.networkService.getList(
                "AIzaSyDYCU0MuiHkqivpuDhRjApRf1ymfzG3lmU",
                binding.input1.text.toString(),
                "video",
                "snippet")

            call?.enqueue(object : Callback<SearchListResponse> {
                override fun onResponse(
                    call: Call<SearchListResponse>,
                    response: Response<SearchListResponse>
                ) {
                    if(response.isSuccessful){
                        binding.recyclerView.layoutManager = LinearLayoutManager(this@MoreActivity)
                        binding.recyclerView.adapter = MyVideoAdapter(this@MoreActivity, response.body()?.items)
                    }
                }

                override fun onFailure(call: Call<SearchListResponse>, t: Throwable) {
                    Log.d("mobileApp", "error...")
                }
            })
        }
    }
}