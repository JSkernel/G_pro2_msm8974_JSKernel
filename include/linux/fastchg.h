#ifndef _LINUX_FASTCHG_H
#define _LINUX_FASTCHG_H

extern int force_fast_charge;
extern int force_fast_charge_temp;
extern int fast_charge_level;
extern int usb_power_curr_now;
extern int force_fast_charge_on_off;

#define FAST_CHARGE_DISABLED		0	/* default */
#define FAST_CHARGE_FORCE_AC		1
#define FAST_CHARGE_FORCE_CUSTOM_MA	2

#define FAST_CHARGE_300		300
#define FAST_CHARGE_500		500
#define FAST_CHARGE_900		900
#define FAST_CHARGE_1200	1200
#define FAST_CHARGE_1600	1600
#define FAST_CHARGE_1800	1800
#define FAST_CHARGE_2000	2000

#define FAST_CHARGE_LEVELS	"300 500 900 1200 1600 1800 2000"

#endif
