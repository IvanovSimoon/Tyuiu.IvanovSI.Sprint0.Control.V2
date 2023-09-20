#include "pch.h"
#include "CppUnitTest.h"
#include "../Tyuiu.IvanovSI.Sprint0.Control.V2T2.Lib/Tyuiu.IvanovSI.Sprint0.Control.V2T2.Lib.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TyuiuIvanovSISprint0ControlV2T2Test
{
	TEST_CLASS(TyuiuIvanovSISprint0ControlV2T2Test)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			ISprint0Task8V2* date = new Service1();
			int x = 1;
			int y = 2;
			int z = 3;
			int rez = (x+y-z)/x*x+2;


			rez = date->Rezultat(x, y, z);
			Assert::AreEqual(0, rez);
		}
	};
}
