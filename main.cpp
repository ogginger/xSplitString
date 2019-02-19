//main.cpp: Entrypoint for the sParseString function.

#include "xSplitString.h"
#include "lib/nFindPositionOfNextSpace.h"
#include "lib/sMakeStringFromRemaining.h"
#include <string>
#include <iostream>
#include <vector>

using namespace std;

int main() {
	vector<string> xResult = xSplitString("This is a string.");
	cout << xResult.size() << endl;
	cout << xResult.at(0) << endl;
	cout << xResult.at(1) << endl;
	cout << xResult.at(2) << endl;
	cout << xResult.at(3) << endl;
	
	return 0;
}
