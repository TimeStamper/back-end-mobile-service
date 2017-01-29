##
# Created: 04 october 2015
#  Author: Erik
#    File: dependencies.mk
#    Info: Specifies the dependencies attributed this module.
#

ifndef calendar_dependencies
calendar_dependencies=1

#---------------------------------------------------------------------------------------------------
# Module Dependencies
#
include $(DEV_SRC)/$(DAY_ENTRY_PATH)/dependencies.mk


INCLUDES := \
  -I$(DEV_SRC)/$(CALENDAR_PATH) \
  $(INCLUDES) \
  #


SOURCE_FILES := \
  $(DEV_SRC)/$(CALENDAR_PATH)/source/calendar.cc \
  $(SOURCE_FILES) \
  #


TEST_FILES := \
  $(DEV_SRC)/$(CALENDAR_PATH)/test/calendar_test.cc \
  $(TEST_FILES) \
  #

#---------------------------------------------------------------------------------------------------

endif
