package com.example.myfinapplication

import androidx.multidex.MultiDexApplication
import com.google.firebase.auth.FirebaseAuth
import com.google.firebase.auth.ktx.auth
import com.google.firebase.firestore.FirebaseFirestore
import com.google.firebase.ktx.Firebase
import com.google.firebase.storage.FirebaseStorage
import com.google.firebase.storage.ktx.storage
import retrofit2.Retrofit
import retrofit2.converter.gson.GsonConverterFactory

class MyApplication: MultiDexApplication() {
    companion object {
        lateinit var db : FirebaseFirestore
        lateinit var storage : FirebaseStorage
        lateinit var auth : FirebaseAuth

        var networkService : NetworkService
        val retrofit: Retrofit
            get() = Retrofit.Builder()
                .baseUrl("https://www.googleapis.com/")
                .addConverterFactory(GsonConverterFactory.create())
                .build()
        init{
            networkService = retrofit.create(NetworkService::class.java)
        }

        var networkService2: NetworkService2
        val retrofit2: Retrofit
            get() = Retrofit.Builder()
                .baseUrl("http://apis.data.go.kr/6480000/gyeongnamseniorwelfare/")
                .addConverterFactory(GsonConverterFactory.create())
                .build()
        init{
            networkService2 = retrofit2.create(NetworkService2::class.java)
        }

        var email:String? = null
        fun checkAuth() : Boolean{
            var currentuser = auth.currentUser
            return currentuser?.let{
                email = currentuser.email
                if(currentuser.isEmailVerified) true
                else false
            } ?: false
        }
    }

    override fun onCreate() {
        super.onCreate()
        auth = Firebase.auth

        db = FirebaseFirestore.getInstance()
        storage = Firebase.storage
    }
}