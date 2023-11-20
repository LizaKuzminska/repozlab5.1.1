#include "pch.h"
#include "CppUnitTest.h"
#include <cmath>
#include "../lab5_1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double z;
			z = f(0, 3, 1);
			Assert::AreEqual(z, 4.0);
		}
	};
}
