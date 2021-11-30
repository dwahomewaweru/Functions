// Functions.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Functions Class Exercise

#include <iostream>
using namespace std;

double division(double a, double b) {
	return a / b;
}
double division(double, double);

int main()
{
	double x, y;
	int q;
	cout << "Please enter the first number :";
	cin >> x; cout << "\n";
	cout << "Please enter the second number :";
	cin >> y; cout << "\n\n";
	q = division(x, y);
	cout << x << " divided by " << y << " = " << q << endl;
	return 0;
}