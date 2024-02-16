/*This is a short basic showcase of basic C++ skills, with the creation of a Currency converter. This Currency converter converts any USD amount to either 
CAD, EUR or NGN(Nigerian Currency).
Author: Owen Imudia*/

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
	double USD; 
	double CAD;
	double EUR;
	double NGN;
	string currency;
	string name;


	cout << "Owen Currency Converter" << endl;

	cout << "What is your first name? " << endl;
	cin >> name;
	cout << "Welcome " << name << endl;

	cout << "Enter the currency you want to convert, UTC for USD to CAD, UTE for USD to EUR, UTN for USD to NGN" << endl;
	cin >> currency;

	cout << "Enter the amount in USD you want to convert" << endl;
	cin >> USD;

	CAD = USD * 1.3498;
	EUR = USD * 0.9280;
	NGN = USD * 1518.285;


	if (currency == "UTC") {
		cout << setprecision(4)<< "The amount will be "<<"$"<< CAD;
	}
	else if (currency == "UTE") {
		cout << setprecision(4) << "The amount will be "<< "€"<< EUR;
	}
	else if (currency == "UTN") {
		cout << setprecision(8) << "The amount will be "<< "#"<< NGN;
	}
	else {
		cout << "Check your currency input and try again";
	}
	
	return 0;

}
