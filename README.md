

  ## Realtek RTWIFI - "Custom / development" driver
  This driver currently supports these chipsets: Realtek 8188e 8192e 8192c 8723a and 8723b 

  [![kali](https://img.shields.io/badge/kali-supported-blue.svg)](https://www.kali.org)
  [![NetHunter](https://img.shields.io/badge/nethunter-supported-blue.svg)](https://nethunter.com)
  [![aircrack-ng](https://img.shields.io/badge/aircrack--ng-supported-blue.svg)](https://github.com/aircrack-ng/aircrack-ng)
  [![wifite2](https://img.shields.io/badge/wifite2-supported-blue.svg)](https://github.com/kimocoder/wifite2)
  <br>
  [![GitHub issues](https://img.shields.io/github/issues/kimocoder/realtek_wifi.svg)](https://github.com/kimocoder/realtek_wifi/issues)
  [![GitHub forks](https://img.shields.io/github/forks/kimocoder/realtek_wifi.svg)](https://github.com/kimocoder/realtek_wifi/network)
  [![GitHub stars](https://img.shields.io/github/stars/kimocoder/realtek_wifi.svg)](https://github.com/kimocoder/realtek_wifi/stargazers)
  [![GitHub license](https://img.shields.io/github/license/aircrack-ng/rtl8812au.svg)](https://github.com/aircrack-ng/rtl8812au/blob/master/LICENSE)
  [![GitHub version](https://raster.shields.io/badge/version-BETA-lightgrey.svg)](#)


  ### Driver supports
  ```sh
  * MAC80211 STACK
  * WPA3-SAE
  * MESH mode
  * AP mode
  * P2P mode
  * Monitor mode
  * Frame injection (packet injection)
  * Virtual interfaces (VIF)
  * Channel width
```


  ### TODO
  ```sh
  * Separate the module name from kernels rtl8xxxu
    we don't wan't them to collide :/

  * Add more VID/PIDs
  * Add more upstream patches
  * Enhance the Makefile (w.i.p)
  * Add DKMS
  * Clean with checkpatch
```


  ### Howto: Download & Install
  ```sh
  $ git clone https://github.com/kimocoder/realtek_rtwifi
  $ cd realtek_wifi
  $ make && make install (or 'insmod rtwifi.ko' if so)
  ```

  ### Howto: Implement this driver into Android kernel (NetHunter)
  This driver uses binaries instead of building as a kernel module,
  that makes it quite a bit easier to handle both for users and for the kernel.

  ```sh
  * Copy driver folder to 'kernel/drivers/net/wireless/realtek/
  * Open the Makefile in vim/nano, eg: vim drivers/net/wireless/realtek/Makefile
  
    Then add:
    '"obj-$(CONFIG_RTL8XXXU) += rtwifi/" in the bottom.'
    
  * Step two, eg: vim drivers/net/wireless/realtek/Kconfig
    
    Then add:
    'source "drivers/net/wireless/realtek/rtwifi/Kconfig"' at bottom.
    
    Compile kernel and the driver should be available in 'make menuconfig'
    also, in between all the other options in there. Pretty simple.
  ```

### Module information / showcase

  ```sh
root@kali:~# modinfo rtwifi
filename:       /lib/modules/5.9.0-kali5-amd64/kernel/drivers/net/wireless/realtek/rtwifi.ko
firmware:       rtlwifi/rtl8723bu_bt.bin
firmware:       rtlwifi/rtl8723bu_nic.bin
firmware:       rtlwifi/rtl8192eu_nic.bin
firmware:       rtlwifi/rtl8192cufw_TMSC.bin
firmware:       rtlwifi/rtl8192cufw_B.bin
firmware:       rtlwifi/rtl8192cufw_A.bin
firmware:       rtlwifi/rtl8188eufw.bin
firmware:       rtlwifi/rtl8723aufw_B_NoBT.bin
firmware:       rtlwifi/rtl8723aufw_B.bin
firmware:       rtlwifi/rtl8723aufw_A.bin
license:        GPL
description:    RTL8XXXu USB mac80211 Wireless LAN Driver
author:         Christian <kimocoder> B. <christian@aircrack-ng.org>
alias:          usb:v2001p3311d*dc*dsc*dp*icFFiscFFipFFin*
alias:          usb:v0DF6p0076d*dc*dsc*dp*icFFiscFFipFFin*
alias:          usb:v0BDAp8179d*dc*dsc*dp*icFFiscFFipFFin*
alias:          usb:v0BDAp0179d*dc*dsc*dp*icFFiscFFipFFin*
alias:          usb:v0BDAp8179d*dc*dsc*dp*icFFiscFFipFFin*
alias:          usb:v7392pA611d*dc*dsc*dp*icFFiscFFipFFin*
alias:          usb:v0BDApB720d*dc*dsc*dp*icFFiscFFipFFin*
alias:          usb:v2357p0109d*dc*dsc*dp*icFFiscFFipFFin*
alias:          usb:v2001p3319d*dc*dsc*dp*icFFiscFFipFFin*
alias:          usb:v2357p0108d*dc*dsc*dp*icFFiscFFipFFin*
alias:          usb:v2357p0107d*dc*dsc*dp*icFFiscFFipFFin*
alias:          usb:v0BDAp818Bd*dc*dsc*dp*icFFiscFFipFFin*
alias:          usb:v0BDAp0724d*dc*dsc*dp*icFFiscFFipFFin*
alias:          usb:v0BDAp1724d*dc*dsc*dp*icFFiscFFipFFin*
alias:          usb:v0BDAp8724d*dc*dsc*dp*icFFiscFFipFFin*
depends:        mac80211,usbcore
retpoline:      Y
name:           rtwifi
vermagic:       5.9.0-kali5-amd64 SMP mod_unload modversions 
parm:           debug:Set debug mask (int)
parm:           ht40_2g:Enable HT40 support on the 2.4GHz band (bool)
parm:           dma_aggregation:Enable DMA packet aggregation (bool)
parm:           dma_agg_timeout:Set DMA aggregation timeout (range 1-127) (int)
parm:           dma_agg_pages:Set DMA aggregation pages (range 1-127, 0 to disable) (int)
root@kali:~#
  ```
  
  
  
