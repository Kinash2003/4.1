#include "pch.h"
#include "CppUnitTest.h"
#include "../4.1/Mammals.h"
#include "../4.1/Mammals.cpp"
#include "../4.1/people.h"
#include "../4.1/people.cpp"
#include <time.h>
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest41
{
	TEST_CLASS(UnitTest41)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			people A;
			srand(unsigned(time(NULL)));
			double a = A.Years();
			Assert::AreEqual(a, A.Years());
			

		}
	};
}
