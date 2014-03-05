SRCDIR=src
FLUIDDIR=$(SRCDIR)/fluid
BINDIR=$(SRCDIR)/bin
CMDLINEDIR=$(SRCDIR)/cmdline


all: fluid cmdline 


clean_cmdlinedir:
	cd $(CMDLINEDIR) && make clean 

clean_fluiddir:
	$(RM) $(FLUIDDIR)/*.cxx
	$(RM) $(FLUIDDIR)/*.h
	$(RM) $(FLUIDDIR)/*.o

clean_srcdir:
	cd $(SRCDIR) && $(RM) *.o

clean: clean_fluiddir clean_cmdlinedir clean_srcdir

	
cmdline:
	cd $(CMDLINEDIR) && make


fluid:
	cd $(FLUIDDIR) && fluid -c *.fl	&& $(CC) -c *.cxx

