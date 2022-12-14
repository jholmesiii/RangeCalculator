#include <iostream>
#include <cmath>
using namespace std;

double Range(double angledeg, double vel)
{
	double grav = 9.8;
	double pi = 3.1415926;
	double anglerad = angledeg * (pi / 180.0);
	double range = (sin(2.0 * anglerad) * (pow(vel, 2.0))) / grav;

	return range;
}