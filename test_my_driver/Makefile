obj-m += my_driver.o

KDIR := /home/mahmoud/Desktop/sdk_install_folder/sysroots/cortexa53-poky-linux/lib/modules/5.15.92-v8/build

all:
	$(MAKE) -C $(KDIR) M=$(PWD) modules \
		CROSS_COMPILE=$(CROSS_COMPILE) \
		ARCH=arm64

clean:
	$(MAKE) -C $(KDIR) M=$(PWD) clean
