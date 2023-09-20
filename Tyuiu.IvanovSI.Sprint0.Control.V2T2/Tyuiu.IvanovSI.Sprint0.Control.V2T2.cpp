// Tyuiu.IvanovSI.Sprint0.Control.V2T2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "math.h"
#include "../Tyuiu.IvanovSI.Sprint0.Control.V2.Lib/Tyuiu.IvanovSI.Sprint0.Control.V2.Lib.cpp"
using namespace std;
int main()
{
	setlocale(LC_ALL, "Rus");
	int x, y, z;
	cout << "Введите значения аргументов\n";
	cout << "x = ";
	cin >> x;
	cout << "z = ";
	cin >> z;
	cout << "y = ";
	cin >> y;
	int rez = (x+y-z)/(x*x+2);
	cout << "Результат = " << rez << endl;
}
// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
