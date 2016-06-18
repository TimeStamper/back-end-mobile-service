##
# Created: 17 january 2016
#  Author: Erik
#    File: dependencies.mk
#    Info: Specifies the dependencies attributed this module.
#

ifndef year_dependencies
year_dependencies=1

#---------------------------------------------------------------------------------------------------
# Module Dependencies
#
include $(DEV_SRC)/$(MONTH_PATH)/dependencies.mk

INCLUDES := \
  -I$(DEV_SRC)/$(YEAR_PATH) \
  $(INCLUDES) \
  #


SOURCE_FILES := \
  $(DEV_SRC)/$(YEAR_PATH)/source/year.cc \
  $(SOURCE_FILES) \
  #


TEST_FILES := \
  $(DEV_SRC)/$(YEAR_PATH)/test/year_test.cc \
  $(TEST_FILES) \
  #

#---------------------------------------------------------------------------------------------------

endif
