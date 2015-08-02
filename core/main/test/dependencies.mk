##
# Created: 26 juli 2015
#  Author: Erik
#    File: dependencies.mk
#    Info: Specifies the dependencies attributed this module.
#

ifndef test_main_dependencies
test_main_dependencies=1

#---------------------------------------------------------------------------------------------------
# Module Dependencies
#
INCLUDES := \
  $(INCLUDES) \
  #


SOURCE_FILES := \
  $(DEV_SRC)/$(TEST_MAIN_PATH)/source/test_main.cc \
  $(SOURCE_FILES) \
  #


TEST_FILES := \
  $(TEST_FILES) \
  #

#---------------------------------------------------------------------------------------------------

endif
