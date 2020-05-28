#include <linux/build-salt.h>
#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(.gnu.linkonce.this_module) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0xb90cb2c6, "module_layout" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xc3b61d22, "ieee80211_rx_irqsafe" },
	{ 0xc4a14306, "kmalloc_caches" },
	{ 0xf9a482f9, "msleep" },
	{ 0x503f2eef, "param_ops_int" },
	{ 0xc23ffb3, "usb_init_urb" },
	{ 0x263ed23b, "__x86_indirect_thunk_r12" },
	{ 0xd30a4055, "skb_clone" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xa746cdfc, "ieee80211_unregister_hw" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x5a5a156e, "param_ops_bool" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2f0cb804, "skb_trim" },
	{ 0xed7fc310, "ieee80211_stop_queues" },
	{ 0x8c90b7ce, "usb_unanchor_urb" },
	{ 0x75e18b82, "__netdev_alloc_skb" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xf64c8101, "_dev_warn" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x9dd66484, "usb_deregister" },
	{ 0x18e8eb44, "ieee80211_alloc_hw_nm" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x81aae731, "ieee80211_wake_queues" },
	{ 0xd844f0a5, "usb_control_msg" },
	{ 0x4509aaea, "skb_push" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xa1fd35e7, "skb_pull" },
	{ 0xdf872899, "_dev_err" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0x52af4d4b, "_dev_info" },
	{ 0xf51ed08d, "usb_submit_urb" },
	{ 0xf8a515e3, "usb_get_dev" },
	{ 0x962c8ae1, "usb_kill_anchored_urbs" },
	{ 0x12a38747, "usleep_range" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xc9ec3d13, "usb_reset_device" },
	{ 0x959401f8, "usb_put_dev" },
	{ 0x4cfb40fa, "ieee80211_tx_status_irqsafe" },
	{ 0x3743cdfb, "ieee80211_find_sta" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xec4e6a94, "kmem_cache_alloc_trace" },
	{ 0xe00d2f98, "__dynamic_dev_dbg" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xcf1d6d07, "ieee80211_register_hw" },
	{ 0x37a0cba, "kfree" },
	{ 0xf4bcdfb7, "usb_register_driver" },
	{ 0xcbc4d58f, "request_firmware" },
	{ 0xd7ec4e3e, "ieee80211_free_hw" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xea37508c, "consume_skb" },
	{ 0x9b0feac2, "skb_put" },
	{ 0xd0d6e733, "usb_free_urb" },
	{ 0x5734ed27, "release_firmware" },
	{ 0x918e5670, "usb_anchor_urb" },
	{ 0xe0d57b51, "usb_alloc_urb" },
};

MODULE_INFO(depends, "mac80211,usbcore");

MODULE_ALIAS("usb:v0BDAp8724d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v0BDAp1724d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v0BDAp0724d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v0BDAp818Bd*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v2357p0108d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v2001p3319d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v2357p0109d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v0BDApB720d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v0BDAp8179d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v0BDAp0179d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v0BDAp8179d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v0DF6p0076d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v2001p3311d*dc*dsc*dp*icFFiscFFipFFin*");
