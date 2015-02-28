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
const string deleted = "deleted from ";
const string error = "Error: No such item.";
const string cleared = "all content deleted from ";
const string sorted = "all content sorted in ";

class TextBuddy {
private:
	string _fileName;
	//vector<string> _descriptionStorage;

public:
	vector<string> _descriptionStorage;

	TextBuddy(string); //constructor
	void displayMessage(); //displays a welcome message
	bool readingFile(); //returns true if file is read successfully
	bool writingFile(); //returns true if file is written sucessfully
	void commandAdd(string); //add a sentence from the file
	void commandDisplay(); //display everything that is stored in the file
	void commandDelete(int); //delete a specific sentence from the file
	void commandClear(); //clear the file
	void commandExit(); //exit a file
	void commandSort();
};

#endif