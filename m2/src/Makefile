#******************************************************************************
# Copyright (C) 2017 by Alex Fosdick - University of Colorado
#
# Redistribution, modification or use of this software in source or binary
# forms is permitted as long as the files maintain this copyright. Users are 
# permitted to modify this and use it to learn about the field of embedded
# software. Alex Fosdick and the University of Colorado are not liable for any
# misuse of this material. 
#
#*****************************************************************************

#------------------------------------------------------------------------------
# <Put a Description Here>
#
# Use: make [TARGET] [PLATFORM-OVERRIDES]
#
# Build Targets:
#      <Put a description of the supported targets here>
#
# Platform Overrides:
#      <Put a description of the supported Overrides here
#
#------------------------------------------------------------------------------
include sources.mk

# Platform Overrides

# Architectures Specific Flags
LINKER_FILE = -T ../msp432p401r.lds
CPU = \
	-mcpu=cortex-m4\
	-mthumb
ARCH = \
	-march=armv7e-m\
	-mfloat-abi=hard\
	-mfpu=fpv4-sp-d16
SPECS = --specs=nosys.specs

# Compiler Flags and Defines
 

CFLAGS =\
	-Wall\
	-Werror\
	-g\
	-O0\
	-std=c99


ifeq ($(PLATFORM),HOST)
	CC = gcc
	LD = gcc
	PLATFORM_TARGET = -DHOST
	OBJDUMP = objdump
	CPPFLAGS += $(PLATFORM_TARGET) 
    
else ifeq ($(PLATFORM),MSP432)
	CC = arm-none-eabi-gcc
	LD = arm-none-eabi-gcc
	PLATFORM_TARGET = -DMSP432
	OBJDUMP = arm-none-eabi-objdump
	CFLAGS += $(CPU) $(ARCH)
	CPPFLAGS += $(PLATFORM_TARGET) 
	LDFLAGS = $(LINKER_FILE) $(CPU) $(ARCH) $(SPECS)

endif

OBJECTS = $(SOURCES:.c=.o)

%.i: %.c
	$(CC) $(CFLAGS) $(CPPFLAGS) $(INCLUDES) -E $< -o $@

%.asm: %.c
	$(CC) $(CFLAGS) $(CPPFLAGS) $(INCLUDES) -S $< -o $@

c1m2.asm: c1m2.out
	$(OBJDUMP) -d $< > $@

%.o: %.c
	$(CC) $(CFLAGS) $(CPPFLAGS) $(INCLUDES) -MD -MP -c $< -o $@

.PHONY: compile-all
compile-all: $(OBJECTS)
	
.PHONY: build
build: $(OBJECTS)
	$(CC) $(OBJECTS) $(LDFLAGS) -Wl,-Map=c1m2.map -o c1m2.out 
	size c1m2.out

.PHONY: clean
clean:
	rm -f *i *asm *o *d *out *map

-include $(OBJECTS:.o=.d)