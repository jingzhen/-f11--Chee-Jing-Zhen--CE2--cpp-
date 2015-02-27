//Name: Chee Jing Zhen
//Matric No.: A0116027R
//CE2

#include <iostream>
#include <string>
#include <fstream>
#include <vector>

using namespace std;

//bool readingFile (string inputFile, vector<string> storageVector);

int main(int argc, char* argv[])
{
	string fileName = argv[1];
	string command;
	string newDescription;
	int n;
	
	/*do {
		cout << "command: ";
		cin >> command;

		if (command == "add"){
			readingFile (fileName, descriptionStorage);

			ofstream writeFile (fileName);
			getchar();
			getline (cin, newDescription);
			descriptionStorage.push_back(newDescription);

			for (int i=0; i<(int)descriptionStorage.size(); i++){
			writeFile << descriptionStorage[i] << endl;
			}
			writeFile.close();

			cout << "added to " << fileName << ": \"" << newDescription << "\"" << endl;
		}
		else if (command == "display"){
			for (int i=0; i<(int)descriptionStorage.size(); i++){
				cout << i+1 << ". " << descriptionStorage[i] << endl;
			}
		}
		else if (command == "delete"){
			readingFile (fileName, descriptionStorage);

			cin >> n;
			if (n <= (int)descriptionStorage.size()){
				cout << "deleted from " << fileName << ": \"" << descriptionStorage[n-1] << "\"" << endl;
				descriptionStorage.erase(descriptionStorage.begin()+n-1);

				ofstream writeFile (fileName);
				for (int i=0; i<(int)descriptionStorage.size(); i++){
				writeFile << descriptionStorage[i] << endl;
				}
				writeFile.close();
			} else
			{
				cout << "Error: No such item." << endl;
			}
		}
		else if (command == "clear"){
			descriptionStorage.clear();

			ofstream writeFile (fileName);
			for (int i=0; i<(int)descriptionStorage.size(); i++){
			writeFile << descriptionStorage[i] << endl;
			}
			writeFile.close();

			cout << "all content deleted from " << fileName << endl;
		}
		else if (command == "exit"){
		}
		else{
			cout << "Invalid command." << endl;
		}
} while (command != "exit");
*/
	return 0;
}

/*bool readingFile (string inputFile, vector<string> storageVector){
	ifstream readFile (inputFile);
	string description;

	while (getline(readFile, description)){
		storageVector.push_back(description);
	}
		readFile.close();
		return true;
}
*/