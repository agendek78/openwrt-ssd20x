/*
 * Copyright (C) 2014 Samsung Electronics
 *
 * Configuration settings for the SAMSUNG EXYNOS5 board.
 *
 * SPDX-License-Identifier:	GPL-2.0+
 */

#ifndef __CONFIG_EXYNOS4_COMMON_H
#define __CONFIG_EXYNOS4_COMMON_H

#define CONFIG_EXYNOS4			/* Exynos4 Family */

#include "exynos-common.h"

#define CONFIG_BOARD_COMMON

#define CONFIG_SYS_CACHELINE_SIZE	32
#define CONFIG_REVISION_TAG

/* SD/MMC configuration */
#define CONFIG_MMC_SDMA
#define CONFIG_MMC_DEFAULT_DEV	0

#undef CONFIG_CMD_FPGA
#undef CONFIG_CMD_MISC
#undef CONFIG_CMD_NET
#undef CONFIG_CMD_NFS
#undef CONFIG_CMD_XIMG
#undef CONFIG_CMD_ONENAND
#undef CONFIG_CMD_MTDPARTS
#define CONFIG_CMD_DFU
#define CONFIG_CMD_GPT
#define CONFIG_CMD_PMIC
#define CONFIG_CMD_SETEXPR

/* USB Composite download gadget - g_dnl */
#define CONFIG_USBDOWNLOAD_GADGET

/* TIZEN THOR downloader support */
#define CONFIG_CMD_THOR_DOWNLOAD
#define CONFIG_THOR_FUNCTION

#define CONFIG_DFU_FUNCTION
#define CONFIG_DFU_MMC
#define CONFIG_SYS_DFU_DATA_BUF_SIZE SZ_32M
#define DFU_DEFAULT_POLL_TIMEOUT 300

/* USB Samsung's IDs */
#define CONFIG_G_DNL_VENDOR_NUM 0x04E8
#define CONFIG_G_DNL_PRODUCT_NUM 0x6601
#define CONFIG_G_DNL_THOR_VENDOR_NUM CONFIG_G_DNL_VENDOR_NUM
#define CONFIG_G_DNL_THOR_PRODUCT_NUM 0x685D
#define CONFIG_G_DNL_UMS_VENDOR_NUM 0x0525
#define CONFIG_G_DNL_UMS_PRODUCT_NUM 0xA4A5
#define CONFIG_G_DNL_MANUFACTURER "Samsung"

#define CONFIG_SYS_MONITOR_LEN		(256 << 10)	/* Reserve 2 sectors */

#define CONFIG_USB_GADGET
#define CONFIG_USB_GADGET_S3C_UDC_OTG
#define CONFIG_USB_GADGET_S3C_UDC_OTG_PHY
#define CONFIG_USB_GADGET_DUALSPEED
#define CONFIG_USB_GADGET_VBUS_DRAW	2

#define CONFIG_CMD_USB_MASS_STORAGE
#define CONFIG_USB_GADGET_MASS_STORAGE

#endif	/* __CONFIG_EXYNOS4_COMMON_H */
