package com.example.myfinapplication

import retrofit2.Call
import retrofit2.http.GET
import retrofit2.http.Query

interface NetworkService2 {
    @GET("gyeongnamseniorwelfareList")
    fun getList(
        @Query("ServiceKey") apikey: String,
        @Query("pageNo") page: Int,
        @Query("numOfRows") pageSize: Int,
        @Query("resultType") returnType: String
    ) : Call<MyModel>
}