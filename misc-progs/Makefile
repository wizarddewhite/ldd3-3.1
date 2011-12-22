
FILES = nbtest load50 mapcmp polltest mapper setlevel setconsole inp outp \
	datasize dataalign netifdebug

KERNELDIR ?= ../../linux-2.6
INCLUDEDIR = $(KERNELDIR)/include
#CFLAGS = -O2 -fomit-frame-pointer -Wall -I$(INCLUDEDIR)
CFLAGS = -g -Wall -I$(INCLUDEDIR)

all: $(FILES)

clean:
	rm -f $(FILES) *~ core

