//Name: Chee Jing Zhen
//Matric No.: A0116027R
//CE2

#include "TextBuddy.h"
#include <iostream>
#include <vector>
#include <string>

using namespace std;

const string welcome = "Welcome to TextBuddy. ";
const string ready = " is ready for use";
const string added = "added to ";
const string punctuation1 = ": \"";
const string punctuation2 = "\"";
const string punctuation3 = ". ";


TextBuddy::TextBuddy(string fileName){
	_fileName = fileName;
}

void TextBuddy::displayMessage(){
	cout << welcome << _fileName << ready << endl;
}

void TextBuddy::commandAdd(string newDescription){
	getchar();
	getline (cin, newDescription);
	_descriptionStorage.push_back(newDescription);
	cout << added << _fileName << punctuation1 << newDescription << punctuation2 << endl;
}

void TextBuddy::commandDisplay(){
	for (int countSentence=0; countSentence<(int)_descriptionStorage.size(); countSentence++){
		cout << countSentence+1 << punctuation3 << _descriptionStorage[countSentence] << endl;
	}
}

void TextBuddy::commandDelete(){}
void TextBuddy::commandClear(){}
void TextBuddy::commandExit(){}