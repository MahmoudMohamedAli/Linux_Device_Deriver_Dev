obj-m += my_cdev.o

KDIR := $(SDKTARGETSYSROOT)/usr/src/kernel

all: module testapp

module:
	$(MAKE) -C $(KDIR) M=$(PWD) modules \
		CROSS_COMPILE=$(CROSS_COMPILE) \
		ARCH=arm64

testapp: test_ops.c
	$(CC) -o testapp test_ops.c

clean:
	$(MAKE) -C $(KDIR) M=$(PWD) clean
	rm -f testapp