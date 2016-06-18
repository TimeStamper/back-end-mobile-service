##
# Created: 17 january 2016
#  Author: Erik
#    File: dependencies.mk
#    Info: Specifies the dependencies attributed this module.
#

ifndef month_dependencies
month_dependencies=1

#---------------------------------------------------------------------------------------------------
# Module Dependencies
#
INCLUDES := \
  -I$(DEV_SRC)/$(MONTH_PATH) \
  $(INCLUDES) \
  #


SOURCE_FILES := \
  $(DEV_SRC)/$(MONTH_PATH)/source/month.cc \
  $(SOURCE_FILES) \
  #


TEST_FILES := \
  $(DEV_SRC)/$(MONTH_PATH)/test/month_test.cc \
  $(TEST_FILES) \
  #

#---------------------------------------------------------------------------------------------------

endif
