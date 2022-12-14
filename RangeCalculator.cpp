// RangeCalculator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include "Range.h"
using namespace std;

int main()
{
	double range, angledeg, vel;

	cout << "What is the angle, in degrees, that the projectile was shot at?" << endl;
	cin >> angledeg;
	cout << endl;
	cout << "What is the initial velocity of the projectile, in meters per second?" << endl;
	cin >> vel;
	cout << endl;

	range = Range(angledeg, vel);

	cout << "Takeoff Angle:		" << angledeg << " degrees" << endl;
	cout << "Initial Velocity:	" << vel << " meters/second" << endl;
	cout << "Projectile Range:	" << range << "m" << endl;

	system("pause");
	return 0;
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
