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
	_descriptionStorage.clear();
}

void TextBuddy::displayMessage(){
	cout << welcome << _fileName << ready << endl;
}

int TextBuddy::commandType(string command){
	enum commandTypes {Add, Display, Delete, Clear, Exit, Sort, Search
	};
	commandTypes commandEnum;

	if(command ==  "add"){
		commandEnum = Add;
	}
	else if(command == "display"){
		commandEnum = Display;
	}
	else if(command == "delete"){
		commandEnum = Delete;
	}
	else if(command == "clear"){
		commandEnum = Clear;
	}
	else if(command == "exit"){
		commandEnum = Exit;
	}
	else if(command == "sort"){
		commandEnum = Sort;
	}
	else if(command == "search"){
		commandEnum = Search;
	}
	return commandEnum;
}

void TextBuddy::commandAdd(string newDescription){
	_descriptionStorage.push_back(newDescription);
	cout << added << _fileName << punctuation1 << newDescription << punctuation2 << endl;
}

void TextBuddy::commandDisplay(vector<string> displayVector){
	for (int countSentence=0; countSentence<(int)displayVector.size(); countSentence++){
		cout << countSentence+1 << punctuation3 << displayVector[countSentence] << endl;
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
	exit(0);
	return;
}

void TextBuddy::commandSort(){
	vector<string> sortVector;
	vector<string> tempVector;
	int size = _descriptionStorage.size();
	size_t start = 0, end = 0;
	string firstWord;

	for (int countSentence=0; countSentence<size; countSentence++){
		end = _descriptionStorage[countSentence].find_first_of(".,!? ");
		if (end != string::npos){
			firstWord = _descriptionStorage[countSentence].substr(start, end-start);
		}
		else{
			firstWord = _descriptionStorage[countSentence];
		}
		sortVector.push_back(firstWord);
	}

	sort(sortVector.begin(), sortVector.end()); //sort according to first word

	for (int countSentence=0; countSentence<size; countSentence++){
	for (int countWord=0; countWord<size; countWord++){
		size_t found = _descriptionStorage[countSentence].find(sortVector[countWord]);
		if(found = 0){
		tempVector.push_back(_descriptionStorage[countSentence]);
		}
	}
	}

	for (int countTemp = 0; countTemp<size; countTemp++){
		_descriptionStorage.push_back(tempVector[countTemp]);
	}

	cout << sorted << _fileName << endl;
}

vector<string> TextBuddy::commandSearch(string searchWord){
	vector<string> searchStorageVector;
	for(int countLine=0; countLine<(int)_descriptionStorage.size(); countLine++){
		string line = _descriptionStorage[countLine];
		size_t found = line.find(searchWord);
		if (found != string::npos){
			searchStorageVector.push_back(_descriptionStorage[countLine]);
		}
	}
	commandDisplay(searchStorageVector);
	return searchStorageVector;
}
