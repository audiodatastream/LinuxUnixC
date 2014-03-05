FLUIDDIR=src/fluid
SRCDIR=src
BINDIR=$(SRCDIR)/bin
CMDLINEDIR=$(SRCDIR)/cmdline

all: fluid cmdline 

clean:
	cd $(CMDLINEDIR) &&  make clean 
	rm -f $(FLUIDDIR)/*.cxx
	rm -f $(FLUIDDIR)/*.h

cmdline:
	cd $(CMDLINEDIR) ; make


fluid:
	cd $(FLUIDDIR) && fluid -c *.fl	
