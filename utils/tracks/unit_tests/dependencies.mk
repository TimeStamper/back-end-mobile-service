##
# Created: 16 june 2016
#  Author: Erik
#    File: dependencies.mk
#    Info: Specifies the unit test dependencies for the Time Stamper Backend application.
#

ifndef unit_tests_dependencies
unit_tests_dependencies=1

#---------------------------------------------------------------------------------------------------
# Module Dependencies
#
include $(DEV_SRC)/$(CALENDER_PATH)/dependencies.mk
include $(DEV_SRC)/$(DAY_ENTRY_PATH)/dependencies.mk
include $(DEV_SRC)/$(STAMP_PATH)/dependencies.mk
include $(DEV_SRC)/$(TEST_MAIN_PATH)/dependencies.mk

#---------------------------------------------------------------------------------------------------

endif
