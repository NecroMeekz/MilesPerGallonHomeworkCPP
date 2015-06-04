// MilesPerGallonHomeworkCPP.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
	double Principal, //The balance in the savings account
		Rate, //The interest rate
		T, //The number of times interest is compounded
		//in a year
		Interest,
		Amount; //Amount of money in savings account

	cout << setprecision(2) << fixed;
	cout << "What is the principal, interest rate and number of times\n";
	cout << "interest is compounded?" << endl;
	cout << "Principal: $";
	cin >> Principal;
	cout << "Interest Rate: ";
	cin >> Rate;
	cout << "Number of times interest is compounded? ";
	cin >> T;

	Amount = Principal * pow((1 + (Rate / T)), T);

	cout << "Amount in Savings: $" << Amount << endl;
	system("pause");
	return 0;
}