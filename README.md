

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
  * WPA3-SAE
  * MESH mode
  * AP mode
  * P2P mode
  * Monitor mode
  * Frame injection (packet injection)
  * Virtual interfaces (VIF)
  * Newest mac80211
  * Channel width
```


  ### TODO
  ```sh
  * Separate the module name from kernels rtl8xxxu
    we don't wan't them to collide :/

  * Add more VID/PIDs
  * Add more upstream patches
  * Enhance the Makefile
  * Add DKMS
  * Clean with checkpatch
```


  ### Howto: Download & Install
  ```sh
  $ git clone https://github.com/kimocoder/realtek_rtwifi
  $ cd realtek_wifi
  $ make && insmod rtwifi.ko (not make install right now)
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






  Please report issues (if you encounter any), open a issue report with as much details/logs
  as possible.










  ## More information is coming with time .. stay tuned & enjoy!
 
