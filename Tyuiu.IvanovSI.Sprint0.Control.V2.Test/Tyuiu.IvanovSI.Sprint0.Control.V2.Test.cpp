#include "pch.h"
#include "CppUnitTest.h"
#include "../Tyuiu.IvanovSI.Sprint0.Control.V2.Lib/Tyuiu.IvanovSI.Sprint0.Control.V2.Lib.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TyuiuIvanovSISprint0ControlV2Test
{
	TEST_CLASS(TyuiuIvanovSISprint0ControlV2Test)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			ISprint0Task8V2* date = new Service1();
			int a = 0;
			int b = 2;
			int c = 3;
			int B;
			

			B = date->Rezultat(a,b,c);
			Assert::AreEqual(0, a);
		}
	};
}
