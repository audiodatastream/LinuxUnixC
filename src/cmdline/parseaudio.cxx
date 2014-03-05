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



/// parseaudio.cxx ///

// This file implements the commandline utility 'parseaudio' which
// decodes recieved audio into an ASCII/UTF8 data stream 

/// Modes of Operation
	// 1 : Decode realtime
	// Reads sound samples from soundcard
	// Decodes audio-modem data into a data text-stream
	// Can be sent to stdout and/or saved to a file 
	// Also shared over TCP/IP (more than 1 connection possible)

	// 2 : Decode highspeed
	// Reads sound samples from an audio file, no soundcard connection.
	// Decodes file at the fastest speed possible, instead of realtime.
	// Features otherwise identical to mode 1

int main(void)
{

	return 0;
}
