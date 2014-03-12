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



/// parsearchive.cxx ///

// This file implements the commandline utility 'parsearchive' which
// decompresses and unarchives recieved files or 
// compresses and archives directories 


/// Modes of Operation
	// 1 : Decode
	// Can read from file(s) or from stdin
	// Always outputs file + directory structure (cannot put to stdout)
	
	// 2 : Encode
	// Can read files and/or directories
	// Can output to stdout and/or to a file 


/* START PSEUDOCODE

#define READFIFO "/tmp/parsearchive.readfifo"
#define WRITEFIFO "/tmp/parsearchive.writefifo"

#define SLEEPTIME 500 // time between checks in milliseconds
	
int init()
{
	/// Create FIFO READFIFO & set permissions
	/// Open end of FIFO as ReadOnly	
	
	/// Create FIFO WRITEFIFO & set permissions
	/// Open end of FIFO as WriteOnly

}

int run(string)
{
	/// Ensure file exists
	/// Check filetype
	/// if available: Run additional hash/checksum checks
	/// Trial decompress to temporary directory
	/// doublecheck_directorystructure(temporary directory)
	/// if directorystructure check passes: copy to DATA directory
	/// if all successful: pass filename to WRITEFIFO
}

string check_forinput()
{
	/// Read READFIFO until a newline character
	/// Copy this data to a string (the full path to a file)
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
