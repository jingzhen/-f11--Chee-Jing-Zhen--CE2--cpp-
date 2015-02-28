//Name: Chee Jing Zhen
//Matric No.: A0116027R
//CE2

/*assumptions: filename will be input by user in command window
 command input will be in small letters
 command will end with exit*/

#include "TextBuddy.h"
#include <iostream>
#include <string>
#include <fstream>
#include <vector>

using namespace std;

bool readingFile(string fileName, vector<string> storageVector);
bool writingFile(string fileName, vector<string> storageVector);

int main(int argc, char* argv[])
{
	string fileName = argv[1];
	TextBuddy textBuddy(fileName);
	string command;
	const string displayInsertCommand = "command: ";
	const string displayInvalidCommand = "Invalid command.";
	int commandNumber = 10; //initialise commandNumber to enter do while loop
	int exitNumber = 4;
	string newDesc;
	string search;

	textBuddy.displayMessage();

	do{
		cout << displayInsertCommand;
		cin >> command;
		commandNumber = textBuddy.commandType(command);

		switch(commandNumber){
		case 0: //add
			getchar();
			getline (cin, newDesc);
			readingFile(fileName, textBuddy._descriptionStorage);
			textBuddy.commandAdd(newDesc);
			writingFile(fileName, textBuddy._descriptionStorage);
			break;

		case 1: //display
			readingFile(fileName, textBuddy._descriptionStorage);
			textBuddy.commandDisplay(textBuddy._descriptionStorage);
			writingFile(fileName, textBuddy._descriptionStorage);
			break;

		case 2: //delete
			int deleteSent;
			cin >> deleteSent;
			readingFile(fileName, textBuddy._descriptionStorage);
			textBuddy.commandDelete(deleteSent);
			writingFile(fileName, textBuddy._descriptionStorage);
			break;

		case 3: //clear
			readingFile(fileName, textBuddy._descriptionStorage);
			textBuddy.commandClear();
			writingFile(fileName, textBuddy._descriptionStorage);
			break;

		case 4: //exit
			textBuddy.commandExit();
			break;

		case 5: //sort
			readingFile(fileName, textBuddy._descriptionStorage);
			textBuddy.commandSort();
			writingFile(fileName, textBuddy._descriptionStorage);
			break;

		case 6: //search
			getline(cin, search);
			readingFile(fileName, textBuddy._descriptionStorage);
			textBuddy.commandSearch(search);
			writingFile(fileName, textBuddy._descriptionStorage);
			break;

		default: //all other commands
			cout << displayInvalidCommand << endl;
		}

	} while(commandNumber != exitNumber);

	return 0;
}

bool readingFile(string fileName, vector<string> storageVector){
	ifstream readFile(fileName);
	string description;
	while ((!storageVector.empty()) && (getline(readFile, description))){
		storageVector.push_back(description);
	}
	readFile.close();
	return true;
}

bool writingFile(string fileName, vector<string> storageVector){
	ofstream writeFile (fileName);
	for (int countSentence=0; countSentence<(int)storageVector.size(); countSentence++){
		writeFile << storageVector[countSentence] << endl;
	}
	writeFile.close();
	storageVector.clear();
	return true;
}