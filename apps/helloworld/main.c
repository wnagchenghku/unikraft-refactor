#include <stdio.h>
#include <stdlib.h>
#include <nnpack.h>

/* Import user configuration: */
#include <uk/config.h>

#include <cpuinfo-mock.h>
struct cpuinfo_mock_file filesystem[] = {
	{
		.path = "/proc/cpuinfo",
		.size = 4508,
		.content =
			"processor\t: 0\n"
			"vendor_id\t: GenuineIntel\n"
			"cpu family\t: 6\n"
			"model\t\t: 69\n"
			"model name\t: Intel(R) Core(TM) i5-4300U CPU @ 1.90GHz\n"
			"stepping\t: 1\n"
			"microcode\t: 0x23\n"
			"cpu MHz\t\t: 1890.545\n"
			"cache size\t: 3072 KB\n"
			"physical id\t: 0\n"
			"siblings\t: 4\n"
			"core id\t\t: 0\n"
			"cpu cores\t: 2\n"
			"apicid\t\t: 0\n"
			"initial apicid\t: 0\n"
			"fpu\t\t: yes\n"
			"fpu_exception\t: yes\n"
			"cpuid level\t: 13\n"
			"wp\t\t: yes\n"
			"flags\t\t: fpu vme de pse tsc msr pae mce cx8 apic sep mtrr pge mca cmov pat pse36 clflush dts acpi mmx fxsr sse sse2 ss ht tm pbe syscall nx pdpe1gb rdtscp lm constant_tsc arch_perfmon pebs bts rep_good nopl xtopology nonstop_tsc cpuid aperfmperf pni pclmulqdq dtes64 monitor ds_cpl vmx smx est tm2 ssse3 sdbg fma cx16 xtpr pdcm pcid sse4_1 sse4_2 x2apic movbe popcnt tsc_deadline_timer aes xsave avx f16c rdrand lahf_lm abm cpuid_fault epb invpcid_single pti retpoline spec_ctrl tpr_shadow vnmi flexpriority ept vpid fsgsbase tsc_adjust bmi1 avx2 smep bmi2 erms invpcid xsaveopt dtherm ida arat pln pts\n"
			"bugs\t\t: cpu_meltdown spectre_v1 spectre_v2 spec_store_bypass\n"
			"bogomips\t: 4988.49\n"
			"clflush size\t: 64\n"
			"cache_alignment\t: 64\n"
			"address sizes\t: 39 bits physical, 48 bits virtual\n"
			"power management:\n"
			"\n"
			"processor\t: 1\n"
			"vendor_id\t: GenuineIntel\n"
			"cpu family\t: 6\n"
			"model\t\t: 69\n"
			"model name\t: Intel(R) Core(TM) i5-4300U CPU @ 1.90GHz\n"
			"stepping\t: 1\n"
			"microcode\t: 0x23\n"
			"cpu MHz\t\t: 2001.958\n"
			"cache size\t: 3072 KB\n"
			"physical id\t: 0\n"
			"siblings\t: 4\n"
			"core id\t\t: 0\n"
			"cpu cores\t: 2\n"
			"apicid\t\t: 1\n"
			"initial apicid\t: 1\n"
			"fpu\t\t: yes\n"
			"fpu_exception\t: yes\n"
			"cpuid level\t: 13\n"
			"wp\t\t: yes\n"
			"flags\t\t: fpu vme de pse tsc msr pae mce cx8 apic sep mtrr pge mca cmov pat pse36 clflush dts acpi mmx fxsr sse sse2 ss ht tm pbe syscall nx pdpe1gb rdtscp lm constant_tsc arch_perfmon pebs bts rep_good nopl xtopology nonstop_tsc cpuid aperfmperf pni pclmulqdq dtes64 monitor ds_cpl vmx smx est tm2 ssse3 sdbg fma cx16 xtpr pdcm pcid sse4_1 sse4_2 x2apic movbe popcnt tsc_deadline_timer aes xsave avx f16c rdrand lahf_lm abm cpuid_fault epb invpcid_single pti retpoline spec_ctrl tpr_shadow vnmi flexpriority ept vpid fsgsbase tsc_adjust bmi1 avx2 smep bmi2 erms invpcid xsaveopt dtherm ida arat pln pts\n"
			"bugs\t\t: cpu_meltdown spectre_v1 spectre_v2 spec_store_bypass\n"
			"bogomips\t: 4988.49\n"
			"clflush size\t: 64\n"
			"cache_alignment\t: 64\n"
			"address sizes\t: 39 bits physical, 48 bits virtual\n"
			"power management:\n"
			"\n"
			"processor\t: 2\n"
			"vendor_id\t: GenuineIntel\n"
			"cpu family\t: 6\n"
			"model\t\t: 69\n"
			"model name\t: Intel(R) Core(TM) i5-4300U CPU @ 1.90GHz\n"
			"stepping\t: 1\n"
			"microcode\t: 0x23\n"
			"cpu MHz\t\t: 1790.755\n"
			"cache size\t: 3072 KB\n"
			"physical id\t: 0\n"
			"siblings\t: 4\n"
			"core id\t\t: 1\n"
			"cpu cores\t: 2\n"
			"apicid\t\t: 2\n"
			"initial apicid\t: 2\n"
			"fpu\t\t: yes\n"
			"fpu_exception\t: yes\n"
			"cpuid level\t: 13\n"
			"wp\t\t: yes\n"
			"flags\t\t: fpu vme de pse tsc msr pae mce cx8 apic sep mtrr pge mca cmov pat pse36 clflush dts acpi mmx fxsr sse sse2 ss ht tm pbe syscall nx pdpe1gb rdtscp lm constant_tsc arch_perfmon pebs bts rep_good nopl xtopology nonstop_tsc cpuid aperfmperf pni pclmulqdq dtes64 monitor ds_cpl vmx smx est tm2 ssse3 sdbg fma cx16 xtpr pdcm pcid sse4_1 sse4_2 x2apic movbe popcnt tsc_deadline_timer aes xsave avx f16c rdrand lahf_lm abm cpuid_fault epb invpcid_single pti retpoline spec_ctrl tpr_shadow vnmi flexpriority ept vpid fsgsbase tsc_adjust bmi1 avx2 smep bmi2 erms invpcid xsaveopt dtherm ida arat pln pts\n"
			"bugs\t\t: cpu_meltdown spectre_v1 spectre_v2 spec_store_bypass\n"
			"bogomips\t: 4988.49\n"
			"clflush size\t: 64\n"
			"cache_alignment\t: 64\n"
			"address sizes\t: 39 bits physical, 48 bits virtual\n"
			"power management:\n"
			"\n"
			"processor\t: 3\n"
			"vendor_id\t: GenuineIntel\n"
			"cpu family\t: 6\n"
			"model\t\t: 69\n"
			"model name\t: Intel(R) Core(TM) i5-4300U CPU @ 1.90GHz\n"
			"stepping\t: 1\n"
			"microcode\t: 0x23\n"
			"cpu MHz\t\t: 1905.257\n"
			"cache size\t: 3072 KB\n"
			"physical id\t: 0\n"
			"siblings\t: 4\n"
			"core id\t\t: 1\n"
			"cpu cores\t: 2\n"
			"apicid\t\t: 3\n"
			"initial apicid\t: 3\n"
			"fpu\t\t: yes\n"
			"fpu_exception\t: yes\n"
			"cpuid level\t: 13\n"
			"wp\t\t: yes\n"
			"flags\t\t: fpu vme de pse tsc msr pae mce cx8 apic sep mtrr pge mca cmov pat pse36 clflush dts acpi mmx fxsr sse sse2 ss ht tm pbe syscall nx pdpe1gb rdtscp lm constant_tsc arch_perfmon pebs bts rep_good nopl xtopology nonstop_tsc cpuid aperfmperf pni pclmulqdq dtes64 monitor ds_cpl vmx smx est tm2 ssse3 sdbg fma cx16 xtpr pdcm pcid sse4_1 sse4_2 x2apic movbe popcnt tsc_deadline_timer aes xsave avx f16c rdrand lahf_lm abm cpuid_fault epb invpcid_single pti retpoline spec_ctrl tpr_shadow vnmi flexpriority ept vpid fsgsbase tsc_adjust bmi1 avx2 smep bmi2 erms invpcid xsaveopt dtherm ida arat pln pts\n"
			"bugs\t\t: cpu_meltdown spectre_v1 spectre_v2 spec_store_bypass\n"
			"bogomips\t: 4988.49\n"
			"clflush size\t: 64\n"
			"cache_alignment\t: 64\n"
			"address sizes\t: 39 bits physical, 48 bits virtual\n"
			"power management:\n"
			"\n",
	},
	{
		.path = "/sys/devices/system/cpu/kernel_max",
		.size = 5,
		.content = "8191\n",
	},
	{
		.path = "/sys/devices/system/cpu/possible",
		.size = 4,
		.content = "0-7\n",
	},
	{
		.path = "/sys/devices/system/cpu/present",
		.size = 4,
		.content = "0-3\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu0/cpufreq/cpuinfo_max_freq",
		.size = 8,
		.content = "2900000\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu0/cpufreq/cpuinfo_min_freq",
		.size = 7,
		.content = "800000\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu0/topology/physical_package_id",
		.size = 2,
		.content = "0\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu0/topology/core_siblings_list",
		.size = 4,
		.content = "0-3\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu0/topology/core_id",
		.size = 2,
		.content = "0\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu0/topology/thread_siblings_list",
		.size = 4,
		.content = "0-1\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu0/cache/index0/coherency_line_size",
		.size = 3,
		.content = "64\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu0/cache/index0/level",
		.size = 2,
		.content = "1\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu0/cache/index0/number_of_sets",
		.size = 3,
		.content = "64\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu0/cache/index0/shared_cpu_list",
		.size = 4,
		.content = "0-1\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu0/cache/index0/size",
		.size = 4,
		.content = "32K\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu0/cache/index0/type",
		.size = 5,
		.content = "Data\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu0/cache/index0/ways_of_associativity",
		.size = 2,
		.content = "8\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu0/cache/index1/coherency_line_size",
		.size = 3,
		.content = "64\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu0/cache/index1/level",
		.size = 2,
		.content = "1\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu0/cache/index1/number_of_sets",
		.size = 3,
		.content = "64\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu0/cache/index1/shared_cpu_list",
		.size = 4,
		.content = "0-1\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu0/cache/index1/size",
		.size = 4,
		.content = "32K\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu0/cache/index1/type",
		.size = 12,
		.content = "Instruction\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu0/cache/index1/ways_of_associativity",
		.size = 2,
		.content = "8\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu0/cache/index2/coherency_line_size",
		.size = 3,
		.content = "64\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu0/cache/index2/level",
		.size = 2,
		.content = "2\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu0/cache/index2/number_of_sets",
		.size = 4,
		.content = "512\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu0/cache/index2/shared_cpu_list",
		.size = 4,
		.content = "0-1\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu0/cache/index2/size",
		.size = 5,
		.content = "256K\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu0/cache/index2/type",
		.size = 8,
		.content = "Unified\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu0/cache/index2/ways_of_associativity",
		.size = 2,
		.content = "8\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu0/cache/index3/coherency_line_size",
		.size = 3,
		.content = "64\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu0/cache/index3/level",
		.size = 2,
		.content = "3\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu0/cache/index3/number_of_sets",
		.size = 5,
		.content = "4096\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu0/cache/index3/shared_cpu_list",
		.size = 4,
		.content = "0-3\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu0/cache/index3/size",
		.size = 6,
		.content = "3072K\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu0/cache/index3/type",
		.size = 8,
		.content = "Unified\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu0/cache/index3/ways_of_associativity",
		.size = 3,
		.content = "12\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu1/cpufreq/cpuinfo_max_freq",
		.size = 8,
		.content = "2900000\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu1/cpufreq/cpuinfo_min_freq",
		.size = 7,
		.content = "800000\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu1/topology/physical_package_id",
		.size = 2,
		.content = "0\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu1/topology/core_siblings_list",
		.size = 4,
		.content = "0-3\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu1/topology/core_id",
		.size = 2,
		.content = "0\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu1/topology/thread_siblings_list",
		.size = 4,
		.content = "0-1\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu1/cache/index0/coherency_line_size",
		.size = 3,
		.content = "64\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu1/cache/index0/level",
		.size = 2,
		.content = "1\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu1/cache/index0/number_of_sets",
		.size = 3,
		.content = "64\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu1/cache/index0/shared_cpu_list",
		.size = 4,
		.content = "0-1\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu1/cache/index0/size",
		.size = 4,
		.content = "32K\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu1/cache/index0/type",
		.size = 5,
		.content = "Data\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu1/cache/index0/ways_of_associativity",
		.size = 2,
		.content = "8\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu1/cache/index1/coherency_line_size",
		.size = 3,
		.content = "64\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu1/cache/index1/level",
		.size = 2,
		.content = "1\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu1/cache/index1/number_of_sets",
		.size = 3,
		.content = "64\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu1/cache/index1/shared_cpu_list",
		.size = 4,
		.content = "0-1\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu1/cache/index1/size",
		.size = 4,
		.content = "32K\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu1/cache/index1/type",
		.size = 12,
		.content = "Instruction\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu1/cache/index1/ways_of_associativity",
		.size = 2,
		.content = "8\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu1/cache/index2/coherency_line_size",
		.size = 3,
		.content = "64\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu1/cache/index2/level",
		.size = 2,
		.content = "2\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu1/cache/index2/number_of_sets",
		.size = 4,
		.content = "512\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu1/cache/index2/shared_cpu_list",
		.size = 4,
		.content = "0-1\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu1/cache/index2/size",
		.size = 5,
		.content = "256K\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu1/cache/index2/type",
		.size = 8,
		.content = "Unified\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu1/cache/index2/ways_of_associativity",
		.size = 2,
		.content = "8\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu1/cache/index3/coherency_line_size",
		.size = 3,
		.content = "64\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu1/cache/index3/level",
		.size = 2,
		.content = "3\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu1/cache/index3/number_of_sets",
		.size = 5,
		.content = "4096\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu1/cache/index3/shared_cpu_list",
		.size = 4,
		.content = "0-3\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu1/cache/index3/size",
		.size = 6,
		.content = "3072K\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu1/cache/index3/type",
		.size = 8,
		.content = "Unified\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu1/cache/index3/ways_of_associativity",
		.size = 3,
		.content = "12\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu2/cpufreq/cpuinfo_max_freq",
		.size = 8,
		.content = "2900000\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu2/cpufreq/cpuinfo_min_freq",
		.size = 7,
		.content = "800000\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu2/topology/physical_package_id",
		.size = 2,
		.content = "0\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu2/topology/core_siblings_list",
		.size = 4,
		.content = "0-3\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu2/topology/core_id",
		.size = 2,
		.content = "1\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu2/topology/thread_siblings_list",
		.size = 4,
		.content = "2-3\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu2/cache/index0/coherency_line_size",
		.size = 3,
		.content = "64\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu2/cache/index0/level",
		.size = 2,
		.content = "1\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu2/cache/index0/number_of_sets",
		.size = 3,
		.content = "64\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu2/cache/index0/shared_cpu_list",
		.size = 4,
		.content = "2-3\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu2/cache/index0/size",
		.size = 4,
		.content = "32K\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu2/cache/index0/type",
		.size = 5,
		.content = "Data\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu2/cache/index0/ways_of_associativity",
		.size = 2,
		.content = "8\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu2/cache/index1/coherency_line_size",
		.size = 3,
		.content = "64\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu2/cache/index1/level",
		.size = 2,
		.content = "1\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu2/cache/index1/number_of_sets",
		.size = 3,
		.content = "64\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu2/cache/index1/shared_cpu_list",
		.size = 4,
		.content = "2-3\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu2/cache/index1/size",
		.size = 4,
		.content = "32K\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu2/cache/index1/type",
		.size = 12,
		.content = "Instruction\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu2/cache/index1/ways_of_associativity",
		.size = 2,
		.content = "8\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu2/cache/index2/coherency_line_size",
		.size = 3,
		.content = "64\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu2/cache/index2/level",
		.size = 2,
		.content = "2\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu2/cache/index2/number_of_sets",
		.size = 4,
		.content = "512\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu2/cache/index2/shared_cpu_list",
		.size = 4,
		.content = "2-3\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu2/cache/index2/size",
		.size = 5,
		.content = "256K\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu2/cache/index2/type",
		.size = 8,
		.content = "Unified\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu2/cache/index2/ways_of_associativity",
		.size = 2,
		.content = "8\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu2/cache/index3/coherency_line_size",
		.size = 3,
		.content = "64\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu2/cache/index3/level",
		.size = 2,
		.content = "3\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu2/cache/index3/number_of_sets",
		.size = 5,
		.content = "4096\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu2/cache/index3/shared_cpu_list",
		.size = 4,
		.content = "0-3\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu2/cache/index3/size",
		.size = 6,
		.content = "3072K\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu2/cache/index3/type",
		.size = 8,
		.content = "Unified\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu2/cache/index3/ways_of_associativity",
		.size = 3,
		.content = "12\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu3/cpufreq/cpuinfo_max_freq",
		.size = 8,
		.content = "2900000\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu3/cpufreq/cpuinfo_min_freq",
		.size = 7,
		.content = "800000\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu3/topology/physical_package_id",
		.size = 2,
		.content = "0\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu3/topology/core_siblings_list",
		.size = 4,
		.content = "0-3\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu3/topology/core_id",
		.size = 2,
		.content = "1\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu3/topology/thread_siblings_list",
		.size = 4,
		.content = "2-3\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu3/cache/index0/coherency_line_size",
		.size = 3,
		.content = "64\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu3/cache/index0/level",
		.size = 2,
		.content = "1\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu3/cache/index0/number_of_sets",
		.size = 3,
		.content = "64\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu3/cache/index0/shared_cpu_list",
		.size = 4,
		.content = "2-3\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu3/cache/index0/size",
		.size = 4,
		.content = "32K\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu3/cache/index0/type",
		.size = 5,
		.content = "Data\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu3/cache/index0/ways_of_associativity",
		.size = 2,
		.content = "8\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu3/cache/index1/coherency_line_size",
		.size = 3,
		.content = "64\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu3/cache/index1/level",
		.size = 2,
		.content = "1\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu3/cache/index1/number_of_sets",
		.size = 3,
		.content = "64\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu3/cache/index1/shared_cpu_list",
		.size = 4,
		.content = "2-3\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu3/cache/index1/size",
		.size = 4,
		.content = "32K\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu3/cache/index1/type",
		.size = 12,
		.content = "Instruction\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu3/cache/index1/ways_of_associativity",
		.size = 2,
		.content = "8\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu3/cache/index2/coherency_line_size",
		.size = 3,
		.content = "64\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu3/cache/index2/level",
		.size = 2,
		.content = "2\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu3/cache/index2/number_of_sets",
		.size = 4,
		.content = "512\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu3/cache/index2/shared_cpu_list",
		.size = 4,
		.content = "2-3\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu3/cache/index2/size",
		.size = 5,
		.content = "256K\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu3/cache/index2/type",
		.size = 8,
		.content = "Unified\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu3/cache/index2/ways_of_associativity",
		.size = 2,
		.content = "8\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu3/cache/index3/coherency_line_size",
		.size = 3,
		.content = "64\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu3/cache/index3/level",
		.size = 2,
		.content = "3\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu3/cache/index3/number_of_sets",
		.size = 5,
		.content = "4096\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu3/cache/index3/shared_cpu_list",
		.size = 4,
		.content = "0-3\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu3/cache/index3/size",
		.size = 6,
		.content = "3072K\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu3/cache/index3/type",
		.size = 8,
		.content = "Unified\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu3/cache/index3/ways_of_associativity",
		.size = 3,
		.content = "12\n",
	},
	{ NULL },
};

int main(int argc, char *argv[])
{
#if APPHELLOWORLD_PRINTARGS
	int i;

	printf("Arguments: ");
	for (i=0; i<argc; ++i)
		printf(" \"%s\"", argv[i]);
	printf("\n");
#endif
	cpuinfo_mock_filesystem(filesystem);

	enum nnp_status init_status = nnp_initialize();
	if (init_status != nnp_status_success) {
		fprintf(stderr, "NNPACK initialization failed: error code %d\n", init_status);
		exit(EXIT_FAILURE);
	}

	const size_t batch_size = 1;
	const size_t input_channels = 16;
	const size_t output_channels = 16;
	const struct nnp_padding input_padding = {0, 0, 0, 0};
	const struct nnp_size input_size = {180, 180};
	const struct nnp_size kernel_size = {3, 3};
	const struct nnp_size output_subsampling = {1, 1};
	const struct nnp_size output_size = {
		.width = (input_padding.left + input_size.width + input_padding.right - kernel_size.width) / output_subsampling.width + 1,
		.height = (input_padding.top + input_size.height + input_padding.bottom - kernel_size.height) / output_subsampling.height + 1
	};
	void* input = malloc(batch_size * input_channels * input_size.width * input_size.height * sizeof(float));
	void* kernel = malloc(input_channels * output_channels * kernel_size.width * kernel_size.height * sizeof(float));
	void* output = malloc(batch_size * output_channels * output_size.width * output_size.height * sizeof(float));
	void* bias = malloc(output_channels * sizeof(float));

	memset(input, 0, batch_size * input_channels * input_size.width * input_size.height * sizeof(float));
	memset(kernel, 0, input_channels * output_channels * kernel_size.width * kernel_size.height * sizeof(float));
	memset(output, 0, batch_size * output_channels * output_size.width * output_size.height * sizeof(float));
	memset(bias, 0, output_channels * sizeof(float));

	enum nnp_convolution_algorithm algorithm = nnp_convolution_algorithm_auto;
	enum nnp_convolution_transform_strategy transform_strategy = nnp_convolution_transform_strategy_compute;
	enum nnp_status status = nnp_status_success;
	status = nnp_convolution_inference(
		algorithm, transform_strategy,
		input_channels, output_channels,
		input_size, input_padding, kernel_size, output_subsampling,
		input, kernel, bias, output,
		NULL, NULL,
		nnp_activation_identity, NULL,
		NULL,
		NULL);
	if (status != nnp_status_success) {
		fprintf(stderr, "NNPACK nnp_convolution_inference failed: error code %d\n", status);
		exit(EXIT_FAILURE);
	}
	printf("Hello world!\n");
}
