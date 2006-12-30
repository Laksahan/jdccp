#
## Makefile for Linux JNI Compilation
#
## PLEASE BE CAREFUL EDITING THIS FILE; KEEP TABS IN PLACE!!
#
#
##change these!!
UPATH     = /usr/bin/
JDK_HOME  = /etc/java-config-2/current-system-vm/

# define utility programs and options
CC      = $(UPATH)gcc
CFLAGS  = -I$(JDK_HOME)include -I$(JDK_HOME)include/linux -shared
MAKE    = $(UPATH)make
CTAGS   = $(UPATH)ctags
INDENT  = $(UPATH)indent -bl -c41 -i4 -l72 -pcs

NativeDCCPSocketImpl:  NativeDCCPSocketImpl.c
	$(CC) $(CFLAGS) -o NativeJDCCPSocket.so NativeDCCPSocketImpl.c

debug:  print.c
	@CFLAGS="$(CFLAGS) -DDEBUG";export CFLAGS;$(MAKE) -e

#"clean" target - remove unwanted object files and executables
clean:
	rm -f print libPrint.o tags lint nohup.out a.out core
