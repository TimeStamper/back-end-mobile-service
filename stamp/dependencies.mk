##
# Created: 02 august 2015
#  Author: Erik
#    File: dependencies.mk
#    Info: Specifies the dependencies attributed this module.
#

ifndef stamp_dependencies
stamp_dependencies=1

#---------------------------------------------------------------------------------------------------
# Module Dependencies
#
INCLUDES := \
  -I$(DEV_SRC)/$(STAMP_PATH)/include \
  $(INCLUDES) \
  #


SOURCE_FILES := \
  $(DEV_SRC)/$(STAMP_PATH)/source/stamp.cc \
  $(SOURCE_FILES) \
  #


TEST_FILES := \
  $(DEV_SRC)/$(STAMP_PATH)/test/stamp_test.cc \
  $(TEST_FILES) \
  #

#---------------------------------------------------------------------------------------------------

endif
