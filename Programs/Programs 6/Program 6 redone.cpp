// Paxton Proctor
// Computer Science 1 - Dr.Halverson
// Program 6 - Bank check charges
// 4/7/2020
/*
Use SWITCH statements to read the data then compute and print the charges.
No IF/ELSE statements.
*/

#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int main()
{
	// Declare input file
	ifstream infile;
	infile.open("Data for Bank with switch.txt");

	// Declare output file
	ofstream outfile;
	outfile.open("output.txt");

	// Declaration of variables
	double Fee, Total;
	int Checks;
	char Type;

	// Prints out Table to outfile
	outfile << fixed << setprecision(2) << "Student: Paxton Proctor \n\n";
	outfile << "Account Type " << setw(10) << "Monthly " <<
		setw(9) << "Checks " << setw(12) << "Check Fee " <<
		setw(8) << "Total\n";
	outfile << "-----------------------------------------------------\n";

	// Start of while loop
	while (infile >> Type >> Checks)
	{

		// Start of Outer Switch
		switch (Type)
		{
			// Start of Inner Switch B
			case 'B': case 'b':
			{
				switch (Checks / 10)
				{
					case 0: case 1: Fee = Checks * 0.10; Total = 25 + Fee;
						break;
					case 2: case 3: Fee = Checks * 0.08; Total = 25 + Fee;
						break;
					case 4: case 5: Fee = Checks * 0.06; Total = 25 + Fee;
						break;
					default: Fee = Checks * 0.04; Total = 25 + Fee;
				}
			}
			// End of Inner Switch B

		// Prints numbers of Business
		outfile << "Business       $ 25.00 " << setw(7) << Checks <<
			"    $ " << setw(5) << Fee << setw(7) <<
			"     $ " << setw(5) << Total << '\n';

		break;

			// Start of Inner Switch P
			case 'P': case 'p':
			{
				switch (Checks / 10)
				{
					case 0: case 1: case 2: Fee = Checks * 0.05; Total = 5 + Fee;
						break;
					case 3: case 4: Fee = Checks * 0.04; Total = 5 + Fee;
						break;
					case 5: case 6: Fee = Checks * 0.03; Total = 5 + Fee;
						break;
					default: Fee = Checks * 0.02; Total = 5 + Fee;
				}
			}
			// End of Inner Switch P

		// Prints numbers of Personal
		outfile << "Personal       $  5.00 " << setw(7) << Checks <<
			"    $ " << setw(5) << Fee << setw(7) <<
			"     $ " << setw(5) << Total << '\n';
		}
		// Endo of Outer Switch
	}
	// End of While Loop

	// Closes infile and outfile
	infile.close();
	outfile.close();
	return 0;
}
