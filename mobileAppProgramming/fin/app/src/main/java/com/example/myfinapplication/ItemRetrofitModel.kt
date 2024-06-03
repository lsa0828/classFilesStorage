package com.example.myfinapplication

data class ItemRetrofitModel (
    var pageNo: Long = 0,
    var sigungu: String? = null,
    var title: String? = null,
    var roadaddress: String? = null,
    var tel: String? = null
)
data class MyItem(val item:ItemRetrofitModel)
data class MyItems(val items:MutableList<MyItem>)
data class MyModel(val body:MyItems)