obj-m += log_levels.o

KDIR := $(SDKTARGETSYSROOT)/usr/src/kernel

all:
	$(MAKE) -C $(KDIR) M=$(PWD) modules \
		CROSS_COMPILE=$(CROSS_COMPILE) \
		ARCH=arm64

clean:
	$(MAKE) -C $(KDIR) M=$(PWD) clean
