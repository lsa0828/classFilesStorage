package com.example.mid20210802

import android.app.AlertDialog
import android.app.DatePickerDialog
import android.app.TimePickerDialog
import android.content.DialogInterface
import android.os.Bundle
import android.util.Log
import androidx.fragment.app.Fragment
import android.view.LayoutInflater
import android.view.View
import android.view.ViewGroup
import android.widget.DatePicker
import android.widget.TimePicker
import android.widget.Toast
import androidx.core.view.isVisible
import com.example.mid20210802.databinding.FragmentOneBinding

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
        val binding = FragmentOneBinding.inflate(inflater, container, false)

        binding.dateBtn.setOnClickListener {
            DatePickerDialog(requireContext(), object: DatePickerDialog.OnDateSetListener{
                override fun onDateSet(view: DatePicker?, year: Int, month: Int, dayOfMonth: Int) {
                    binding.dateBtn.text = "${year}년 ${month+1}월 ${dayOfMonth}일"
                }
            }, 2023, 4, 1).show()
        }

        binding.timeBtn.setOnClickListener {
            TimePickerDialog(requireContext(), object:TimePickerDialog.OnTimeSetListener{
                override fun onTimeSet(view: TimePicker?, hourOfDay: Int, minute: Int) {
                    if(hourOfDay >= 12) { binding.timeBtn.text = " 오후 ${hourOfDay}시 ${minute}분" }
                    else { binding.timeBtn.text = "오전 ${hourOfDay}시 ${minute}분"}
                }
            }, 15, 0, true).show()
        }

        var myroom = ""
        val alertHandler = object: DialogInterface.OnClickListener {
            override fun onClick(dialog: DialogInterface?, which: Int) {
                when(which) {
                    DialogInterface.BUTTON_POSITIVE -> {
                        binding.roomBtn.text = myroom
                        Toast.makeText(getContext(), myroom+"이 최종 선택되었습니다.", Toast.LENGTH_LONG).show()
                    }
                    DialogInterface.BUTTON_NEGATIVE -> {
                        Toast.makeText(getContext(), "예약룸 선택이 취소되었습니다.", Toast.LENGTH_LONG).show()
                    }
                }
            }
        }
        val rooms = arrayOf<String>("ROOM 1","ROOM 2","ROOM 3")
        binding.roomBtn.setOnClickListener {
            AlertDialog.Builder(requireContext()).run{
                setTitle("예약룸 선택하기")
                setSingleChoiceItems(rooms, 0, object: DialogInterface.OnClickListener {
                    override fun onClick(dialog: DialogInterface?, which: Int) {
                        myroom = rooms[which]
                    }
                })
                setPositiveButton("OK", alertHandler)
                setNegativeButton("CANCEL", alertHandler)
                show()
            }
        }

        binding.desBtn.setOnClickListener{
            binding.desText.text="예약자는 "+binding.nameEdit.text+"\n예약 날짜는 "+binding.dateBtn.text+
                        binding.timeBtn.text+"\n예약룸은 "+binding.roomBtn.text
            binding.desText.isVisible = true
        }

        return binding.root
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