#include "stdafx.h"
#include "CppUnitTest.h"
#include "TextBuddy.h"
#include <fstream>
#include <string>

using namespace Microsoft::VisualStudio::CppUnitTestFramework;
using namespace std;

namespace UnitTest1
{		
	TEST_CLASS(commandSort)
	{
	public:
		
		TEST_METHOD(testCommandSort)
		{ 
			//test case 1
			string fileName = "testSort";
			string test1 = "apple";
			string test2 = "pear";
			string test3 = "bear";
			string test4 = "forest";
			TextBuddy testTextBuddy(fileName);

			testTextBuddy.commandAdd(test1);
			testTextBuddy.commandAdd(test2);
			testTextBuddy.commandAdd(test3);
			testTextBuddy.commandAdd(test4);
			testTextBuddy.commandSort();
			
			ostringstream oss;
			for(int size=0; size<4; size++){ //4 items
				oss << testTextBuddy._descriptionStorage[size];
			}
			string expected = oss.str();

			ostringstream oss1;
			oss1 << test1;
			oss1 << test3;
			oss1 << test4;
			oss1 << test2;
			string actual = oss1.str();

			Assert::AreEqual(expected, actual); //compares two strings
			
			//test case 2
			string fileName1 = "test";
			string test5 = "2 apples";
			string test6 = "1 pear";
			TextBuddy testTextBuddy1(fileName1);

			testTextBuddy.commandAdd(test5);
			testTextBuddy.commandAdd(test6);
			testTextBuddy.commandSort();
			
			ostringstream oss2;
			for (int size=0; size<2; size++){ //2 items
				oss2 << testTextBuddy._descriptionStorage[size];
			}
			string actual2 = oss2.str();

			ostringstream oss3;
			oss3 << test6;
			oss3 << test5;
			string expected2 = oss3.str();

			Assert::AreEqual(expected2, actual2); //compares two strings
			
		}
	};
}