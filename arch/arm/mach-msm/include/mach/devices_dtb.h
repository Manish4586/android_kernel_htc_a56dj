#ifndef __ASM_ARCH_MSM_DEVICES_DTB_H
#define __ASM_ARCH_MSM_DEVICES_DTB_H

#include <linux/bitops.h>

enum {
	KERNEL_FLAG_WATCHDOG_ENABLE = BIT(0),
	KERNEL_FLAG_SERIAL_HSL_ENABLE = BIT(1),
	KERNEL_FLAG_KEEP_CHARG_ON = BIT(2),
	KERNEL_FLAG_APPSBARK = BIT(3),
	KERNEL_FLAG_KMEMLEAK = BIT(4),
	KERNEL_FLAG_ENABLE_SSR_LPASS = BIT(5),
	KERNEL_FLAG_MDM_CHARM_DEBUG = BIT(6),
	KERNEL_FLAG_MSM_SMD_DEBUG = BIT(7),
#if defined(CONFIG_ARCH_APQ8064) || defined(CONFIG_ARCH_MSM8960)
	KERNEL_FLAG_PVS_SLOW_CPU = BIT(8),
	KERNEL_FLAG_PVS_NOM_CPU = BIT(9),
	KERNEL_FLAG_PVS_FAST_CPU = BIT(10),
#else
	KERNEL_FLAG_RESERVED_8 = BIT(8),
	KERNEL_FLAG_RESERVED_9 = BIT(9),
	KERNEL_FLAG_RESERVED_10 = BIT(10),
#endif
	KERNEL_FLAG_ENABLE_SSR_MODEM = BIT(11),
	KERNEL_FLAG_ENABLE_SSR_WCNSS = BIT(12),
	KERNEL_FLAG_DISABLE_WAKELOCK = BIT(13),
	KERNEL_FLAG_PA_RECHARG_TEST = BIT(14),
	KERNEL_FLAG_TEST_PWR_SUPPLY = BIT(15),
	KERNEL_FLAG_RIL_DBG_DMUX = BIT(16),
	KERNEL_FLAG_RIL_DBG_RMNET = BIT(17),
	KERNEL_FLAG_RIL_DBG_CMUX = BIT(18),
	KERNEL_FLAG_RIL_DBG_DATA_LPM = BIT(19),
	KERNEL_FLAG_RIL_DBG_CTL = BIT(20),
	KERNEL_FLAG_RIL_DBG_ALDEBUG_LAWDATA = BIT(21),
	KERNEL_FLAG_RIL_DBG_MEMCPY = BIT(22),
	KERNEL_FLAG_RIL_DBG_RPC = BIT(23),
	KERNEL_FLAG_FAKE_ID = BIT(24),
	KERNEL_FLAG_PM_MONITOR = BIT(25),
	KERNEL_FLAG_ENABLE_FAST_CHARGE = BIT(26),
	KERNEL_FLAG_WAKELOCK_DBG = BIT(27),
	KERNEL_FLAG_RESERVED_28 = BIT(28),
	KERNEL_FLAG_ENABLE_BMS_CHARGER_LOG = BIT(29),
	KERNEL_FLAG_ATS_LIMIT_CHARGE = BIT(30),
	KERNEL_FLAG_GPIO_DUMP = BIT(31),
};

enum {
	RADIO_FLAG_RESERVE_0 = BIT(0),
	RADIO_FLAG_RESERVE_1 = BIT(1),
	RADIO_FLAG_RESERVE_2 = BIT(2),
	RADIO_FLAG_USB_UPLOAD = BIT(3),
	RADIO_FLAG_OWN_SERIAL = BIT(8),
	RADIO_FLAG_OWN_USB = BIT(9),
	RADIO_FLAG_OWN_SD = BIT(10),
	RADIO_FLAG_RESTART_EN = BIT(11),
	RADIO_FLAG_ENABLE_CHARGE_SW_PROTECT = BIT(12),
	RADIO_FLAG_HTC_SET_MIN_CLKRGM_PERF_LEVEL_2 = (1 << 13),
	RADIO_FLAG_HTC_SET_MIN_CLKRGM_PERF_LEVEL_3 = (2 << 13),
	RADIO_FLAG_HTC_SET_MIN_CLKRGM_PERF_LEVEL_4 = (3 << 13),
	RADIO_FLAG_HTC_SET_MAX_CLKRGM_PERF_LEVEL_0 = (4 << 13),
	RADIO_FLAG_HTC_SET_MAX_CLKRGM_PERF_LEVEL_1 = (5 << 13),
	RADIO_FLAG_HTC_SET_MAX_CLKRGM_PERF_LEVEL_2 = (6 << 13),
	RADIO_FLAG_HTC_SET_MAX_CLKRGM_PERF_LEVEL_3 = (7 << 13),
	RADIO_FLAG_HTC_SET_MAX_CLKRGM_PERF_LEVEL_4 = (8 << 13),
	RADIO_FLAG_HTC_SET_FIX_CLKRGM_PERF_LEVEL_0 = (9 << 13),
	RADIO_FLAG_HTC_SET_FIX_CLKRGM_PERF_LEVEL_1 = (10 << 13),
	RADIO_FLAG_HTC_SET_FIX_CLKRGM_PERF_LEVEL_2 = (11 << 13),
	RADIO_FLAG_HTC_SET_FIX_CLKRGM_PERF_LEVEL_3 = (12 << 13),
	RADIO_FLAG_HTC_SET_FIX_CLKRGM_PERF_LEVEL_4 = (13 << 13),
	RADIO_FLAG_HTC_SET_FIX_CLKRGM_PERF_LEVEL_5 = (14 << 13),
	RADIO_FLAG_RESERVE_16 = BIT(16),
	RADIO_FLAG_RESERVE_17 = BIT(17),
	RADIO_FLAG_RESERVE_18 = BIT(18),
	RADIO_FLAG_RESTART_DEBUG_EN = BIT(19),
	RADIO_FLAG_USB_IF_FLAG = BIT(20),
	RADIO_FLAG_RESERVE_21 = BIT(21),
	RADIO_FLAG_RESERVE_22 = BIT(22),
	RADIO_FLAG_RESERVE_23 = BIT(23),
	RADIO_FLAG_RESERVE_24 = BIT(24),
	RADIO_FLAG_FATAL_POPUP_DIALOG = BIT(25),
	RADIO_FLAG_FATAL_RESET_WHEN_FATAL = BIT(26),
	RADIO_FLAG_RESERVE_27 = BIT(27),
	RADIO_FLAG_DOG_2061_LOG_ENABLE = BIT(28),
	RADIO_FLAG_SLEEP_LOG_ENABLE = BIT(29),
	RADIO_FLAG_AUTO_DLMODE_WHEN_FATAL = BIT(30),
	RADIO_FLAG_USE_EFS_NV = BIT(31),
};

enum {
	DEBUG_FLAG_ENABLE_ATS_FLAG = BIT(8),
	DEBUG_FLAG_DISABLE_PMIC_RESET = BIT(24),
};
enum {
	DEBUG_FLAG_INDEX = 5,
	KERNEL_FLAG_INDEX = 6,
	BOOTLOADER_FLAG_INDEX = 7,
	RADIO_FLAG_INDEX = 8,
	RADIO_FLAG_EX1_INDEX = 10,
	RADIO_FLAG_EX2_INDEX = 11,
	NUM_FLAG_INDEX
};

unsigned int get_debug_flag(void);
unsigned int get_kernel_flag(void);
unsigned int get_bootloader_flag(void);
unsigned int get_radio_flag(void);
unsigned int get_radio_ex1_flag(void);
unsigned int get_radio_ex2_flag(void);

#endif
