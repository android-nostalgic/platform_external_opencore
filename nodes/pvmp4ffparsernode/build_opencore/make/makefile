# Include the project-wide makefile to get 
# appropriate definitions
include $(PV_TOP)/makefile.pv

WHAT = library
TARGET = pvmp4ffparsernode

# Use XCFLAGS to add extra compiler directives for the C compiler
# if you add any please use "XCFLAGS += ..." not "XCFLAGS = " 
# unless you're sure you want to override the project defaults.
# Please include a comment if you do this.
#
# XCFLAGS += 

# Use XCXXFLAGS to add extra compiler directives for the C++ compiler.
# See notes above regarding overriding project defaults.
#
#XCXXFLAGS += -DTRUE=true -DFALSE=false

# Use XCPPFLAGS to add extra preprocessor directives. Use XINCDIRS
# for other include directories, but please only do this if absolutely
# necessary -- let the makefile system find the include directories if 
# possible.
# See notes above regarding overriding project defaults.
#
# XCPPFLAGS +=  

# Use XINCDIRS for extra include directories. These should be proceeded 
# with "-I" just as they would be when passing to the compiler.
#
# Added this so that correct headers for player get included
XINCDIRS += -I../../src/default
XINCDIRS += -I../../../../fileformats/mp4/parser/include/ -I../../../../fileformats/mp4/parser/config/opencore
XINCDIRS += -I ../../../common/include -I../../../../pvmi/pvmf/include
XINCDIRS += -I../../../../codecs_v2/utilities/m4v_config_parser/include
XINCDIRS += -I../../../../codecs_v2/audio/aac/dec/util/getactualaacconfig/include



# Use XLIBDIRS for extra library directories. These should be proceeded 
# with "-L" just as they would be when passing to the linker. 
# Used for building executables.
#
# XLIBDIRS += 

# Use XLDFLAGS for extra linker directives.
# Used for building executables.
#
# XLDFLAGS += 

SRCDIR = ../../src
INCSRCDIR = ../../include

# compose final src list for actual build
SRCS =	pvmf_mp4ffparser_node.cpp pvmf_mp4ffparser_factory.cpp pvmf_mp4ffparser_outport.cpp pvmf_mp4ffparser_node_metadata.cpp pvmf_mp4ffparser_node_cap_config.cpp

HDRS =  pvmf_mp4ffparser_factory.h \
	pvmf_mp4ffparser_events.h



DESTDIR = $(SDK_LOCAL)/installed_lib/$(BUILD_ARCH)
INCDESTDIR = $(SDK_LOCAL)/installed_include
include $(MK)/gnumake.template
