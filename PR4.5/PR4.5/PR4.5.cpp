﻿#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;
int main()
{
	double x, y;
	srand((unsigned)time(NULL));
	for (int i = 0; i < 10; i++)
	{
		cout << "x = "; cin >> x;
		cout << "y = "; cin >> y;
		if ((y <= x && y <= -pow(x, 2) + 2 && y >= 0) ||
			(y <= -pow(x, 2) + 2 && y <= 0 && y >= x))
			cout << "yes" << endl;
		else
			cout << "no" << endl;
	}
	cout << endl << fixed;
	for (int i = 0; i < 10; i++)
	{
		x = 6. * rand() / RAND_MAX - 3;
		y = 6. * rand() / RAND_MAX - 3;
		if ((y <= x && y <= -pow(x, 2) + 2 && y >= 0) ||
			(y <= -pow(x, 2) + 2 && y <= 0 && y >= x))
			cout << setw(8) << setprecision(4) << x << " "
			<< setw(8) << setprecision(4) << y << " " << "yes" << endl;
		else
			cout << setw(8) << setprecision(4) << x << " "
			<< setw(8) << setprecision(4) << y << " " << "no" << endl;
	}
	return 0;
}