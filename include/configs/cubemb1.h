/* SPDX-License-Identifier: GPL-2.0+ */
/*
 * Configuration file for the South Coast Science Cube MB 1 Board.
 *
 * Copyright (C) 2020 South East Open Source Solutions Ltd.
 *		      Tim Small <tim@seoss.co.uk>
 */


#include "sama5d2_xplained.h"

/* Use sama5d2 xplained board configuration, except... */

/* bootstrap + u-boot + env from eMMC (or SD Card) as appripriate */
#undef CONFIG_BOOTCOMMAND
#define CONFIG_BOOTCOMMAND	"fatload mmc " CONFIG_ENV_FAT_DEVICE_AND_PART " 0x21000000 at91-sama5d27_cubemb1.dtb; " \
				"fatload mmc " CONFIG_ENV_FAT_DEVICE_AND_PART " 0x22000000 zImage; " \
				"bootz 0x22000000 - 0x21000000"
