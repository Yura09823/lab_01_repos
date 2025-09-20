#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double a;
	cout << "Enter an alpha: "; cin >> a;

	double  z1;
	z1 = (sin(2 * a) + sin(5 * a) - sin(3 * a)) / (cos(a) - cos(3 * a) + cos(5 * a));

	double z2;
	z2 = tan(3 * a);

	cout << "Z1 equals = " << z1 << endl;
	cout << "Z2 equals = "<< z2 << endl;

	return 0;
}
