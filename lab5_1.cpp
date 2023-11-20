// lab5_1.cpp 
// Кузьмінська Єлизавета
// Функції, що містять арифметичний вираз
// Лабораторна робота № 5.1
// Варіант 10


#include <iostream>
#include <cmath>
using namespace std;
double f(const double a, const double b, const double y); // прототип
int main()
{
	double t, s;
	cout << "t = "; cin >> t;
	cout << "s = "; cin >> s;

	double c = (f(t, s, 2) + f(1, s + t, t - s)) / (1 + f(1, 1, t * t + s * s) * f(1, 1, t * t + s * s));

	cout << "c = " << c << endl;
	return 0;
}
double f(const double a, const double b, const double c) // визначення
{
	return (a + b + c) / (sin(a * b) * sin(a * b) + c * c);
}