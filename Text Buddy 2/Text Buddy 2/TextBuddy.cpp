//Name: Chee Jing Zhen
//Matric No.: A0116027R
//CE2

#include "TextBuddy.h"
#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <algorithm>

using namespace std;

TextBuddy::TextBuddy(string fileName){
	_fileName = fileName;
}

void TextBuddy::displayMessage(){
	cout << welcome << _fileName << ready << endl;
}

bool TextBuddy::readingFile(){
	ifstream readFile(_fileName);
	string description;
	while (getline(readFile, description)){
		_descriptionStorage.push_back(description);
	}
	readFile.close();
	return true;
}

bool TextBuddy::writingFile(){
	ofstream writeFile (_fileName);
	for (int countSentence=0; countSentence<(int)_descriptionStorage.size(); countSentence++){
		writeFile << _descriptionStorage[countSentence] << endl;
	}
	writeFile.close();
	return true;
}

void TextBuddy::commandAdd(string newDescription){
	_descriptionStorage.push_back(newDescription);
	cout << added << _fileName << punctuation1 << newDescription << punctuation2 << endl;
}

void TextBuddy::commandDisplay(){
	for (int countSentence=0; countSentence<(int)_descriptionStorage.size(); countSentence++){
		cout << countSentence+1 << punctuation3 << _descriptionStorage[countSentence] << endl;
	}
}

void TextBuddy::commandDelete(int deleteSentence){
	if (deleteSentence <= (int)_descriptionStorage.size()){
		cout << deleted << _fileName << punctuation1 << _descriptionStorage[deleteSentence-1] << punctuation2 << endl;
		_descriptionStorage.erase(_descriptionStorage.begin()+deleteSentence-1);
	} 
	else{
		cout << error << endl;
	}
}

void TextBuddy::commandClear(){
	_descriptionStorage.clear();
	cout << cleared << _fileName << endl;
}

void TextBuddy::commandExit(){
}

void TextBuddy::commandSort(){
	sort(_descriptionStorage.begin(), _descriptionStorage.end());
	cout << sorted << _fileName << endl;
}