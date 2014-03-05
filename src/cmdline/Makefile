BINDIR=../bin

all: cmdline 

clean:
	if [ -d $(BINDIR) ];then \
	cd $(BINDIR) && \
	$(RM) parseaudio ; \
	$(RM) parseamp ; \
	$(RM) parsearchive ; \
	cd .. ; \
	rmdir bin ; \
	fi

cmdline:
	if [ ! -d $(BINDIR) ];then mkdir $(BINDIR); fi
	$(CC) parseaudio.cxx -o $(BINDIR)/parseaudio
	$(CC) parseamp.cxx -o $(BINDIR)/parseamp
	$(CC) parsearchive.cxx -o $(BINDIR)/parsearchive
	chmod a+x $(BINDIR)/parseaudio 
	chmod a+x $(BINDIR)/parseamp
	chmod a+x $(BINDIR)/parsearchive
