//Name: Chee Jing Zhen
//Matric No.: A0116027R
//CE2

#include "TextBuddy.h"
#include <iostream>
#include <vector>
#include <string>

using namespace std;

TextBuddy::TextBuddy(string fileName){
	_fileName = fileName;
}

void TextBuddy::displayMessage(){
	cout << "Welcome to TextBuddy. " << _fileName << " is ready for use" << endl;
}

void TextBuddy::commandAdd(string newDescription){
	getchar();
	getline (cin, newDescription);
	_descriptionStorage.push_back(newDescription);
	cout << "added to " << _fileName << ": \"" << newDescription << "\"" << endl;
}
void TextBuddy::commandDisplay(){}
void TextBuddy::commandDelete(){}
void TextBuddy::commandClear(){}
void TextBuddy::commandExit(){}