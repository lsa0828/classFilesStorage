package com.example.myfinapplication

import android.os.Bundle
import android.text.TextUtils
import androidx.preference.EditTextPreference
import androidx.preference.ListPreference
import androidx.preference.Preference
import androidx.preference.PreferenceFragmentCompat

class MySettingFragment : PreferenceFragmentCompat() {

    override fun onCreatePreferences(savedInstanceState: Bundle?, rootKey: String?) {
        setPreferencesFromResource(R.xml.settings, rootKey)

        val addBgColorPreference: ListPreference? = findPreference("add_bg_color")
        addBgColorPreference?.summaryProvider = ListPreference.SimpleSummaryProvider.getInstance()

        val addTxColorPreference: ListPreference? = findPreference("add_tx_color")
        addTxColorPreference?.summaryProvider = ListPreference.SimpleSummaryProvider.getInstance()

        val moreBgColorPreference: ListPreference? = findPreference("more_bg_color")
        moreBgColorPreference?.summaryProvider = ListPreference.SimpleSummaryProvider.getInstance()

        val moreTxColorPreference: ListPreference? = findPreference("more_tx_color")
        moreTxColorPreference?.summaryProvider = ListPreference.SimpleSummaryProvider.getInstance()
    }
}