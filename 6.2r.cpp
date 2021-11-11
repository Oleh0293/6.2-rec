#include "pch.h"
#include "CppUnitTest.h"
#include "../6.2/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest62rec
{
	TEST_CLASS(UnitTest62rec)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			int n = 1;
			int i = 5;
			int t = n - 1 - i;
			Assert::AreEqual(-5, t);

		}
	};
}

