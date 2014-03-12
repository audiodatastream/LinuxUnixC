/*
    This file is part of AudioDataStream

    AudioDataStream is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AudioDataStream is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with AudioDataStream.  If not, see <http://www.gnu.org/licenses/>.

*/

// Copyright 2014
// Contributors:
// John Phelps (kl4yfd@gmail.com)



/// parseamp.cxx ///

// This file implements the commandline utility 'parseamp' which
// converts files into AMP data or AMP data into files by
// using the Amateur Multicast Protocol.

/// Modes of Operation
	// 1 : Decode
	// Can read text from file(s) or from stdin
	// Always outputs files (cannot put to stdout)
	
	// 2 : Encode
	// Can read files(s)
	// Can output to stdout or to a text-file 


/* START PSEUDOCODE


#define READFIFO "/tmp/parseamp.readfifo"
#define WRITEFIFO "/tmp/parseamp.writefifo"

#define SLEEPTIME 50 // time between checks in milliseconds
#define CHUNKSIZE 400 // number of characters to read from the FIFO at one time
	
int init()
{
	/// Create FIFO READFIFO & set permissions
	/// Open end of FIFO as ReadOnly	
	
	/// Create FIFO WRITEFIFO & set permissions
	/// Open end of FIFO as WriteOnly
	
	/// Open TCP port for reading 
	/// Open UDP port for reading
}

int run(string)
{
	/// Decode the data-stream using the AMP protocol
	
	/// if all data-blocks of a file are received: 
			///write file ot hard drive
			///pass filename to WRITEFIFO
			///erase/clear received data-blocks for this file
		
}

string check_forinput()
{
	/// Read READFIFO until empty or CHUNKSIZE reached
	/// Read TCP port until empty or CHUNKSIZE reached
	/// Read UDP port until empty or CHUNKSIZE reached

	/// Copy this data to a string
	/// 
	/// return string
}


int main(void)
{
	bool BREAKCONDITION = false;

	init();
	
	while (!BREAKCONDITION) {
	
		run( check_forinput() );
			
		BREAKCONDITION = check_break();
		sleep(SLEEPTIME);
	}


	return 0;
}

END PSEUDOCODE
*/ 


int main(void)
{

	return 0;
}
