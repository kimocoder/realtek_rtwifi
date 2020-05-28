

  ## Realtek WiFi - EXPERIMENTAL driver
  This driver currently supports these chipsets: Realtek 8188e 8192e 8192c 8723a and 8723b 

  [![GitHub issues](https://img.shields.io/github/issues/kimocoder/realtek_wifi.svg)](https://github.com/kimocoder/realtek_wifi/issues)
  [![GitHub forks](https://img.shields.io/github/forks/kimocoder/realtek_wifi.svg)](https://github.com/kimocoder/realtek_wifi/network)
  [![GitHub stars](https://img.shields.io/github/stars/kimocoder/realtek_wifi.svg)](https://github.com/kimocoder/realtek_wifi/stargazers)


  ### Driver supports
  ```sh
  * WPA3-SAE
  * MESH (HT-IBSS) mode
  * AP mode
  * P2P mode
  * Monitor mode
  * Frame injection (packet injection)
  * Virtual interfaces (VIF)
  * Newest mac80211
  * Channel width
```

  ### Howto: Download & Install
  ```sh
  $ git clone https://github.com/kimocoder/realtek_wifi
  $ cd realtek_wifi
  $ make && make install
  ```

  ### Howto: Implement this driver into Android kernel (NetHunter)
  This driver uses binaries instead of building as a kernel module,
  that makes it quite a bit easier to handle both for users and for the kernel.

  ```sh
  * Copy driver folder to 'kernel/drivers/net/wireless/realtek/
  * Open the Makefile in vim/nano, eg: vim drivers/net/wireless/realtek/Makefile
  
    Then add:
    '"obj-$(CONFIG_RTL8XXXU) += rtl8xxxu/" in the bottom.'
    
  * Step two, eg: vim drivers/net/wireless/realtek/Kconfig
    
    Then add:
    'source "drivers/net/wireless/realtek/rtl8xxxu/Kconfig"' at bottom.
    
    Compile kernel and the driver should be available in 'make menuconfig'
    also, in between all the other options in there. Pretty simple.
  ```






  Please report issues (if you encounter any), open a issue report with as much details/logs
  as possible.










  ## More information is coming up with time .. thanks!
 
