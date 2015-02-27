//Name: Chee Jing Zhen
//Matric No.: A0116027R
//CE2

#ifndef TEXTBUDDY_H
#define TEXTBUDDY_H

#include <string>
#include <vector>

using namespace std;

class TextBuddy {
private:
	string _fileName;
	vector<string> _descriptionStorage;

public:
	TextBuddy(string);
	void displayMessage();
	void commandAdd(string);
	void commandDisplay();
	void commandDelete();
	void commandClear();
	void commandExit();


	

};

#endif