# Comment/uncomment the following line to disable/enable debugging
DEBUG = y


# Add your debugging flag (or not) to CFLAGS
ifeq ($(DEBUG),y)
  DEBFLAGS = -O -g -DSCULL_DEBUG # "-O" is needed to expand inlines
else
  DEBFLAGS = -O2
endif

EXTRA_CFLAGS += $(DEBFLAGS)
EXTRA_CFLAGS += -I$(LDDINC)

ifneq ($(KERNELRELEASE),)
# call from kernel build system

scull-objs := main.o pipe.o access.o ex_obj.o

obj-m	:= scull.o

else

#KERNELDIR ?= /lib/modules/$(shell uname -r)/build
KERNELDIR ?= ../../linux-2.6
PWD       := $(shell pwd)

modules:
	cp ../ex_obj/ex_obj.o ex_obj.o_shipped
	$(MAKE) -C $(KERNELDIR) M=$(PWD) LDDINC=$(PWD)/../include modules

clean:
	$(MAKE) -C $(KERNELDIR) M=$(PWD) clean
endif

depend .depend dep:
	$(CC) $(CFLAGS) -M *.c > .depend


ifeq (.depend,$(wildcard .depend))
include .depend
endif
