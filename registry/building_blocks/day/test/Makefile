##
# Created: 17 january 2016
#  Author: Erik
#    File: Makefile
#    Info: Makefile for building the test target for this specific module.
#

#---------------------------------------------------------------------------------------------------
# Path Definitions
#
include $(DEV_SRC)/path_definitions.mk


#---------------------------------------------------------------------------------------------------
# Build Definitions
#
EXECUTABLE_NAME := day_test
EXECUTABLE_PATH := $(DAY_PATH)
TARGET_ENVIRONMENT := x86
SOURCE_LANGUAGE := cpp
TARGET_TYPE := test


#---------------------------------------------------------------------------------------------------
# Module Dependencies
#
include $(DEV_SRC)/$(DAY_PATH)/dependencies.mk
include $(DEV_SRC)/$(TEST_MAIN_PATH)/dependencies.mk


#---------------------------------------------------------------------------------------------------
# Build System Dependencies
#
include $(BLD_SYS_DIR)/$(BUILD_SYSTEM_ENTRY_POINT_PATH)/operator.mk


#---------------------------------------------------------------------------------------------------
