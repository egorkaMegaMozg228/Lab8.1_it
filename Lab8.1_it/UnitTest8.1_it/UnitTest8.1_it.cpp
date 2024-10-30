
#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab8.1_it.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest81rec
{
	TEST_CLASS(UnitTest81rec)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			char* dest1 = new char[151];
			dest1[0] = ',';
			dest1[1] = '-';
			dest1[2] = '\0';

			char expectedCount = 1;

			char actualCount = Count(dest1);
			Assert::AreEqual(actualCount, expectedCount);
		}
	};
}