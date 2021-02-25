#include "ShutdownHandler.h"
#include <Windows.h>
#include <stdlib.h>
#include <iostream>
#include <string>
#include "Utils.cpp"

using namespace std;

class ShutdownHandler {
public:
	int shutdown(string msg) {
		Utils utils;
		system("color 04");
		utils.sendMessage("Internal Error. Computer shutting down: (" + msg + ")");
		system("shutdown -s -t");

		return 0;
	}
};