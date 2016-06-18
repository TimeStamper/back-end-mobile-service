##
# Created: 15 may 2016
#  Author: Erik
#    File: dependencies.mk
#    Info: Specifies the dependencies attributed this module.
#

ifndef types_dependencies
types_dependencies=1

#---------------------------------------------------------------------------------------------------
# Module Dependencies
#
INCLUDES := \
  -I$(DEV_SRC)/$(TYPES_PATH) \
  $(INCLUDES) \
  #

#---------------------------------------------------------------------------------------------------

endif
