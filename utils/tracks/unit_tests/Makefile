##
# Created: 16 june 2016
#  Author: Erik
#    File: Makefile
#    Info: Makefile for building unit tests tracks target for the Time Stamper Backend application.
#

#---------------------------------------------------------------------------------------------------
# Path Definitions
#
include $(DEV_SRC)/path_definitions.mk


#---------------------------------------------------------------------------------------------------
# Build Definitions
#
EXECUTABLE_NAME := unit_tests_tracks
EXECUTABLE_PATH := $(UNIT_TESTS_TRACKS_PATH)
TARGET_ENVIRONMENT := x86
SOURCE_LANGUAGE := cpp
TARGET_TYPE := test
TEST_AMOUNT := all


#---------------------------------------------------------------------------------------------------
# Module Dependencies
#
include $(DEV_SRC)/$(UNIT_TESTS_TRACKS_PATH)/dependencies.mk
include $(DEV_SRC)/$(TEST_MAIN_PATH)/dependencies.mk


#---------------------------------------------------------------------------------------------------
# Build System Dependencies
#
include $(BLD_SYS_DIR)/$(BUILD_SYSTEM_ENTRY_POINT_PATH)/operator.mk


#---------------------------------------------------------------------------------------------------
