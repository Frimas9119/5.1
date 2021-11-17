#include "pch.h"
#include "CppUnitTest.h"
#include "D:/Проекти С++/5.1/5.1.sln"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int t;
			t = g(a, b);
			Assert::AreEqual(t, 5);
		}
	};
}
