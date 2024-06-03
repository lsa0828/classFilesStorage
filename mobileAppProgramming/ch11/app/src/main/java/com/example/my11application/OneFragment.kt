package com.example.my11application

import android.app.AlertDialog
import android.app.ProgressDialog.show
import android.content.Context
import android.graphics.BitmapFactory
import android.graphics.Canvas
import android.graphics.drawable.Drawable
import android.os.Bundle
import androidx.fragment.app.Fragment
import android.view.LayoutInflater
import android.view.View
import android.view.ViewGroup
import android.widget.Toast
import androidx.core.content.res.ResourcesCompat
import androidx.recyclerview.widget.GridLayoutManager
import androidx.recyclerview.widget.LinearLayoutManager
import androidx.recyclerview.widget.RecyclerView
import androidx.recyclerview.widget.RecyclerView.Recycler
import com.example.my11application.databinding.FragmentOneBinding
import com.example.my11application.databinding.ItemRecyclerviewBinding

// TODO: Rename parameter arguments, choose names that match
// the fragment initialization parameters, e.g. ARG_ITEM_NUMBER
private const val ARG_PARAM1 = "param1"
private const val ARG_PARAM2 = "param2"

/**
 * A simple [Fragment] subclass.
 * Use the [OneFragment.newInstance] factory method to
 * create an instance of this fragment.
 */

class OneFragment : Fragment() {
    // TODO: Rename and change types of parameters
    private var param1: String? = null
    private var param2: String? = null

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        arguments?.let {
            param1 = it.getString(ARG_PARAM1)
            param2 = it.getString(ARG_PARAM2)
        }
    }

    override fun onCreateView(
        inflater: LayoutInflater, container: ViewGroup?,
        savedInstanceState: Bundle?
    ): View? {
        // Inflate the layout for this fragment
        val binding = FragmentOneBinding.inflate(inflater, container, false)

        // Toast.makeText(context, "프레그먼트 토스트", Toast.LENGTH_LONG).show()

        /* 리사이클러 뷰 출력 */
        /* super.onCreate(savedInstanceState)
        val binding = ActivityRecyclerViewBinding.inflate(layoutInflater)
        setContentView(binding.root)
         */
        val datas = mutableListOf<String>()
        for(i in 1..9) {
            datas.add("Item $i")
        }
        /* val layoutManager = LinearLayoutManager(this)
        layoutManager.orientation = LinearLayoutManager.HORIZONTAL 가로로 배치
        binding.recyclerView.layoutManager = layoutManager */
        // binding.recyclerView.layoutManager = LinearLayoutManager(context) // activity 세로로 배치
        binding.recyclerView.layoutManager = GridLayoutManager(context, 2) // ,GridLayoutManager.HORIZONTAL, false 가로로 배치
        binding.recyclerView.adapter = MyAdapter(datas)
        binding.recyclerView.addItemDecoration(MyDecoration(activity as Context))
        // binding.recyclerView.addItemDecoration(DividerItemDecoration(context, LinearyLayout Manager.VERTICAL))
        /* 여기까지 */

        binding.fab.setOnClickListener {
            /**when(binding.fab.isExtended) {
                true -> binding.fab.shrink()
                false -> binding.fab.extend()
            }*/
            AlertDialog.Builder(context).run {
                setTitle("테스트 알림창")
                setMessage("데이터를 추가하시겠습니까?")
                setPositiveButton("OK", null)
                setNegativeButton("Cancel", null)
                show()
            }
        }

        return binding.root
        // return inflater.inflate(R.layout.fragment_one, container, false)
    }

    companion object {
        /**
         * Use this factory method to create a new instance of
         * this fragment using the provided parameters.
         *
         * @param param1 Parameter 1.
         * @param param2 Parameter 2.
         * @return A new instance of fragment OneFragment.
         */
        // TODO: Rename and change types and number of parameters
        @JvmStatic
        fun newInstance(param1: String, param2: String) =
            OneFragment().apply {
                arguments = Bundle().apply {
                    putString(ARG_PARAM1, param1)
                    putString(ARG_PARAM2, param2)
                }
            }
    }
}