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
const string cleared = "deleted from ";
const string error = "Error: No such item.";
const string deleted = "all content deleted from ";


TextBuddy::TextBuddy(string fileName){
	_fileName = fileName;
}

void TextBuddy::displayMessage(){
	cout << welcome << _fileName << ready << endl;
}

void TextBuddy::commandAdd(){
	string newDescription;
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

void TextBuddy::commandDelete(){
	int deleteSentence;
	cin >> deleteSentence;
	if (deleteSentence <= (int)_descriptionStorage.size()){
		cout << cleared << _fileName << punctuation1 << _descriptionStorage[deleteSentence-1] << punctuation2 << endl;
		_descriptionStorage.erase(_descriptionStorage.begin()+deleteSentence-1);
	} else
	{
		cout << error << endl;
	}
}

void TextBuddy::commandClear(){
	_descriptionStorage.clear();
	cout << deleted << _fileName << endl;
}

void TextBuddy::commandExit(){
}