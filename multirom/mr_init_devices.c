#include <stdlib.h>

// These are paths to folders in /sys which contain "uevent" file
// need to init this device.
// MultiROM needs to init framebuffer, mmc blocks, input devices,
// some ADB-related stuff and USB drives, if OTG is supported
// You can use * at the end to init this folder and all its subfolders
const char *mr_init_devices[] =
{
    "/sys/devices/virtual/mem/null",
    "/sys/devices/virtual/misc/fuse",

    "/sys/class/graphics/fb0",


    "/sys/block/mmcblk0",
    "/sys/devices/soc.0/f9824900.sdhci",
    "/sys/devices/soc.0/f9824900.sdhci/mmc_host/mmc0/mmc0:0001",
    "/sys/devices/soc.0/f9824900.sdhci/mmc_host/mmc0/mmc0:0001/block/mmcblk0",
    "/sys/devices/soc.0/f9824900.sdhci/mmc_host/mmc0/mmc0:0001/block/mmcblk0/mmcblk0p30", //persist
    "/sys/devices/soc.0/f9824900.sdhci/mmc_host/mmc0/mmc0:0001/block/mmcblk0/mmcblk0p32", //misc         ... needed for MultiROM menu reboot to recovery/bootloader
    "/sys/devices/soc.0/f9824900.sdhci/mmc_host/mmc0/mmc0:0001/block/mmcblk0/mmcblk0p35", //fataldevlog
    "/sys/devices/soc.0/f9824900.sdhci/mmc_host/mmc0/mmc0:0001/block/mmcblk0/mmcblk0p36", //devlog
    "/sys/devices/soc.0/f9824900.sdhci/mmc_host/mmc0/mmc0:0001/block/mmcblk0/mmcblk0p39", //extra
    "/sys/devices/soc.0/f9824900.sdhci/mmc_host/mmc0/mmc0:0001/block/mmcblk0/mmcblk0p50", //carrier
    "/sys/devices/soc.0/f9824900.sdhci/mmc_host/mmc0/mmc0:0001/block/mmcblk0/mmcblk0p63", //boot
    "/sys/devices/soc.0/f9824900.sdhci/mmc_host/mmc0/mmc0:0001/block/mmcblk0/mmcblk0p64", //recovery
    "/sys/devices/soc.0/f9824900.sdhci/mmc_host/mmc0/mmc0:0001/block/mmcblk0/mmcblk0p65", //cache
    "/sys/devices/soc.0/f9824900.sdhci/mmc_host/mmc0/mmc0:0001/block/mmcblk0/mmcblk0p66", //system
    "/sys/devices/soc.0/f9824900.sdhci/mmc_host/mmc0/mmc0:0001/block/mmcblk0/mmcblk0p67", //userdata
    "/sys/devices/soc.0/f9824900.sdhci/mmc_host/mmc0/mmc0:0001/block/mmcblk0/mmcblk0p68", //apppreload
    "/sys/devices/soc.0/f9824900.sdhci/mmc_host/mmc0/mmc0:0001/block/mmcblk0/mmcblk0p69", //cota

    "/sys/block/mmcblk1",
    "/sys/block/mmcblk1/mmcblk1p1",
    "/sys/block/mmcblk1/mmcblk1p2",

    // don't use thse as "e624" may be different, instead use the above /sys/block/... which are symlinks
    //"/sys/devices/soc.0/f98a4900.sdhci/mmc_host/mmc1",
    //"/sys/devices/soc.0/f98a4900.sdhci/mmc_host/mmc1/mmc1:e624",
    //"/sys/devices/soc.0/f98a4900.sdhci/mmc_host/mmc1/mmc1:e624/block/mmcblk1",
    //"/sys/devices/soc.0/f98a4900.sdhci/mmc_host/mmc1/mmc1:e624/block/mmcblk1/mmcblk1p1",
    //"/sys/devices/soc.0/f98a4900.sdhci/mmc_host/mmc1/mmc1:e624/block/mmcblk1/mmcblk1p2",

    "/sys/bus/mmc",
    "/sys/bus/mmc/drivers/mmcblk",
    "/sys/bus/sdio/drivers/bcmsdh_sdmmc",
    "/sys/module/mmc_core",
    "/sys/module/mmcblk",

    "/sys/devices/soc.0/gpio_keys.87/input*",
    "/sys/devices/virtual/input*",
    "/sys/devices/virtual/misc/uinput",
    "/sys/devices/soc.0/f9924000.i2c/i2c-2/2-0020/input*",

    "/sys/devices/virtual/tty/ptmx",
    "/sys/devices/virtual/misc/android_adb",
    "/sys/devices/virtual/android_usb/android0/f_adb",
    "/sys/devices/platform/android_usb/usb_function_switch",
    "/sys/bus/usb",

    "/sys/devices/soc.0/f9200000.ssusb/f9200000.dwc3/xhci-hcd*",
    "/sys/devices/platform/xhci-hcd*",

    // Encryption
    //"/sys/devices/virtual/ecryptfs",
    //"/sys/devices/virtual/misc/device-mapper",
    //"/sys/devices/virtual/misc/ion",
    //"/sys/devices/virtual/qseecom/qseecom",

    NULL
};
