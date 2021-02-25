#include <iostream>
#include <stdlib.h>
#include <string>
#include "Utils.cpp"

using namespace std;

Util util;

void main()
{
	util.startup();
	util.sendMessage("Enter a directory to download the software:");

	string dir;

	util.sendMessage("Downloading to: " + util.input(dir) + "...");
	
	// Shutdown
	util.shutdown("Converting code failed.");

	system("pause");
}
