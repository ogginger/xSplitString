//nFindPositionOfNextSpace.h: Returns the interger position of the first space in a string.

#pragma once
#include <string>

using namespace std;

size_t nFindPositionOfNextSpace( string sInput ) {
	return sInput.find_first_of(" "); 
}
