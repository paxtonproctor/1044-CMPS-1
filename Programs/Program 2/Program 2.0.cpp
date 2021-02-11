// Paxton Proctor
// Computer Science 1 - Dr.Halverson
// Program 2 - Money Program
// 2/18/2020
// program that produces a dollar (one-dollar bill only) and 
// coin breakdown for an amount of money.  

#include<iostream>
#include<iomanip>
#include<fstream>


using namespace std;

int main()
{
	int count;

	ofstream outfile("output.txt");
	
	// Declaration of variables for banking change
	int dollBill, halfDoll, Quart, Dimes, Nick, Penn, Remainder;
	double totMoney;

	count = 1;

	// Formatting for 2 decimals on screen and in file for measurement.
	cout << fixed << setprecision(2) << "Student: Paxton Proctor \n\n";
	outfile << fixed << setprecision(2) << "Student: Paxton Proctor \n\n";

	// loops 11 times for Changing Money.
	while (count <= 11)
	{
		// Ask user how much change.
		cout << "How much change do you want? \n";
		cin >> totMoney;

		// Calculate total change.
		dollBill = totMoney;
		Remainder = (totMoney - dollBill) * 100 + 0.5;
		halfDoll = Remainder / 50;
		Remainder %= 50;
		Quart = Remainder / 25;
		Remainder %= 25;
		Dimes = Remainder / 10;
		Remainder %= 10;
		Nick = Remainder / 5;
		Remainder %= 5;

		Penn = Remainder;

		// Prints total change for Money inputted.
		cout << "Total amount is $ " << totMoney << '\n';
		outfile << "Total amount is $ " << totMoney << '\n';

		// Calc total number of Dollar Bills and Displays.
		cout << setw(7) << "Dollar Bills " << dollBill << '\n';
		outfile << left << setw(18) << "Dollar Bills" << right 
			<< setw(5) << dollBill << fixed << setprecision(2) << "\n";
		// Calc total number of Half Dollars and Displays.
		cout << setw(7) << "Half Dollars " << halfDoll << '\n';
		outfile << left << setw(18) << "Half Dollars" << right
			<< setw(5) << halfDoll << fixed << setprecision(2) << "\n";

		// Calc total number of Quarters and Displays.
		cout << setw(7) << "Quarters " << Quart << '\n';
		outfile << left << setw(18) << "Quarters" << right
			<< setw(5) << Quart << fixed << setprecision(2) << "\n";

		// Calc total number of Dimes and Displays.
		cout << setw(7) << "Dimes " << Dimes << '\n';
		outfile << left << setw(18) << "Dimes" << right
			<< setw(5) << Dimes << fixed << setprecision(2) << "\n";

		// Calc total number of Nickels and Displays.
		cout << setw(7) << "Nickels " << Nick << '\n';
		outfile << left << setw(18) << "Nickels" << right
			<< setw(5) << Nick << fixed << setprecision(2) << "\n";

		// Calc total number of Pennies and Displays.
		cout << setw(7) << "Pennies " << Penn << '\n';
		outfile << left << setw(18) << "Pennies" << right
			<< setw(5) << Penn << fixed << setprecision(2) << "\n\n\n";

		count = count + 1;
	}
	// End while number
	outfile.close();
	return 0;
}