
This directory contains commandline programs for
decoding an AudioDataStream broadcast using
Linux or Unix.

Each program implements one and only one OSI layer
of the overall protocol-stack.

Without any commandline options the utilities operate
so they can be chained together on the commandline.
Example Usage:

# parsearchive & parseamp & parseaudio &

This will execute all three programs simultaneously and 
connect the output of each into the next layer using named pipes 
Running these three programs as shown above fully implements
a complete networking stack for a receive-only data network.



The OSI networking layer model and where each program fits:
	1) soundcard (hardware)
	2) parseaudio
	3) N/A
	4) parseamp
	5) N/A
	6) parsearchive
	7) Operating System / Filesystem
