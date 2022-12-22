#include "pch.h"
#include "CppUnitTest.h"
#include "../lab_8.1iter/lab_08.1iter.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest81iter
{
	TEST_CLASS(UnitTest81iter)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			char cs[] = "+-=";
			int m = Count(cs);
			Assert::AreEqual(m, 2);
		}
	};
}
