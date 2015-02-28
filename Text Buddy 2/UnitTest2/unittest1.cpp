#include "stdafx.h"
#include "CppUnitTest.h"
#include "TextBuddy.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest2
{		
	TEST_CLASS(commandSearch)
	{
	public:
		
		TEST_METHOD(testCommandSearch)
		{
			string fileName = "testSearch";
			string search = "friend";
			string test1 = "hello friend";
			string test2 = "she's my friend, jane";
			string test3 = "no one is here";
			string test4 = "my best friend";
			TextBuddy testTextBuddy(fileName);

			testTextBuddy.commandAdd(test1);
			testTextBuddy.commandAdd(test2);
			testTextBuddy.commandAdd(test3);
			testTextBuddy.commandAdd(test4);
			vector<string> searchStorageVector = testTextBuddy.commandSearch(search);

			Assert::AreEqual(searchStorageVector[0], test1); //compare whether first vector string is string test1
			Assert::AreEqual(searchStorageVector[2], test4); //compare whether third vector string is string test4 as test3 does not contain string search

		}

	};
}