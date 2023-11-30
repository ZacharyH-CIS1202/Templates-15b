#include <iostream>
#include <iomanip>
#include <cmath>
#include "Template(15b).h"
using namespace std;

int main()
{
	double a = 7.0;
	float b = 5.0f;
	int c = 17;

	cout << setprecision(2);
	cout << half(a) << endl;
	cout << half(b) << endl;
	cout << half(c) << endl;

	system("pause");

	return 0;
}