#Set this to @ to keep the makefile quiet
ifndef SILENCE
	SILENCE = @
endif

#--- Inputs ----#
COMPONENT_NAME = helloworld
CPPUTEST_HOME = ~/cpputest-3.6

CPPUTEST_USE_EXTENSIONS = Y
CPP_PLATFORM = Gcc

SRC_DIRS = \
	..\
TEST_SRC_DIRS = \
	.\

INCLUDE_DIRS =\
  ..\
  \
  $(CPPUTEST_HOME)/include\

include $(CPPUTEST_HOME)/build/MakefileWorker.mk


