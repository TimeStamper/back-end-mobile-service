##
# Created: 17 january 2016
#  Author: Erik
#    File: dependencies.mk
#    Info: Specifies the dependencies attributed this module.
#

ifndef day_dependencies
day_dependencies=1

#---------------------------------------------------------------------------------------------------
# Module Dependencies
#
INCLUDES := \
  -I$(DEV_SRC)/$(DAY_PATH) \
  $(INCLUDES) \
  #


SOURCE_FILES := \
  $(DEV_SRC)/$(DAY_PATH)/source/day.cc \
  $(SOURCE_FILES) \
  #


TEST_FILES := \
  $(DEV_SRC)/$(DAY_PATH)/test/day_test.cc \
  $(TEST_FILES) \
  #

#---------------------------------------------------------------------------------------------------

endif
