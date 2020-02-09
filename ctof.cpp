// ctof.cpp
// Celsius to Fahrenheit

#include <iostream>
using namespace std;

int main()
{
	// declare and initialize variables
	double T_c = 0.0; // temperature (C)
	double T_f = 0.0; // temperature (F)

	cout << "Enter temperature in Celsius: ";
	cin >> T_c;
	T_f = (T_c * 1.8) + 32;
	cout << "Equivalent in Fahrenheit: " << T_f << endl;

	return 0;

}