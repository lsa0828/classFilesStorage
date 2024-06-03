package com.example.myfinapplication

import android.graphics.Color
import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import com.example.myfinapplication.databinding.ActivityGraphBinding
import com.github.mikephil.charting.data.Entry
import com.github.mikephil.charting.data.LineData
import com.github.mikephil.charting.data.LineDataSet
import com.google.android.play.integrity.internal.x
import com.google.android.play.integrity.internal.y

class GraphActivity : AppCompatActivity() {
    override fun onCreate(savedInstanceState: Bundle?) {
        var binding = ActivityGraphBinding.inflate(layoutInflater)
        super.onCreate(savedInstanceState)
        setContentView(binding.root)

        var values:ArrayList<Entry> = ArrayList()
        //values.add(Entry(x, y))
        for(i in 0 until 10) {
            var v = i * i + 18
            values.add(Entry(i.toFloat(), v.toFloat()))
        }
        var dataset = LineDataSet(values, "웃음지수")
        dataset.color = Color.MAGENTA
        dataset.setCircleColor(Color.BLUE)
        dataset.lineWidth = 2f
        var data = LineData(dataset)
        binding.lineChart.data = data
    }
}