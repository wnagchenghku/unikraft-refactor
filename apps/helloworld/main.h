struct cpuinfo_mock_cpuid cpuid_dump[] = {
	{
		.input_eax = 0x00000000,
		.eax = 0x00000016,
		.ebx = 0x756E6547,
		.ecx = 0x6C65746E,
		.edx = 0x49656E69,
	},
	{
		.input_eax = 0x00000001,
		.eax = 0x000806EA,
		.ebx = 0x05100800,
		.ecx = 0x7FFAFBBF,
		.edx = 0xBFEBFBFF,
	},
	{
		.input_eax = 0x00000002,
		.eax = 0x76036301,
		.ebx = 0x00F0B5FF,
		.ecx = 0x00000000,
		.edx = 0x00C30000,
	},
	{
		.input_eax = 0x00000003,
		.eax = 0x00000000,
		.ebx = 0x00000000,
		.ecx = 0x00000000,
		.edx = 0x00000000,
	},
	{
		.input_eax = 0x00000004,
		.input_ecx = 0x00000000,
		.eax = 0x1C004121,
		.ebx = 0x01C0003F,
		.ecx = 0x0000003F,
		.edx = 0x00000000,
	},
	{
		.input_eax = 0x00000004,
		.input_ecx = 0x00000001,
		.eax = 0x1C004122,
		.ebx = 0x01C0003F,
		.ecx = 0x0000003F,
		.edx = 0x00000000,
	},
	{
		.input_eax = 0x00000004,
		.input_ecx = 0x00000002,
		.eax = 0x1C004143,
		.ebx = 0x00C0003F,
		.ecx = 0x000003FF,
		.edx = 0x00000000,
	},
	{
		.input_eax = 0x00000004,
		.input_ecx = 0x00000003,
		.eax = 0x1C03C163,
		.ebx = 0x03C0003F,
		.ecx = 0x00001FFF,
		.edx = 0x00000006,
	},
	{
		.input_eax = 0x00000005,
		.eax = 0x00000040,
		.ebx = 0x00000040,
		.ecx = 0x00000003,
		.edx = 0x11142120,
	},
	{
		.input_eax = 0x00000006,
		.eax = 0x000027F7,
		.ebx = 0x00000002,
		.ecx = 0x00000009,
		.edx = 0x00000000,
	},
	{
		.input_eax = 0x00000007,
		.input_ecx = 0x00000000,
		.eax = 0x00000000,
		.ebx = 0x029C67AF,
		.ecx = 0x00000000,
		.edx = 0x9C000000,
	},
	{
		.input_eax = 0x00000008,
		.eax = 0x00000000,
		.ebx = 0x00000000,
		.ecx = 0x00000000,
		.edx = 0x00000000,
	},
	{
		.input_eax = 0x00000009,
		.eax = 0x00000000,
		.ebx = 0x00000000,
		.ecx = 0x00000000,
		.edx = 0x00000000,
	},
	{
		.input_eax = 0x0000000A,
		.eax = 0x07300404,
		.ebx = 0x00000000,
		.ecx = 0x00000000,
		.edx = 0x00000603,
	},
	{
		.input_eax = 0x0000000B,
		.input_ecx = 0x00000000,
		.eax = 0x00000001,
		.ebx = 0x00000002,
		.ecx = 0x00000100,
		.edx = 0x00000005,
	},
	{
		.input_eax = 0x0000000B,
		.input_ecx = 0x00000001,
		.eax = 0x00000004,
		.ebx = 0x00000008,
		.ecx = 0x00000201,
		.edx = 0x00000005,
	},
	{
		.input_eax = 0x0000000C,
		.eax = 0x00000000,
		.ebx = 0x00000000,
		.ecx = 0x00000000,
		.edx = 0x00000000,
	},
	{
		.input_eax = 0x0000000D,
		.eax = 0x0000001F,
		.ebx = 0x00000440,
		.ecx = 0x00000440,
		.edx = 0x00000000,
	},
	{
		.input_eax = 0x0000000E,
		.eax = 0x00000000,
		.ebx = 0x00000000,
		.ecx = 0x00000000,
		.edx = 0x00000000,
	},
	{
		.input_eax = 0x0000000F,
		.eax = 0x00000000,
		.ebx = 0x00000000,
		.ecx = 0x00000000,
		.edx = 0x00000000,
	},
	{
		.input_eax = 0x00000010,
		.eax = 0x00000000,
		.ebx = 0x00000000,
		.ecx = 0x00000000,
		.edx = 0x00000000,
	},
	{
		.input_eax = 0x00000011,
		.eax = 0x00000000,
		.ebx = 0x00000000,
		.ecx = 0x00000000,
		.edx = 0x00000000,
	},
	{
		.input_eax = 0x00000012,
		.input_ecx = 0x00000000,
		.eax = 0x00000000,
		.ebx = 0x00000000,
		.ecx = 0x00000000,
		.edx = 0x00000000,
	},
	{
		.input_eax = 0x00000012,
		.input_ecx = 0x00000001,
		.eax = 0x00000000,
		.ebx = 0x00000000,
		.ecx = 0x00000000,
		.edx = 0x00000000,
	},
	{
		.input_eax = 0x00000013,
		.eax = 0x00000000,
		.ebx = 0x00000000,
		.ecx = 0x00000000,
		.edx = 0x00000000,
	},
	{
		.input_eax = 0x00000014,
		.input_ecx = 0x00000000,
		.eax = 0x00000001,
		.ebx = 0x0000000F,
		.ecx = 0x00000007,
		.edx = 0x00000000,
	},
	{
		.input_eax = 0x00000014,
		.input_ecx = 0x00000001,
		.eax = 0x02490002,
		.ebx = 0x003F3FFF,
		.ecx = 0x00000000,
		.edx = 0x00000000,
	},
	{
		.input_eax = 0x00000015,
		.eax = 0x00000002,
		.ebx = 0x000000A6,
		.ecx = 0x00000000,
		.edx = 0x00000000,
	},
	{
		.input_eax = 0x00000016,
		.eax = 0x000007D0,
		.ebx = 0x00000FA0,
		.ecx = 0x00000064,
		.edx = 0x00000000,
	},
	{
		.input_eax = 0x80000000,
		.eax = 0x80000008,
		.ebx = 0x00000000,
		.ecx = 0x00000000,
		.edx = 0x00000000,
	},
	{
		.input_eax = 0x80000001,
		.eax = 0x00000000,
		.ebx = 0x00000000,
		.ecx = 0x00000121,
		.edx = 0x2C100800,
	},
	{
		.input_eax = 0x80000002,
		.eax = 0x65746E49,
		.ebx = 0x2952286C,
		.ecx = 0x726F4320,
		.edx = 0x4D542865,
	},
	{
		.input_eax = 0x80000003,
		.eax = 0x37692029,
		.ebx = 0x3535382D,
		.ecx = 0x43205530,
		.edx = 0x40205550,
	},
	{
		.input_eax = 0x80000004,
		.eax = 0x382E3120,
		.ebx = 0x7A484730,
		.ecx = 0x00000000,
		.edx = 0x00000000,
	},
	{
		.input_eax = 0x80000005,
		.eax = 0x00000000,
		.ebx = 0x00000000,
		.ecx = 0x00000000,
		.edx = 0x00000000,
	},
	{
		.input_eax = 0x80000006,
		.eax = 0x00000000,
		.ebx = 0x00000000,
		.ecx = 0x01006040,
		.edx = 0x00000000,
	},
	{
		.input_eax = 0x80000007,
		.eax = 0x00000000,
		.ebx = 0x00000000,
		.ecx = 0x00000000,
		.edx = 0x00000100,
	},
	{
		.input_eax = 0x80000008,
		.eax = 0x00003027,
		.ebx = 0x00000000,
		.ecx = 0x00000000,
		.edx = 0x00000000,
	},
};

struct cpuinfo_mock_file filesystem[] = {
	{
		.path = "/proc/cpuinfo",
		.size = 10184,
		.content =
			"processor\t: 0\n"
			"vendor_id\t: GenuineIntel\n"
			"cpu family\t: 6\n"
			"model\t\t: 142\n"
			"model name\t: Intel(R) Core(TM) i7-8550U CPU @ 1.80GHz\n"
			"stepping\t: 10\n"
			"microcode\t: 0x96\n"
			"cpu MHz\t\t: 3052.391\n"
			"cache size\t: 8192 KB\n"
			"physical id\t: 0\n"
			"siblings\t: 8\n"
			"core id\t\t: 0\n"
			"cpu cores\t: 4\n"
			"apicid\t\t: 0\n"
			"initial apicid\t: 0\n"
			"fpu\t\t: yes\n"
			"fpu_exception\t: yes\n"
			"cpuid level\t: 22\n"
			"wp\t\t: yes\n"
			"flags\t\t: fpu vme de pse tsc msr pae mce cx8 apic sep mtrr pge mca cmov pat pse36 clflush dts acpi mmx fxsr sse sse2 ss ht tm pbe syscall nx pdpe1gb rdtscp lm constant_tsc art arch_perfmon pebs bts rep_good nopl xtopology nonstop_tsc cpuid aperfmperf tsc_known_freq pni pclmulqdq dtes64 monitor ds_cpl vmx est tm2 ssse3 sdbg fma cx16 xtpr pdcm pcid sse4_1 sse4_2 x2apic movbe popcnt tsc_deadline_timer aes xsave avx f16c rdrand lahf_lm abm 3dnowprefetch cpuid_fault epb invpcid_single pti retpoline intel_pt rsb_ctxsw spec_ctrl ssbd tpr_shadow vnmi flexpriority ept vpid fsgsbase tsc_adjust bmi1 avx2 smep bmi2 erms invpcid mpx rdseed adx smap clflushopt xsaveopt xsavec xgetbv1 xsaves dtherm ida arat pln pts hwp hwp_notify hwp_act_window hwp_epp\n"
			"bugs\t\t: cpu_meltdown spectre_v1 spectre_v2 spec_store_bypass\n"
			"bogomips\t: 3984.00\n"
			"clflush size\t: 64\n"
			"cache_alignment\t: 64\n"
			"address sizes\t: 39 bits physical, 48 bits virtual\n"
			"power management:\n"
			"\n"
			"processor\t: 1\n"
			"vendor_id\t: GenuineIntel\n"
			"cpu family\t: 6\n"
			"model\t\t: 142\n"
			"model name\t: Intel(R) Core(TM) i7-8550U CPU @ 1.80GHz\n"
			"stepping\t: 10\n"
			"microcode\t: 0x96\n"
			"cpu MHz\t\t: 3031.916\n"
			"cache size\t: 8192 KB\n"
			"physical id\t: 0\n"
			"siblings\t: 8\n"
			"core id\t\t: 1\n"
			"cpu cores\t: 4\n"
			"apicid\t\t: 2\n"
			"initial apicid\t: 2\n"
			"fpu\t\t: yes\n"
			"fpu_exception\t: yes\n"
			"cpuid level\t: 22\n"
			"wp\t\t: yes\n"
			"flags\t\t: fpu vme de pse tsc msr pae mce cx8 apic sep mtrr pge mca cmov pat pse36 clflush dts acpi mmx fxsr sse sse2 ss ht tm pbe syscall nx pdpe1gb rdtscp lm constant_tsc art arch_perfmon pebs bts rep_good nopl xtopology nonstop_tsc cpuid aperfmperf tsc_known_freq pni pclmulqdq dtes64 monitor ds_cpl vmx est tm2 ssse3 sdbg fma cx16 xtpr pdcm pcid sse4_1 sse4_2 x2apic movbe popcnt tsc_deadline_timer aes xsave avx f16c rdrand lahf_lm abm 3dnowprefetch cpuid_fault epb invpcid_single pti retpoline intel_pt rsb_ctxsw spec_ctrl ssbd tpr_shadow vnmi flexpriority ept vpid fsgsbase tsc_adjust bmi1 avx2 smep bmi2 erms invpcid mpx rdseed adx smap clflushopt xsaveopt xsavec xgetbv1 xsaves dtherm ida arat pln pts hwp hwp_notify hwp_act_window hwp_epp\n"
			"bugs\t\t: cpu_meltdown spectre_v1 spectre_v2 spec_store_bypass\n"
			"bogomips\t: 3984.00\n"
			"clflush size\t: 64\n"
			"cache_alignment\t: 64\n"
			"address sizes\t: 39 bits physical, 48 bits virtual\n"
			"power management:\n"
			"\n"
			"processor\t: 2\n"
			"vendor_id\t: GenuineIntel\n"
			"cpu family\t: 6\n"
			"model\t\t: 142\n"
			"model name\t: Intel(R) Core(TM) i7-8550U CPU @ 1.80GHz\n"
			"stepping\t: 10\n"
			"microcode\t: 0x96\n"
			"cpu MHz\t\t: 3039.344\n"
			"cache size\t: 8192 KB\n"
			"physical id\t: 0\n"
			"siblings\t: 8\n"
			"core id\t\t: 2\n"
			"cpu cores\t: 4\n"
			"apicid\t\t: 4\n"
			"initial apicid\t: 4\n"
			"fpu\t\t: yes\n"
			"fpu_exception\t: yes\n"
			"cpuid level\t: 22\n"
			"wp\t\t: yes\n"
			"flags\t\t: fpu vme de pse tsc msr pae mce cx8 apic sep mtrr pge mca cmov pat pse36 clflush dts acpi mmx fxsr sse sse2 ss ht tm pbe syscall nx pdpe1gb rdtscp lm constant_tsc art arch_perfmon pebs bts rep_good nopl xtopology nonstop_tsc cpuid aperfmperf tsc_known_freq pni pclmulqdq dtes64 monitor ds_cpl vmx est tm2 ssse3 sdbg fma cx16 xtpr pdcm pcid sse4_1 sse4_2 x2apic movbe popcnt tsc_deadline_timer aes xsave avx f16c rdrand lahf_lm abm 3dnowprefetch cpuid_fault epb invpcid_single pti retpoline intel_pt rsb_ctxsw spec_ctrl ssbd tpr_shadow vnmi flexpriority ept vpid fsgsbase tsc_adjust bmi1 avx2 smep bmi2 erms invpcid mpx rdseed adx smap clflushopt xsaveopt xsavec xgetbv1 xsaves dtherm ida arat pln pts hwp hwp_notify hwp_act_window hwp_epp\n"
			"bugs\t\t: cpu_meltdown spectre_v1 spectre_v2 spec_store_bypass\n"
			"bogomips\t: 3984.00\n"
			"clflush size\t: 64\n"
			"cache_alignment\t: 64\n"
			"address sizes\t: 39 bits physical, 48 bits virtual\n"
			"power management:\n"
			"\n"
			"processor\t: 3\n"
			"vendor_id\t: GenuineIntel\n"
			"cpu family\t: 6\n"
			"model\t\t: 142\n"
			"model name\t: Intel(R) Core(TM) i7-8550U CPU @ 1.80GHz\n"
			"stepping\t: 10\n"
			"microcode\t: 0x96\n"
			"cpu MHz\t\t: 3037.220\n"
			"cache size\t: 8192 KB\n"
			"physical id\t: 0\n"
			"siblings\t: 8\n"
			"core id\t\t: 3\n"
			"cpu cores\t: 4\n"
			"apicid\t\t: 6\n"
			"initial apicid\t: 6\n"
			"fpu\t\t: yes\n"
			"fpu_exception\t: yes\n"
			"cpuid level\t: 22\n"
			"wp\t\t: yes\n"
			"flags\t\t: fpu vme de pse tsc msr pae mce cx8 apic sep mtrr pge mca cmov pat pse36 clflush dts acpi mmx fxsr sse sse2 ss ht tm pbe syscall nx pdpe1gb rdtscp lm constant_tsc art arch_perfmon pebs bts rep_good nopl xtopology nonstop_tsc cpuid aperfmperf tsc_known_freq pni pclmulqdq dtes64 monitor ds_cpl vmx est tm2 ssse3 sdbg fma cx16 xtpr pdcm pcid sse4_1 sse4_2 x2apic movbe popcnt tsc_deadline_timer aes xsave avx f16c rdrand lahf_lm abm 3dnowprefetch cpuid_fault epb invpcid_single pti retpoline intel_pt rsb_ctxsw spec_ctrl ssbd tpr_shadow vnmi flexpriority ept vpid fsgsbase tsc_adjust bmi1 avx2 smep bmi2 erms invpcid mpx rdseed adx smap clflushopt xsaveopt xsavec xgetbv1 xsaves dtherm ida arat pln pts hwp hwp_notify hwp_act_window hwp_epp\n"
			"bugs\t\t: cpu_meltdown spectre_v1 spectre_v2 spec_store_bypass\n"
			"bogomips\t: 3984.00\n"
			"clflush size\t: 64\n"
			"cache_alignment\t: 64\n"
			"address sizes\t: 39 bits physical, 48 bits virtual\n"
			"power management:\n"
			"\n"
			"processor\t: 4\n"
			"vendor_id\t: GenuineIntel\n"
			"cpu family\t: 6\n"
			"model\t\t: 142\n"
			"model name\t: Intel(R) Core(TM) i7-8550U CPU @ 1.80GHz\n"
			"stepping\t: 10\n"
			"microcode\t: 0x96\n"
			"cpu MHz\t\t: 3014.121\n"
			"cache size\t: 8192 KB\n"
			"physical id\t: 0\n"
			"siblings\t: 8\n"
			"core id\t\t: 0\n"
			"cpu cores\t: 4\n"
			"apicid\t\t: 1\n"
			"initial apicid\t: 1\n"
			"fpu\t\t: yes\n"
			"fpu_exception\t: yes\n"
			"cpuid level\t: 22\n"
			"wp\t\t: yes\n"
			"flags\t\t: fpu vme de pse tsc msr pae mce cx8 apic sep mtrr pge mca cmov pat pse36 clflush dts acpi mmx fxsr sse sse2 ss ht tm pbe syscall nx pdpe1gb rdtscp lm constant_tsc art arch_perfmon pebs bts rep_good nopl xtopology nonstop_tsc cpuid aperfmperf tsc_known_freq pni pclmulqdq dtes64 monitor ds_cpl vmx est tm2 ssse3 sdbg fma cx16 xtpr pdcm pcid sse4_1 sse4_2 x2apic movbe popcnt tsc_deadline_timer aes xsave avx f16c rdrand lahf_lm abm 3dnowprefetch cpuid_fault epb invpcid_single pti retpoline intel_pt rsb_ctxsw spec_ctrl ssbd tpr_shadow vnmi flexpriority ept vpid fsgsbase tsc_adjust bmi1 avx2 smep bmi2 erms invpcid mpx rdseed adx smap clflushopt xsaveopt xsavec xgetbv1 xsaves dtherm ida arat pln pts hwp hwp_notify hwp_act_window hwp_epp\n"
			"bugs\t\t: cpu_meltdown spectre_v1 spectre_v2 spec_store_bypass\n"
			"bogomips\t: 3984.00\n"
			"clflush size\t: 64\n"
			"cache_alignment\t: 64\n"
			"address sizes\t: 39 bits physical, 48 bits virtual\n"
			"power management:\n"
			"\n"
			"processor\t: 5\n"
			"vendor_id\t: GenuineIntel\n"
			"cpu family\t: 6\n"
			"model\t\t: 142\n"
			"model name\t: Intel(R) Core(TM) i7-8550U CPU @ 1.80GHz\n"
			"stepping\t: 10\n"
			"microcode\t: 0x96\n"
			"cpu MHz\t\t: 3037.670\n"
			"cache size\t: 8192 KB\n"
			"physical id\t: 0\n"
			"siblings\t: 8\n"
			"core id\t\t: 1\n"
			"cpu cores\t: 4\n"
			"apicid\t\t: 3\n"
			"initial apicid\t: 3\n"
			"fpu\t\t: yes\n"
			"fpu_exception\t: yes\n"
			"cpuid level\t: 22\n"
			"wp\t\t: yes\n"
			"flags\t\t: fpu vme de pse tsc msr pae mce cx8 apic sep mtrr pge mca cmov pat pse36 clflush dts acpi mmx fxsr sse sse2 ss ht tm pbe syscall nx pdpe1gb rdtscp lm constant_tsc art arch_perfmon pebs bts rep_good nopl xtopology nonstop_tsc cpuid aperfmperf tsc_known_freq pni pclmulqdq dtes64 monitor ds_cpl vmx est tm2 ssse3 sdbg fma cx16 xtpr pdcm pcid sse4_1 sse4_2 x2apic movbe popcnt tsc_deadline_timer aes xsave avx f16c rdrand lahf_lm abm 3dnowprefetch cpuid_fault epb invpcid_single pti retpoline intel_pt rsb_ctxsw spec_ctrl ssbd tpr_shadow vnmi flexpriority ept vpid fsgsbase tsc_adjust bmi1 avx2 smep bmi2 erms invpcid mpx rdseed adx smap clflushopt xsaveopt xsavec xgetbv1 xsaves dtherm ida arat pln pts hwp hwp_notify hwp_act_window hwp_epp\n"
			"bugs\t\t: cpu_meltdown spectre_v1 spectre_v2 spec_store_bypass\n"
			"bogomips\t: 3984.00\n"
			"clflush size\t: 64\n"
			"cache_alignment\t: 64\n"
			"address sizes\t: 39 bits physical, 48 bits virtual\n"
			"power management:\n"
			"\n"
			"processor\t: 6\n"
			"vendor_id\t: GenuineIntel\n"
			"cpu family\t: 6\n"
			"model\t\t: 142\n"
			"model name\t: Intel(R) Core(TM) i7-8550U CPU @ 1.80GHz\n"
			"stepping\t: 10\n"
			"microcode\t: 0x96\n"
			"cpu MHz\t\t: 2939.870\n"
			"cache size\t: 8192 KB\n"
			"physical id\t: 0\n"
			"siblings\t: 8\n"
			"core id\t\t: 2\n"
			"cpu cores\t: 4\n"
			"apicid\t\t: 5\n"
			"initial apicid\t: 5\n"
			"fpu\t\t: yes\n"
			"fpu_exception\t: yes\n"
			"cpuid level\t: 22\n"
			"wp\t\t: yes\n"
			"flags\t\t: fpu vme de pse tsc msr pae mce cx8 apic sep mtrr pge mca cmov pat pse36 clflush dts acpi mmx fxsr sse sse2 ss ht tm pbe syscall nx pdpe1gb rdtscp lm constant_tsc art arch_perfmon pebs bts rep_good nopl xtopology nonstop_tsc cpuid aperfmperf tsc_known_freq pni pclmulqdq dtes64 monitor ds_cpl vmx est tm2 ssse3 sdbg fma cx16 xtpr pdcm pcid sse4_1 sse4_2 x2apic movbe popcnt tsc_deadline_timer aes xsave avx f16c rdrand lahf_lm abm 3dnowprefetch cpuid_fault epb invpcid_single pti retpoline intel_pt rsb_ctxsw spec_ctrl ssbd tpr_shadow vnmi flexpriority ept vpid fsgsbase tsc_adjust bmi1 avx2 smep bmi2 erms invpcid mpx rdseed adx smap clflushopt xsaveopt xsavec xgetbv1 xsaves dtherm ida arat pln pts hwp hwp_notify hwp_act_window hwp_epp\n"
			"bugs\t\t: cpu_meltdown spectre_v1 spectre_v2 spec_store_bypass\n"
			"bogomips\t: 3984.00\n"
			"clflush size\t: 64\n"
			"cache_alignment\t: 64\n"
			"address sizes\t: 39 bits physical, 48 bits virtual\n"
			"power management:\n"
			"\n"
			"processor\t: 7\n"
			"vendor_id\t: GenuineIntel\n"
			"cpu family\t: 6\n"
			"model\t\t: 142\n"
			"model name\t: Intel(R) Core(TM) i7-8550U CPU @ 1.80GHz\n"
			"stepping\t: 10\n"
			"microcode\t: 0x96\n"
			"cpu MHz\t\t: 3033.507\n"
			"cache size\t: 8192 KB\n"
			"physical id\t: 0\n"
			"siblings\t: 8\n"
			"core id\t\t: 3\n"
			"cpu cores\t: 4\n"
			"apicid\t\t: 7\n"
			"initial apicid\t: 7\n"
			"fpu\t\t: yes\n"
			"fpu_exception\t: yes\n"
			"cpuid level\t: 22\n"
			"wp\t\t: yes\n"
			"flags\t\t: fpu vme de pse tsc msr pae mce cx8 apic sep mtrr pge mca cmov pat pse36 clflush dts acpi mmx fxsr sse sse2 ss ht tm pbe syscall nx pdpe1gb rdtscp lm constant_tsc art arch_perfmon pebs bts rep_good nopl xtopology nonstop_tsc cpuid aperfmperf tsc_known_freq pni pclmulqdq dtes64 monitor ds_cpl vmx est tm2 ssse3 sdbg fma cx16 xtpr pdcm pcid sse4_1 sse4_2 x2apic movbe popcnt tsc_deadline_timer aes xsave avx f16c rdrand lahf_lm abm 3dnowprefetch cpuid_fault epb invpcid_single pti retpoline intel_pt rsb_ctxsw spec_ctrl ssbd tpr_shadow vnmi flexpriority ept vpid fsgsbase tsc_adjust bmi1 avx2 smep bmi2 erms invpcid mpx rdseed adx smap clflushopt xsaveopt xsavec xgetbv1 xsaves dtherm ida arat pln pts hwp hwp_notify hwp_act_window hwp_epp\n"
			"bugs\t\t: cpu_meltdown spectre_v1 spectre_v2 spec_store_bypass\n"
			"bogomips\t: 3984.00\n"
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
		.content = "0-7\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu0/cpufreq/cpuinfo_max_freq",
		.size = 8,
		.content = "4000000\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu0/cpufreq/cpuinfo_min_freq",
		.size = 7,
		.content = "400000\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu0/topology/physical_package_id",
		.size = 2,
		.content = "0\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu0/topology/core_siblings_list",
		.size = 4,
		.content = "0-7\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu0/topology/core_id",
		.size = 2,
		.content = "0\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu0/topology/thread_siblings_list",
		.size = 4,
		.content = "0,4\n",
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
		.content = "0,4\n",
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
		.content = "0,4\n",
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
		.size = 5,
		.content = "1024\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu0/cache/index2/shared_cpu_list",
		.size = 4,
		.content = "0,4\n",
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
		.content = "4\n",
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
		.content = "8192\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu0/cache/index3/shared_cpu_list",
		.size = 4,
		.content = "0-7\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu0/cache/index3/size",
		.size = 6,
		.content = "8192K\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu0/cache/index3/type",
		.size = 8,
		.content = "Unified\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu0/cache/index3/ways_of_associativity",
		.size = 3,
		.content = "16\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu1/cpufreq/cpuinfo_max_freq",
		.size = 8,
		.content = "4000000\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu1/cpufreq/cpuinfo_min_freq",
		.size = 7,
		.content = "400000\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu1/topology/physical_package_id",
		.size = 2,
		.content = "0\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu1/topology/core_siblings_list",
		.size = 4,
		.content = "0-7\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu1/topology/core_id",
		.size = 2,
		.content = "1\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu1/topology/thread_siblings_list",
		.size = 4,
		.content = "1,5\n",
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
		.content = "1,5\n",
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
		.content = "1,5\n",
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
		.size = 5,
		.content = "1024\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu1/cache/index2/shared_cpu_list",
		.size = 4,
		.content = "1,5\n",
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
		.content = "4\n",
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
		.content = "8192\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu1/cache/index3/shared_cpu_list",
		.size = 4,
		.content = "0-7\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu1/cache/index3/size",
		.size = 6,
		.content = "8192K\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu1/cache/index3/type",
		.size = 8,
		.content = "Unified\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu1/cache/index3/ways_of_associativity",
		.size = 3,
		.content = "16\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu2/cpufreq/cpuinfo_max_freq",
		.size = 8,
		.content = "4000000\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu2/cpufreq/cpuinfo_min_freq",
		.size = 7,
		.content = "400000\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu2/topology/physical_package_id",
		.size = 2,
		.content = "0\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu2/topology/core_siblings_list",
		.size = 4,
		.content = "0-7\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu2/topology/core_id",
		.size = 2,
		.content = "2\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu2/topology/thread_siblings_list",
		.size = 4,
		.content = "2,6\n",
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
		.content = "2,6\n",
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
		.content = "2,6\n",
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
		.size = 5,
		.content = "1024\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu2/cache/index2/shared_cpu_list",
		.size = 4,
		.content = "2,6\n",
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
		.content = "4\n",
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
		.content = "8192\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu2/cache/index3/shared_cpu_list",
		.size = 4,
		.content = "0-7\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu2/cache/index3/size",
		.size = 6,
		.content = "8192K\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu2/cache/index3/type",
		.size = 8,
		.content = "Unified\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu2/cache/index3/ways_of_associativity",
		.size = 3,
		.content = "16\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu3/cpufreq/cpuinfo_max_freq",
		.size = 8,
		.content = "4000000\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu3/cpufreq/cpuinfo_min_freq",
		.size = 7,
		.content = "400000\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu3/topology/physical_package_id",
		.size = 2,
		.content = "0\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu3/topology/core_siblings_list",
		.size = 4,
		.content = "0-7\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu3/topology/core_id",
		.size = 2,
		.content = "3\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu3/topology/thread_siblings_list",
		.size = 4,
		.content = "3,7\n",
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
		.content = "3,7\n",
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
		.content = "3,7\n",
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
		.size = 5,
		.content = "1024\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu3/cache/index2/shared_cpu_list",
		.size = 4,
		.content = "3,7\n",
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
		.content = "4\n",
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
		.content = "8192\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu3/cache/index3/shared_cpu_list",
		.size = 4,
		.content = "0-7\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu3/cache/index3/size",
		.size = 6,
		.content = "8192K\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu3/cache/index3/type",
		.size = 8,
		.content = "Unified\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu3/cache/index3/ways_of_associativity",
		.size = 3,
		.content = "16\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu4/cpufreq/cpuinfo_max_freq",
		.size = 8,
		.content = "4000000\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu4/cpufreq/cpuinfo_min_freq",
		.size = 7,
		.content = "400000\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu4/topology/physical_package_id",
		.size = 2,
		.content = "0\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu4/topology/core_siblings_list",
		.size = 4,
		.content = "0-7\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu4/topology/core_id",
		.size = 2,
		.content = "0\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu4/topology/thread_siblings_list",
		.size = 4,
		.content = "0,4\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu4/cache/index0/coherency_line_size",
		.size = 3,
		.content = "64\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu4/cache/index0/level",
		.size = 2,
		.content = "1\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu4/cache/index0/number_of_sets",
		.size = 3,
		.content = "64\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu4/cache/index0/shared_cpu_list",
		.size = 4,
		.content = "0,4\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu4/cache/index0/size",
		.size = 4,
		.content = "32K\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu4/cache/index0/type",
		.size = 5,
		.content = "Data\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu4/cache/index0/ways_of_associativity",
		.size = 2,
		.content = "8\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu4/cache/index1/coherency_line_size",
		.size = 3,
		.content = "64\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu4/cache/index1/level",
		.size = 2,
		.content = "1\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu4/cache/index1/number_of_sets",
		.size = 3,
		.content = "64\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu4/cache/index1/shared_cpu_list",
		.size = 4,
		.content = "0,4\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu4/cache/index1/size",
		.size = 4,
		.content = "32K\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu4/cache/index1/type",
		.size = 12,
		.content = "Instruction\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu4/cache/index1/ways_of_associativity",
		.size = 2,
		.content = "8\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu4/cache/index2/coherency_line_size",
		.size = 3,
		.content = "64\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu4/cache/index2/level",
		.size = 2,
		.content = "2\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu4/cache/index2/number_of_sets",
		.size = 5,
		.content = "1024\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu4/cache/index2/shared_cpu_list",
		.size = 4,
		.content = "0,4\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu4/cache/index2/size",
		.size = 5,
		.content = "256K\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu4/cache/index2/type",
		.size = 8,
		.content = "Unified\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu4/cache/index2/ways_of_associativity",
		.size = 2,
		.content = "4\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu4/cache/index3/coherency_line_size",
		.size = 3,
		.content = "64\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu4/cache/index3/level",
		.size = 2,
		.content = "3\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu4/cache/index3/number_of_sets",
		.size = 5,
		.content = "8192\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu4/cache/index3/shared_cpu_list",
		.size = 4,
		.content = "0-7\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu4/cache/index3/size",
		.size = 6,
		.content = "8192K\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu4/cache/index3/type",
		.size = 8,
		.content = "Unified\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu4/cache/index3/ways_of_associativity",
		.size = 3,
		.content = "16\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu5/cpufreq/cpuinfo_max_freq",
		.size = 8,
		.content = "4000000\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu5/cpufreq/cpuinfo_min_freq",
		.size = 7,
		.content = "400000\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu5/topology/physical_package_id",
		.size = 2,
		.content = "0\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu5/topology/core_siblings_list",
		.size = 4,
		.content = "0-7\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu5/topology/core_id",
		.size = 2,
		.content = "1\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu5/topology/thread_siblings_list",
		.size = 4,
		.content = "1,5\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu5/cache/index0/coherency_line_size",
		.size = 3,
		.content = "64\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu5/cache/index0/level",
		.size = 2,
		.content = "1\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu5/cache/index0/number_of_sets",
		.size = 3,
		.content = "64\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu5/cache/index0/shared_cpu_list",
		.size = 4,
		.content = "1,5\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu5/cache/index0/size",
		.size = 4,
		.content = "32K\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu5/cache/index0/type",
		.size = 5,
		.content = "Data\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu5/cache/index0/ways_of_associativity",
		.size = 2,
		.content = "8\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu5/cache/index1/coherency_line_size",
		.size = 3,
		.content = "64\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu5/cache/index1/level",
		.size = 2,
		.content = "1\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu5/cache/index1/number_of_sets",
		.size = 3,
		.content = "64\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu5/cache/index1/shared_cpu_list",
		.size = 4,
		.content = "1,5\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu5/cache/index1/size",
		.size = 4,
		.content = "32K\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu5/cache/index1/type",
		.size = 12,
		.content = "Instruction\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu5/cache/index1/ways_of_associativity",
		.size = 2,
		.content = "8\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu5/cache/index2/coherency_line_size",
		.size = 3,
		.content = "64\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu5/cache/index2/level",
		.size = 2,
		.content = "2\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu5/cache/index2/number_of_sets",
		.size = 5,
		.content = "1024\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu5/cache/index2/shared_cpu_list",
		.size = 4,
		.content = "1,5\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu5/cache/index2/size",
		.size = 5,
		.content = "256K\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu5/cache/index2/type",
		.size = 8,
		.content = "Unified\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu5/cache/index2/ways_of_associativity",
		.size = 2,
		.content = "4\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu5/cache/index3/coherency_line_size",
		.size = 3,
		.content = "64\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu5/cache/index3/level",
		.size = 2,
		.content = "3\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu5/cache/index3/number_of_sets",
		.size = 5,
		.content = "8192\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu5/cache/index3/shared_cpu_list",
		.size = 4,
		.content = "0-7\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu5/cache/index3/size",
		.size = 6,
		.content = "8192K\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu5/cache/index3/type",
		.size = 8,
		.content = "Unified\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu5/cache/index3/ways_of_associativity",
		.size = 3,
		.content = "16\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu6/cpufreq/cpuinfo_max_freq",
		.size = 8,
		.content = "4000000\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu6/cpufreq/cpuinfo_min_freq",
		.size = 7,
		.content = "400000\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu6/topology/physical_package_id",
		.size = 2,
		.content = "0\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu6/topology/core_siblings_list",
		.size = 4,
		.content = "0-7\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu6/topology/core_id",
		.size = 2,
		.content = "2\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu6/topology/thread_siblings_list",
		.size = 4,
		.content = "2,6\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu6/cache/index0/coherency_line_size",
		.size = 3,
		.content = "64\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu6/cache/index0/level",
		.size = 2,
		.content = "1\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu6/cache/index0/number_of_sets",
		.size = 3,
		.content = "64\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu6/cache/index0/shared_cpu_list",
		.size = 4,
		.content = "2,6\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu6/cache/index0/size",
		.size = 4,
		.content = "32K\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu6/cache/index0/type",
		.size = 5,
		.content = "Data\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu6/cache/index0/ways_of_associativity",
		.size = 2,
		.content = "8\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu6/cache/index1/coherency_line_size",
		.size = 3,
		.content = "64\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu6/cache/index1/level",
		.size = 2,
		.content = "1\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu6/cache/index1/number_of_sets",
		.size = 3,
		.content = "64\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu6/cache/index1/shared_cpu_list",
		.size = 4,
		.content = "2,6\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu6/cache/index1/size",
		.size = 4,
		.content = "32K\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu6/cache/index1/type",
		.size = 12,
		.content = "Instruction\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu6/cache/index1/ways_of_associativity",
		.size = 2,
		.content = "8\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu6/cache/index2/coherency_line_size",
		.size = 3,
		.content = "64\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu6/cache/index2/level",
		.size = 2,
		.content = "2\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu6/cache/index2/number_of_sets",
		.size = 5,
		.content = "1024\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu6/cache/index2/shared_cpu_list",
		.size = 4,
		.content = "2,6\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu6/cache/index2/size",
		.size = 5,
		.content = "256K\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu6/cache/index2/type",
		.size = 8,
		.content = "Unified\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu6/cache/index2/ways_of_associativity",
		.size = 2,
		.content = "4\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu6/cache/index3/coherency_line_size",
		.size = 3,
		.content = "64\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu6/cache/index3/level",
		.size = 2,
		.content = "3\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu6/cache/index3/number_of_sets",
		.size = 5,
		.content = "8192\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu6/cache/index3/shared_cpu_list",
		.size = 4,
		.content = "0-7\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu6/cache/index3/size",
		.size = 6,
		.content = "8192K\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu6/cache/index3/type",
		.size = 8,
		.content = "Unified\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu6/cache/index3/ways_of_associativity",
		.size = 3,
		.content = "16\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu7/cpufreq/cpuinfo_max_freq",
		.size = 8,
		.content = "4000000\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu7/cpufreq/cpuinfo_min_freq",
		.size = 7,
		.content = "400000\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu7/topology/physical_package_id",
		.size = 2,
		.content = "0\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu7/topology/core_siblings_list",
		.size = 4,
		.content = "0-7\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu7/topology/core_id",
		.size = 2,
		.content = "3\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu7/topology/thread_siblings_list",
		.size = 4,
		.content = "3,7\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu7/cache/index0/coherency_line_size",
		.size = 3,
		.content = "64\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu7/cache/index0/level",
		.size = 2,
		.content = "1\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu7/cache/index0/number_of_sets",
		.size = 3,
		.content = "64\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu7/cache/index0/shared_cpu_list",
		.size = 4,
		.content = "3,7\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu7/cache/index0/size",
		.size = 4,
		.content = "32K\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu7/cache/index0/type",
		.size = 5,
		.content = "Data\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu7/cache/index0/ways_of_associativity",
		.size = 2,
		.content = "8\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu7/cache/index1/coherency_line_size",
		.size = 3,
		.content = "64\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu7/cache/index1/level",
		.size = 2,
		.content = "1\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu7/cache/index1/number_of_sets",
		.size = 3,
		.content = "64\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu7/cache/index1/shared_cpu_list",
		.size = 4,
		.content = "3,7\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu7/cache/index1/size",
		.size = 4,
		.content = "32K\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu7/cache/index1/type",
		.size = 12,
		.content = "Instruction\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu7/cache/index1/ways_of_associativity",
		.size = 2,
		.content = "8\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu7/cache/index2/coherency_line_size",
		.size = 3,
		.content = "64\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu7/cache/index2/level",
		.size = 2,
		.content = "2\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu7/cache/index2/number_of_sets",
		.size = 5,
		.content = "1024\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu7/cache/index2/shared_cpu_list",
		.size = 4,
		.content = "3,7\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu7/cache/index2/size",
		.size = 5,
		.content = "256K\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu7/cache/index2/type",
		.size = 8,
		.content = "Unified\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu7/cache/index2/ways_of_associativity",
		.size = 2,
		.content = "4\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu7/cache/index3/coherency_line_size",
		.size = 3,
		.content = "64\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu7/cache/index3/level",
		.size = 2,
		.content = "3\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu7/cache/index3/number_of_sets",
		.size = 5,
		.content = "8192\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu7/cache/index3/shared_cpu_list",
		.size = 4,
		.content = "0-7\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu7/cache/index3/size",
		.size = 6,
		.content = "8192K\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu7/cache/index3/type",
		.size = 8,
		.content = "Unified\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu7/cache/index3/ways_of_associativity",
		.size = 3,
		.content = "16\n",
	},
	{ NULL },
};
