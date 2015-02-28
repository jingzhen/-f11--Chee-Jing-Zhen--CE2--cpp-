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
			vector<string> searchVector = testTextBuddy.commandSearch(search);

			Assert::AreEqual(searchVector[0], test1); //compare whether first string in vector is string test1
			Assert::AreEqual(searchVector[1], test2); //compare whether second string in vector is string test2
			Assert::AreEqual(searchVector[2], test4); //compare whether third string in vector is string test4 as test3 does not contain string search

		}

	};
}