SRCDIR=src
FLUIDDIR=$(SRCDIR)/fluid
BINDIR=$(SRCDIR)/bin
CMDLINEDIR=$(SRCDIR)/cmdline

RM=rm -fv

## FLTK Setup:
# Choose the best compiler for FLTK
CC=$(shell fltk-config --cc)
CXX=$(shell fltk-config --cxx)
# Set the flags for compiler
CFLAGS   = $(shell fltk-config --cflags)
CXXFLAGS = $(shell fltk-config --cxxflags)
# Set the libraries to link with
LINKFLTK = $(shell fltk-config --ldstaticflags)
LINKFLTK_GL = $(shell fltk-config --use-gl --ldstaticflags)
LINKFLTK_IMG = $(shell fltk-config --use-images --ldstaticflags)

PROGRAMNAME=audiodatastream


all: fluid cmdline main 


clean_cmdlinedir:
	cd $(CMDLINEDIR) && make clean 

clean_fluiddir:
	$(RM) $(FLUIDDIR)/*.cxx
	$(RM) $(FLUIDDIR)/*.h
	$(RM) $(FLUIDDIR)/*.o

clean_srcdir:
	cd $(SRCDIR) && $(RM) *.o
	$(RM) $(PROGRAMNAME)
	
clean_objects:
	$(RM) -R *.o

clean: clean_fluiddir clean_cmdlinedir clean_srcdir clean_objects

	
cmdline:
	cd $(CMDLINEDIR) && make


fluid:
	cd $(FLUIDDIR) && fluid -c *.fl	&& $(CXX) $(CXXFLAGS) -c *.cxx


main: fluid cmdline
	cd $(SRCDIR) && $(CXX) $(CXXFLAGS) -c main.cxx
	$(CXX) $(CXXFLAGS) $(SRCDIR)/main.o $(FLUIDDIR)/*.o  -o $(SRCDIR)/$(PROGRAMNAME) -lfltk
	chmod a+x $(SRCDIR)/$(PROGRAMNAME)


