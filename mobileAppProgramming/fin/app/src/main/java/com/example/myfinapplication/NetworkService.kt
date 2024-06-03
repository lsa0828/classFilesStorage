package com.example.myfinapplication

import retrofit2.Call
import retrofit2.http.GET
import retrofit2.http.Query

interface NetworkService {
    @GET("youtube/v3/search")
    fun getList(
        @Query("key") key: String,
        @Query("q") search_query: String,
        @Query("type") returnType: String,
        @Query("part") returnData: String
    ): Call<SearchListResponse>
}