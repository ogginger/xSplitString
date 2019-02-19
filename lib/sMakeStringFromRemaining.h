//sMakeStringFromRemaining.h: Create a substring of the rest of the string after the given position.

#pragma once
#include <string>

using namespace std;

string sMakeStringFromRemaining( string sInput, size_t nPosition ) {
	return sInput.substr( nPosition );
}
