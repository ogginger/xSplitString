//xSplitString.h: Splits a string into substrings by space characters.

#pragma once
#include <vector>
#include <string>
#include "lib/nFindPositionOfNextSpace.h"
#include "lib/sMakeStringFromRemaining.h"

using namespace std;

vector<string> xSplitString( string sInput, vector<string> xArray ) {
	size_t nPositionOfNextSpace = nFindPositionOfNextSpace( sInput );
	string sRemainingString = "";

	if ( nPositionOfNextSpace != -1 ) {
	//if there is a next space character then...
		//Create a string from the given string after the first character.
		sRemainingString = sMakeStringFromRemaining( sInput, nPositionOfNextSpace + 1 );
		//Add the substring of the given string up to the first space character to the array.
		xArray.push_back(sInput.substr( 0, nPositionOfNextSpace ));
		//Continue splitting the string.
		return xSplitString( sRemainingString, xArray );
	} else {
	//otherwise there is not a next space character so...
		//Add the whole string to the array.
		xArray.push_back( sInput );
		return xArray;
	}
}

vector<string> xSplitString( string sInput ) {
	vector<string> xArray;
	size_t nPositionOfNextSpace = nFindPositionOfNextSpace( sInput );
	string sRemainingString = "";

	if ( nPositionOfNextSpace != -1 ) {
	//if there is a next space character then...
		//Create a string from the given string after the first space character.
		sRemainingString = sMakeStringFromRemaining( sInput, nPositionOfNextSpace + 1 );
		//Add the substring of the given string up to the first space character to the array.
		xArray.push_back(sInput.substr( 0, nPositionOfNextSpace ));
		//Continue splitting the string.
		return xSplitString( sRemainingString, xArray );

	} else {
	//otherwise there is not a next space character so...
		//Add the whole string to the array.
		xArray.push_back( sInput );
		return xArray;
	}
}
