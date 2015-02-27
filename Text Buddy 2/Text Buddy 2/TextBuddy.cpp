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

	void TextBuddy::commandAdd(string){}
	void TextBuddy::commandDisplay(){}
	void TextBuddy::commandDelete(){}
	void TextBuddy::commandClear(){}
	void TextBuddy::commandExit(){}