//Name: Chee Jing Zhen
//Matric No.: A0116027R
//CE2

#ifndef TEXTBUDDY_H
#define TEXTBUDDY_H

#include <string>
#include <vector>

using namespace std;

const string welcome = "Welcome to TextBuddy. ";
const string ready = " is ready for use";
const string added = "added to ";
const string punctuation1 = ": \"";
const string punctuation2 = "\"";
const string punctuation3 = ". ";
const string cleared = "deleted from ";
const string error = "Error: No such item.";
const string deleted = "all content deleted from ";

class TextBuddy {
private:
	string _fileName;
	vector<string> _descriptionStorage;

public:
	TextBuddy(string);
	void displayMessage();
	bool readingFile(string, vector<string>);
	void commandAdd();
	void commandDisplay();
	void commandDelete();
	void commandClear();
	void commandExit();


	

};

#endif