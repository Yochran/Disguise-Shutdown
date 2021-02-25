#include "Utils.h"
#include <iostream>
#include <stdlib.h>
#include <string>

using namespace std;

class Util {
public:
	void startup() {
		system("color 0f");
		system("title Software Installation");
		sendMessage("idk what this is i just wanted to kill some time in between classes.");
	}

	void sendMessage(string message) {
		cout << message << endl;
	}

	string input(string output) {
		cin >> output;

		return output;
	}

	int shutdown(string msg) {
		system("color 04");
		sendMessage("Internal Error. Computer shutting down: (" + msg + ")");
		system("cd C:/Windows/System32/shutdown -s");

		return 0;
	}
};