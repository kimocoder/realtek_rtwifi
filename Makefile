obj-$(CONFIG_RTL8XXXU)	+= rtwifi.o

rtwifi-y	:= rtl8xxxu_core.o rtl8xxxu_8192e.o rtl8xxxu_8723b.o \
		   rtl8xxxu_8723a.o rtl8xxxu_8192c.o rtl8xxxu_8188e.o


KVER := $(shell uname -r)
KSRC := /lib/modules/$(KVER)/build
MODDESTDIR := /lib/modules/$(KVER)/kernel/drivers/net/wireless/realtek/rtwifi

all: modules

modules:
	$(MAKE) -C $(KSRC) M=$(shell pwd) modules

MODULE_NAME = rtwifi

install: modules
	gzip -f $(MODULE_NAME).ko
	sudo cp -f $(MODULE_NAME).ko.gz  $(MODDESTDIR)
	sudo /sbin/depmod -a ${KVER}
	sudo modprobe $(MODULE_NAME)
	sudo rmmod $(MODULE_NAME)
	sudo modprobe $(MODULE_NAME)

uninstall:
	sudo rm -f $(MODDESTDIR)/$(MODULE_NAME).ko
	sudo /sbin/depmod -a ${KVER}

.PHONY: modules clean

clean:
	rm -fr *.ko.gz
	cd hal ; rm -fr *.mod.c *.mod *.o .*.cmd */*.ko
	cd core ; rm -fr *.mod.c *.mod *.o .*.cmd *.ko
	cd os_dep ; rm -fr *.mod.c *.mod *.o .*.cmd *.ko
	cd platform ; rm -fr *.mod.c *.mod *.o .*.cmd *.ko
	rm -fr Module.symvers ; rm -fr Module.markers ; rm -fr modules.order
	rm -fr *.mod.c *.mod *.o .*.cmd *.ko *~
	rm -fr .tmp_versions

rm:
	sudo rmmod $(MODULE_NAME)

probe:
	sudo modprobe $(MODULE_NAME)
