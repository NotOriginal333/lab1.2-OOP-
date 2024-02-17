#include "pch.h"
#include "CppUnitTest.h"
#include "../lab1.2/Vektor.h"
#include "../lab1.2/Vektor.cpp"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestInits)
		{
			Vektor vec;
			vec.Init();
			float test = vec.getValue(0);
			Assert::AreEqual(0.0f, test);

			Vektor vec1;
			vec1.Init(3);
			float test11 = vec1.getValue(0);
			float test12 = vec1.getValue(1);
			float test13 = vec1.getValue(2);
			Assert::AreEqual(0.0f, test11);
			Assert::AreEqual(1.0f, test12);
			Assert::AreEqual(2.0f, test13);

			Vektor vec2;
			vec2.Init(3, 3.0f);
			float test21 = vec2.getValue(0);
			float test22 = vec2.getValue(1);
			float test23 = vec2.getValue(2);
			Assert::AreEqual(3.0f, test21);
			Assert::AreEqual(3.0f, test22);
			Assert::AreEqual(3.0f, test23);
		}
		TEST_METHOD(TestMaxMin) {
			Vektor vec;
			vec.setPointer();

		}
	};
}
