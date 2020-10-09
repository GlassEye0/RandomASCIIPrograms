# TARGET #

TARGET := 3DS

# COMMON CONFIGURATION #

NAME := Build Template

BUILD_DIR := build
OUTPUT_DIR := output
INCLUDE_DIRS := include
SOURCE_DIRS := source

VERSION_MAJOR := 0
VERSION_MINOR := 0
VERSION_MICRO := 0

# 3DS/Wii U/Switch CONFIGURATION #

AUTHOR := Steveice10

# 3DS/Wii U CONFIGURATION #

DESCRIPTION := Build template.

# 3DS CONFIGURATION #

ifeq ($(TARGET),3DS)
    LIBRARY_DIRS += $(DEVKITPRO)/libctru
    LIBRARIES += ctru

    PRODUCT_CODE := CTR-P-TEMP
    UNIQUE_ID := 0xF8000

    BANNER_AUDIO := meta/audio_3ds.wav
    BANNER_IMAGE := meta/banner_3ds.png
    ICON := meta/icon_3ds.png
endif

# Wii U CONFIGURATION #

ifeq ($(TARGET),WIIU)
    LONG_DESCRIPTION := Build template.
    ICON := meta/icon_wiiu.png
endif

# Switch CONFIGURATION #

ifeq ($(TARGET),SWITCH)
    LIBRARY_DIRS += $(DEVKITPRO)/libnx
    LIBRARIES += nx

    ICON := meta/icon_switch.jpg
endif

# INTERNAL #

include buildtools/make_base
