//Name: Chee Jing Zhen
//Matric No.: A0116027R
//CE2

//assumptions: filename will be input by user in command window

#include "TextBuddy.h"
#include <iostream>
#include <string>
#include <fstream>
#include <vector>

using namespace std;

int main(int argc, char* argv[])
{
	string fileName = argv[1];
	TextBuddy textBuddy(fileName);
	string commandType;
	const string command = "command: ";
	const string commandTypeAdd = "add";
	const string commandTypeDisplay = "display";
	const string commandTypeDelete = "delete";
	const string commandTypeClear = "clear";
	const string commandTypeExit = "exit";
	const string invalid = "Invalid command.";

	textBuddy.displayMessage();

	cout << command;
	cin >> commandType;
	
	do{
		if(command == commandTypeAdd){
			string newDesc;
			getchar();
			getline (cin, newDesc);
			textBuddy.readingFile();
			textBuddy.commandAdd(newDesc);
			textBuddy.writingFile();
		}
		else if(command == commandTypeDisplay){
			textBuddy.commandDisplay();
		}
		else if(command == commandTypeDelete){
			int deleteSent;
			cin >> deleteSent;
			textBuddy.readingFile();
			textBuddy.commandDelete(deleteSent);
			textBuddy.writingFile();
		}
		else if(command == commandTypeClear){
			textBuddy.readingFile();
			textBuddy.commandClear();
			textBuddy.writingFile();
		}
		else if(command == commandTypeExit){
			textBuddy.commandExit();
		}
		else{
			cout << invalid << endl;
		}
	} while(command != commandTypeExit);

	return 0;
}