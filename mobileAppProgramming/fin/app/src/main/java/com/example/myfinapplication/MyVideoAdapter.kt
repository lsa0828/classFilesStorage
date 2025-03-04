package com.example.myfinapplication

import android.content.Context
import android.view.LayoutInflater
import android.view.View
import android.view.ViewGroup
import androidx.recyclerview.widget.RecyclerView
import com.bumptech.glide.Glide
import com.bumptech.glide.load.engine.DiskCacheStrategy
import com.example.myfinapplication.R
import com.example.myfinapplication.SearchResult
import com.example.myfinapplication.databinding.MovieVideoItemBinding

class MyViewHolder(val binding: MovieVideoItemBinding): RecyclerView.ViewHolder(binding.root)
class MyVideoAdapter(val context: Context, val datas: ArrayList<SearchResult>?) : RecyclerView.Adapter<RecyclerView.ViewHolder>() {

    override fun getItemCount(): Int{
        return datas?.size ?: 0
    }

    override fun onCreateViewHolder(parent: ViewGroup, viewType: Int): RecyclerView.ViewHolder
            = MyViewHolder(MovieVideoItemBinding.inflate(LayoutInflater.from(parent.context), parent, false))

    override fun onBindViewHolder(holder: RecyclerView.ViewHolder, position: Int) {
        val binding=(holder as MyViewHolder).binding
        val model = datas!![position].snippet!!

        binding.dateTextView.text = model.publishedAt
        binding.titleTextView.text = model.title
        binding.contentsTextView.text = model.description

        if(model.thumbnails != null && model.thumbnails.medium != null) {
            Glide.with(binding.root)
                .load(model.thumbnails.medium.url)
                .centerCrop()
                .diskCacheStrategy(DiskCacheStrategy.NONE)
                .skipMemoryCache(true)
                .dontAnimate()
                .into(binding.thumbnailImageView)
        }
    }
}