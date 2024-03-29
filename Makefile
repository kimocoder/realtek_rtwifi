# SPDX-License-Identifier: GPL-2.0-only
obj-$(CONFIG_RTL8XXXU)	+= rtl8xxxu.o

rtl8xxxu-y	:= rtl8xxxu_core.o rtl8xxxu_8192e.o rtl8xxxu_8723b.o \
		   rtl8xxxu_8723a.o rtl8xxxu_8192c.o rtl8xxxu_8188f.o \
		   rtl8xxxu_8188e.o rtl8xxxu_8710b.o


KVER := $(shell uname -r)
KSRC := /lib/modules/$(KVER)/build
MODDESTDIR := /lib/modules/$(KVER)/kernel/drivers/net/wireless/realtek/

all: modules

modules:
	$(MAKE) -C $(KSRC) M=$(shell pwd) modules

MODULE_NAME = rtl8xxxu

install: modules
	#gzip -f $(MODULE_NAME).ko
	sudo cp -f $(MODULE_NAME).ko  $(MODDESTDIR)
	sudo /sbin/depmod -a ${KVER}
	sudo modprobe $(MODULE_NAME)
	sudo rmmod $(MODULE_NAME)
	sudo modprobe $(MODULE_NAME)

uninstall:
	sudo rm -f $(MODDESTDIR)/$(MODULE_NAME).ko
	sudo /sbin/depmod -a ${KVER}

.PHONY: modules clean

clean:
	rm -fr Module.symvers ; rm -fr Module.markers ; rm -fr modules.order
	rm -fr *.mod.c *.mod *.o .*.cmd *.ko *~
	rm -fr .tmp_versions

rm:
	sudo rmmod $(MODULE_NAME)

probe:
	sudo modprobe $(MODULE_NAME)
