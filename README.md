
  ## Realtek RTL8XXXU

  This driver currently supports these chipsets:
  REALTEK RTL 8188e(us), 8188f 8192e 8192c 8723a and 8723b 


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


  ### What's new!?
  ```sh
  This is a new "base", put together from kernel mainline and upstream wireless-drivers-next.
  Since last "base" I used last time, the stack has gotten both 8188EU(s) and 8188F(x) support.
  
  And it has been targetted on a lot of fresh kernel includes to move things to much.
  
  That's why I put together a standalone "Makefile" for buillding kernel modult too,
  in case it's hard to backport a bunch, for some time. Your choice.
  
  
  Will keep the driver as clean/easy this time, Module name will be "rtl8xxxu" (original)
  
  
  
  
  
  Cheers!
  
  
