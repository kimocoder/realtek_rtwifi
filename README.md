  
  
  ## Realtek RTWIFI - standalone mac80211 driver w/good support
  This driver currently supports these chipsets: Realtek 8188e(us) 8192e 8192c 8723a and 8723b 

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


  ### Important to know
  ```sh
  It's important to 'blacklist' the '8188eu','r8188eu' and the 'rtl8xxxu' in /etc/modprobe.d
  Just add a file 'nano /etc/modprobe.d/realtek.conf and put "blaklist <driver>" on separat lines below.
  
  The kernel mainline has one driver named r8188eu.ko and aircrack-ng used 8188eu.ko for the older stack.
  ```

  ### Driver support (fully detailed)
  ```sh
  The driver supports 'monitor mode' and 'frame injection' capabilities,
  often needed for penetration testing abilities. Besides that, it has good support as it's
  an MAC80211 driver rather than NL80211/CFG80211. AP/MESH/MANAGED/MONITOR support, WPA3-SAE,
  Virtual Interfaces (VIF), TX power control, P2P commands etc.
  
  
          wiphy index: 6
        max # scan SSIDs: 4
        max scan IEs length: 2257 bytes
        max # sched scan SSIDs: 0
        max # match sets: 0
        max # scan plans: 1
        max scan plan interval: -1
        max scan plan iterations: 0
        RTS threshold: 2347
        Retry short limit: 7
        Retry long limit: 4
        Coverage class: 0 (up to 0m)
        Supported Ciphers:
                * WEP40 (00-0f-ac:1)
                * WEP104 (00-0f-ac:5)
                * TKIP (00-0f-ac:2)
                * CCMP-128 (00-0f-ac:4)
                * CCMP-256 (00-0f-ac:10)
                * GCMP-128 (00-0f-ac:8)
                * GCMP-256 (00-0f-ac:9)
        Available Antennas: TX 0 RX 0
        Supported interface modes:
                 * managed
                 * monitor
        Band 1:
                Capabilities: 0x6c
                        HT20
                        SM Power Save disabled
                        RX HT20 SGI
                        RX HT40 SGI
                        No RX STBC
                        Max AMSDU length: 3839 bytes
                        No DSSS/CCK HT40
                Maximum RX AMPDU length 65535 bytes (exponent: 0x003)
                Minimum RX AMPDU time spacing: 16 usec (0x07)
                HT TX/RX MCS rate indexes supported: 0-7, 32
                Bitrates (non-HT):
                        * 1.0 Mbps
                        * 2.0 Mbps
                        * 5.5 Mbps
                        * 11.0 Mbps
                        * 6.0 Mbps
                        * 9.0 Mbps
                        * 12.0 Mbps
                        * 18.0 Mbps
                        * 24.0 Mbps
                        * 36.0 Mbps
                        * 48.0 Mbps
                        * 54.0 Mbps
                Frequencies:
                        * 2412 MHz [1] (20.0 dBm)
                        * 2417 MHz [2] (20.0 dBm)
                        * 2422 MHz [3] (20.0 dBm)
                        * 2427 MHz [4] (20.0 dBm)
                        * 2432 MHz [5] (20.0 dBm)
                        * 2437 MHz [6] (20.0 dBm)
                        * 2442 MHz [7] (20.0 dBm)
                        * 2447 MHz [8] (20.0 dBm)
                        * 2452 MHz [9] (20.0 dBm)
                        * 2457 MHz [10] (20.0 dBm)
                        * 2462 MHz [11] (20.0 dBm)
                        * 2467 MHz [12] (20.0 dBm)
                        * 2472 MHz [13] (20.0 dBm)
                        * 2484 MHz [14] (disabled)
        Supported commands:
                 * new_interface
                 * set_interface
                 * new_key
                 * start_ap
                 * new_station
                 * new_mpath
                 * set_mesh_config
                 * set_bss
                 * authenticate
                 * associate
                 * deauthenticate
                 * disassociate
                 * join_ibss
                 * join_mesh
                 * remain_on_channel
                 * set_tx_bitrate_mask
                 * frame
                 * frame_wait_cancel
                 * set_wiphy_netns
                 * set_channel
                 * set_wds_peer
                 * probe_client
                 * set_noack_map
                 * register_beacons
                 * start_p2p_device
                 * set_mcast_rate
                 * connect
                 * disconnect
                 * set_qos_map
                 * set_multicast_to_unicast
        Supported TX frame types:
                 * IBSS: 0x00 0x10 0x20 0x30 0x40 0x50 0x60 0x70 0x80 0x90 0xa0 0xb0 0xc0 0xd0 0xe0 0xf0
                 * managed: 0x00 0x10 0x20 0x30 0x40 0x50 0x60 0x70 0x80 0x90 0xa0 0xb0 0xc0 0xd0 0xe0 0xf0
                 * AP: 0x00 0x10 0x20 0x30 0x40 0x50 0x60 0x70 0x80 0x90 0xa0 0xb0 0xc0 0xd0 0xe0 0xf0
                 * AP/VLAN: 0x00 0x10 0x20 0x30 0x40 0x50 0x60 0x70 0x80 0x90 0xa0 0xb0 0xc0 0xd0 0xe0 0xf0
                 * mesh point: 0x00 0x10 0x20 0x30 0x40 0x50 0x60 0x70 0x80 0x90 0xa0 0xb0 0xc0 0xd0 0xe0 0xf0
                 * P2P-client: 0x00 0x10 0x20 0x30 0x40 0x50 0x60 0x70 0x80 0x90 0xa0 0xb0 0xc0 0xd0 0xe0 0xf0
                 * P2P-GO: 0x00 0x10 0x20 0x30 0x40 0x50 0x60 0x70 0x80 0x90 0xa0 0xb0 0xc0 0xd0 0xe0 0xf0
                 * P2P-device: 0x00 0x10 0x20 0x30 0x40 0x50 0x60 0x70 0x80 0x90 0xa0 0xb0 0xc0 0xd0 0xe0 0xf0
        Supported RX frame types:
                 * IBSS: 0x40 0xb0 0xc0 0xd0
                 * managed: 0x40 0xb0 0xd0
                 * AP: 0x00 0x20 0x40 0xa0 0xb0 0xc0 0xd0
                 * AP/VLAN: 0x00 0x20 0x40 0xa0 0xb0 0xc0 0xd0
                 * mesh point: 0xb0 0xc0 0xd0
                 * P2P-client: 0x40 0xd0
                 * P2P-GO: 0x00 0x20 0x40 0xa0 0xb0 0xc0 0xd0
                 * P2P-device: 0x40 0xd0
        software interface modes (can always be added):
                 * monitor
        interface combinations are not supported
        HT Capability overrides:
                 * MCS: ff ff ff ff ff ff ff ff ff ff
                 * maximum A-MSDU length
                 * supported channel width
                 * short GI for 40 MHz
                 * max A-MPDU length exponent
                 * min MPDU start spacing
        Device supports TX status socket option.
        Device supports HT-IBSS.
        Device supports SAE with AUTHENTICATE command
        Device supports low priority scan.
        Device supports scan flush.
        Device supports AP scan.
        Device supports per-vif TX power setting
        Driver supports full state transitions for AP/GO clients
        Driver supports a userspace MPM
        Device supports configuring vdev MAC-addr on create.
        Supported extended features:
                * [ RRM ]: RRM
                * [ FILS_STA ]: STA FILS (Fast Initial Link Setup)
                * [ CQM_RSSI_LIST ]: multiple CQM_RSSI_THOLD records
                * [ CONTROL_PORT_OVER_NL80211 ]: control port over nl80211
                * [ SCAN_RANDOM_SN ]: use random sequence numbers in scans
                * [ SCAN_MIN_PREQ_CONTENT ]: use probe request with only rate IEs in scans
                * [ CONTROL_PORT_NO_PREAUTH ]: disable pre-auth over nl80211 control port support
                * [ SCAN_FREQ_KHZ ]: scan on kHz frequency support
                * [ CONTROL_PORT_OVER_NL80211_TX_STATUS ]: tx status for nl80211 control port support
  
  
  
  
  Needs to be tested:
  * Hostapd support
  * WiFi Direct
  * IPerf3 test
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
  $ make && make install (or 'insmod rtwifi.ko' if so)
  ```

  ### Capabilities / functionalities
  ```sh
  
  * Monitor mode & frame injection caoabilities is needed for penetration testing
    e.g Kali Linux / NetHunter so on. 
  
  $ airmon-ng 

PHY     Interface       Driver          Chipset

phy1    wlan1           rtl8xxxu        Realtek Semiconductor Corp. RTL8188EUS 802.11n Wireless Network Adapter
phy2    wlan2           mt76x0u         MediaTek Inc. WiFi

$ aireplay-ng -9 wlan1
21:19:38  Trying broadcast probe requests...
21:19:39  Injection is working!
21:19:39  Found 1 AP 

21:19:39  Trying directed probe requests...
21:19:39  xx:xx:80:xx:6A:xx - channel: 11 - 'NextGenTel_xAx2'
21:19:40  Ping (min/avg/max): 0.987ms/1.735ms/5.565ms Power: -90.80
21:19:40  30/30: 100%

  

$ hcxdumptool -i wlan0 --check_injection
initialization...
interface is already in monitor mode
starting packet injection test (that can take up to two minutes)...
packet injection is working!
ratio: 20 to 8  
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
  
  
  
