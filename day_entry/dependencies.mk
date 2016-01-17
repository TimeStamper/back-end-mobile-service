##
# Created: 10 august 2015
#  Author: Erik
#    File: dependencies.mk
#    Info: Specifies the dependencies attributed this module.
#

ifndef day_entry_dependencies
day_entry_dependencies=1

#---------------------------------------------------------------------------------------------------
# Module Dependencies
#
include $(DEV_SRC)/$(STAMP_PATH)/dependencies.mk

INCLUDES := \
  -I$(DEV_SRC)/$(DAY_ENTRY_PATH) \
  $(INCLUDES) \
  #


SOURCE_FILES := \
  $(DEV_SRC)/$(DAY_ENTRY_PATH)/source/day_entry.cc \
  $(SOURCE_FILES) \
  #


TEST_FILES := \
  $(DEV_SRC)/$(DAY_ENTRY_PATH)/test/day_entry_test.cc \
  $(TEST_FILES) \
  #

#---------------------------------------------------------------------------------------------------

endif
