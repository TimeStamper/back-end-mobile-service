##
# Created: 17 january 2016
#  Author: Erik
#    File: dependencies.mk
#    Info: Specifies the dependencies attributed this module.
#

ifndef week_dependencies
week_dependencies=1

#---------------------------------------------------------------------------------------------------
# Module Dependencies
#
INCLUDES := \
  -I$(DEV_SRC)/$(WEEK_PATH) \
  $(INCLUDES) \
  #


SOURCE_FILES := \
  $(DEV_SRC)/$(WEEK_PATH)/source/week.cc \
  $(SOURCE_FILES) \
  #


TEST_FILES := \
  $(DEV_SRC)/$(WEEK_PATH)/test/week_test.cc \
  $(TEST_FILES) \
  #

#---------------------------------------------------------------------------------------------------

endif
