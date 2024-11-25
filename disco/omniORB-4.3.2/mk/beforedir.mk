#
# beforedir.mk - make variables and rules to go before "dir.mk".  This file
# contains some platform-independent stuff then includes a platform-specific
# ".mk" file.
#

#############################################################################
#
# Set this as the base OMNI tree.  If BASE_OMNI_TREE is already defined then
# abort with an error message.
#

ifdef BASE_OMNI_TREE
%: forceabort
	@echo "ERROR: BASE_OMNI_TREE already defined"
	@exit 1
forceabort: ;
else
BASE_OMNI_TREE := $(THIS_IMPORT_TREE)
endif


#############################################################################
#
# Standard directories in import/export trees
#

INCDIR = include
IDLDIR = idl
MAKEDIR = mk
LIBDIR = lib/$(platform)
BINDIR = bin/$(platform)


#############################################################################
#
# These definitions are useful for referring to spaces and commas inside
# GNU make functions
#

empty :=
space := $(empty) $(empty)
comma := ,


#############################################################################
#
# The old pairs of ...DEFINES and ...INCLUDES variables have been replaced
# by two ...CPPFLAGS variables.
#
# DIR_CPPFLAGS can be defined in dir.mk.
# IMPORT_CPPFLAGS can have platform-independent -D and -I flags added by each
# import tree using +=.  Note that here we already put a -I flag for each
# directory in VPATH and each import tree's include directory.
#
# CXXDEBUGFLAGS and CDEBUGFLAGS are for setting debug/optimisation options to
# the C++ and C compilers respectively.  CXXOPTIONS and COPTIONS are for
# setting any other options to the compilers.
#
# There is nothing magic about these variables, but hopefully this covers
# most of the things people will want to set in other import trees and dir.mk.
#

IMPORT_CPPFLAGS += -I. $(patsubst %,-I%,$(VPATH)) \
		   $(patsubst %,-I%/include,$(IMPORT_TREES))

CPPFLAGS = $(DIR_CPPFLAGS) $(IMPORT_CPPFLAGS)

CFLAGS = $(CDEBUGFLAGS) $(COPTIONS) $(CPPFLAGS)

CXXFLAGS = $(CXXDEBUGFLAGS) $(CXXOPTIONS) $(CPPFLAGS)



#############################################################################
#
# IMPORT_LIBRARY_DIRS is simply a list of the lib/<platform> directories
# in each of the import trees.
#

IMPORT_LIBRARY_DIRS = $(patsubst %,%/$(LIBDIR),$(IMPORT_TREES))


#############################################################################
#
# GENERATE_LIB_DEPEND is a variable which behaves more like a "function",
# taking a single argument, the current value of $(lib_depend).  What it does
# is search through the IMPORT_LIBRARY_DIRS for the library specified in
# lib_depend. It is used with ":=" (simply-expanded variables) like this:
#
# lib_depend := libwobble.a
# WOBBLE_LIB_DEPEND := $(GENERATE_LIB_DEPEND)
#
# $(WOBBLE_LIB_DEPEND) can now be specified as one of the dependencies of an
# executable which uses "libwobble.a", so that the executable will be rebuilt
# whenever libwobble.a changes.
#

GENERATE_LIB_DEPEND = $(firstword \
   $(foreach dir,$(IMPORT_LIBRARY_DIRS),$(wildcard $(dir)/$(lib_depend))))


#############################################################################
#
# Phony targets
#

.PHONY: all export clean veryclean redepend lastveryclean


#############################################################################
#
# If EXPORT_TREE is not defined, set all "export" rules to print an error.
#

ifndef EXPORT_TREE
define NoExportTreeError
echo "ERROR: This build tree has no export tree"; exit 1
endef
ExportExecutable=$(NoExportTreeError)
ExportLibrary=$(NoExportTreeError)
endif

#############################################################################
#
# MAKECMDGOALS is defined from gnumake 3.77 onwards.
# If an earlier gnumake version is used, we fall back to use the OMAKE_TARGET
# variable passed in by omake.
# 
#
ifndef MAKECMDGOALS
ifdef OMAKE_TARGET
MAKECMDGOALS = $(OMAKE_TARGET)
endif
endif

# When ODE is used, OMAKE will be defined. Otherwise falls back to gnumake.
#
ifndef OMAKE
OMAKE=$(MAKE)
endif


#############################################################################
#
# MakeSubdirs is a general rule which runs omake in each of SUBDIRS.
# Unfortunately we have to unset MAKEFLAGS otherwise the -I flags which
# omake passed to this make will be incorrectly passed down to the sub-make.
#

OMNI_MAKEFLAGS = $(filter --jobserver% -j%, $(MAKEFLAGS))

define MakeSubdirs
(MAKEFLAGS='$(OMNI_MAKEFLAGS)'; \
 set -e; \
 if [ "$$subdir_makeflags" = "" ]; then \
   subdir_makeflags='$(SUBDIR_MAKEFLAGS)'; \
 fi; \
 if [ "$$subdirs" = "" ]; then \
   subdirs='$(SUBDIRS)'; \
 fi; \
 if [ "$$target" = "" ]; then \
   target='$@'; \
 fi; \
 for dir in $$subdirs ; do \
   $(CreateDir); \
   (cd $$dir ; echo "making $$target in $(CURRENT)/$$dir..." ; \
    eval $(OMAKE) $$subdir_makeflags $$target ) ; \
   if [ $$? != 0 ]; then \
     exit 1; \
   fi; \
 done; \
)
endef

# Stop SUBDIRS specified on the command line being passed down.
unexport SUBDIRS


#############################################################################
#
# Useful bits of shell script.  Most take arguments as shell variables which
# can be set before putting them in your make rule.
#

#
# Create directory $$dir if it doesn't already exist.
#

define CreateDir
if [ ! -d $$dir ]; then \
   (umask 022; set -x; $(MKDIRHIER) $$dir); \
fi
endef


#
# Find $$file in $$dirs.  Returns full file name in $$fullfile.
#

define FindFileInDirs
case "$$file" in \
/*) fullfile="$$file";; \
*) \
  fullfile=""; \
  for _dir in $$dirs; do \
    if [ -f $$_dir/$$file ]; then \
      if [ "$$_dir" = "." ]; then \
        fullfile="$$file"; \
      else \
        fullfile="$$_dir/$$file"; \
      fi; \
      break; \
    fi; \
  done; \
  if [ ! "$$fullfile" ]; then \
    echo "ERROR: Cannot find $$file in $$dirs"; \
    exit 1; \
  fi;; \
esac
endef


#
# Find $$file in current directory or $(VPATH) - returns $$fullfile.
#

define FindFileInVpath
dirs='. $(VPATH)'; \
$(FindFileInDirs)
endef


#
# "Export" $$file to $$dir, creating $$dir if necessary.  Searches for
# $$file in $(VPATH) if not found in current directory.
#

define ExportFileToDir
$(CreateDir); \
$(FindFileInVpath); \
base=`basename $$file`; \
if [ -f $$dir/$$base ] && cmp $$fullfile $$dir/$$base >/dev/null; then \
  echo "File $$base hasn't changed."; \
else \
  (set -x; \
   $(INSTALL) $(INSTLIBFLAGS) $$fullfile $$dir); \
fi
endef


#
# "Export" an executable file.  Same as previous one but adds execute
# permission.
#

define ExportExecutableFileToDir
$(CreateDir); \
$(FindFileInVpath); \
base=`basename $$file`; \
if [ -f $$dir/$$base ] && cmp $$fullfile $$dir/$$base >/dev/null; then \
  echo "File $$base hasn't changed."; \
else \
  (set -x; \
   $(INSTALL) $(INSTEXEFLAGS) $$fullfile $$dir); \
fi
endef


#
# Complain about the lack of a PYTHON define
#
define NoPythonError
(echo -e '\a'; echo; echo; \
 echo '*** SORRY! ***'; \
 echo; \
 echo 'You have not told me where to find a Python interpreter.'; \
 echo 'Please edit $$TOP/mk/platforms/$(platform).mk to set'; \
 echo 'the PYTHON make variable to the location of a suitable python.'; \
 echo; echo; echo; \
 exit 1; \
)
endef



#############################################################################
#
# CORBA stuff
#

# It is now possible to compile interfaces and stubs that depend on
# idl from import trees without generating headers and stubs for those
# imported idls locally.  This is useful when the import tree supplies
# the headers and stubs itself, usually as part of some library.
#
# To arrange this, set DIR_IDLFLAGS and DIR_STUBS_CPPFLAGS in your
# dir.mk to the appropriate include flags.  Usually, these will just
# be the ones in IMPORT_IDLFLAGS and IMPORT_CPPFLAGS defined here, so
#
#   DIR_IDLFLAGS = $(IMPORT_IDLFLAGS)
#   DIR_STUBS_CPPFLAGS = $(IMPORT_CPPFLAGS)
#
# is all you need.  This would be the default if it weren't for the
# need to preserve the old (idl-copying) behaviour for existing dir.mk
# files.

vpath %.idl $(IMPORT_TREES:%=%/idl)

IMPORT_IDLFLAGS += -I. $(patsubst %,-I%,$(VPATH)) \
		       $(patsubst %,-I%/idl,$(IMPORT_TREES))

CORBA_IDL_FILES = $(CORBA_INTERFACES:%=%.idl)

CORBA_STUB_DIR = $(TOP)/stub

CorbaImplementation = NO_CORBA_IMPLEMENTATION

CORBA_IDL		= $($(CorbaImplementation)_IDL)
CORBA_CPPFLAGS		= $($(CorbaImplementation)_CPPFLAGS)
CORBA_LIB		= $($(CorbaImplementation)_LIB)
CORBA_LIB_DEPEND	= $($(CorbaImplementation)_LIB_DEPEND)
CORBA_LIB_NODYN		= $($(CorbaImplementation)_LIB_NODYN)
CORBA_LIB_NODYN_DEPEND	= $($(CorbaImplementation)_LIB_NODYN_DEPEND)
CORBA_IDL_OUTPUTDIR_PATTERN = $($(CorbaImplementation)_IDL_OUTPUTDIR_PATTERN)

CORBA_STUB_HDR_PATTERN	= $($(CorbaImplementation)_STUB_HDR_PATTERN)
CORBA_STUB_SRC_PATTERN	= $($(CorbaImplementation)_STUB_SRC_PATTERN)
CORBA_STUB_OBJ_PATTERN	= $($(CorbaImplementation)_STUB_OBJ_PATTERN)
CORBA_DYN_STUB_SRC_PATTERN = $($(CorbaImplementation)_DYN_STUB_SRC_PATTERN)
CORBA_DYN_STUB_OBJ_PATTERN = $($(CorbaImplementation)_DYN_STUB_OBJ_PATTERN)

CORBA_STUB_HDRS		= \
	$(CORBA_INTERFACES:%=$(CORBA_STUB_HDR_PATTERN))
CORBA_STUB_SRCS		= $($(CorbaImplementation)_STUB_SRCS)
CORBA_STUB_OBJS		= $($(CorbaImplementation)_STUB_OBJS)
CORBA_STATIC_STUB_SRCS	= $($(CorbaImplementation)_STATIC_STUB_SRCS)
CORBA_STATIC_STUB_OBJS	= $($(CorbaImplementation)_STATIC_STUB_OBJS)
CORBA_DYN_STUB_SRCS	= $($(CorbaImplementation)_DYN_STUB_SRCS)
CORBA_DYN_STUB_OBJS	= $($(CorbaImplementation)_DYN_STUB_OBJS)

CORBA_STUB_FILES = $(CORBA_INTERFACES:%=$(CORBA_STUB_DIR)/%.idl) \
		   $(CORBA_STUB_HDRS) $(CORBA_STUB_SRCS) $(CORBA_STUB_OBJS) \
		   $(CORBA_STUB_OBJS:.o=.d) $(CORBA_STUB_DIR)/dir.mk \
		   $($(CorbaImplementation)_EXTRA_STUB_FILES)

GENERATED_CXX_HDRS += $(CORBA_STUB_HDRS)

#############################################################################
#
# Now include the platform specific "mk" file.
#

ifeq ($(platform),)

define NoPlatformError
(echo -e '\a'; echo; echo; \
 echo '*** SORRY! ***'; \
 echo; \
 echo 'You have not told me what platform you are using.'; \
 echo; \
 echo 'If you have used the configure script on a Unix platform,'; \
 echo 'you must run make in the build tree, not the source tree.'; \
 echo; \
 echo 'If you are using the Windows / traditional build,'; \
 echo 'Please edit $$TOP/config/config.mk to set the platform.'; \
 echo; \
 echo 'Note that you also need to set the location of Python'; \
 echo 'in the $$TOP/mk/platforms/<platform>.mk file.'; \
 echo; echo; echo; \
 exit 1; \
)
endef

all::
	@$(NoPlatformError)
export::
	@$(NoPlatformError)

else

include $(THIS_IMPORT_TREE)/mk/platforms/$(platform).mk

endif
