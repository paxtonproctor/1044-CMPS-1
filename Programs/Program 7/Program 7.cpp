// Paxton Proctor
// Computer Science 1 - Dr.Halverson
// Program 7 - Hospital Bills
// 4/22/2020
/*
Bilbo’s Hospital needs a program to print out patient bills.
There are 2 categories of patients, in-patient and out-patient.
The category is indicated with and ‘I’ or ‘O’ in the data set.
In addition to the main program, you are to write 2 functions,
one called InPatientBill and the other called OutPatientBill.
*/

#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

// Prototypes for inPatientBills and outPatientBills
double inPat(double numDays, double rateChar, double serChar, double medChar);
double outPat(double serChar1, double medChar1);

// Name: inPat
// Input: double
// Process: is used to create a total for the inPatientBills
// output: double total0
double inPat(double numDays, double rateChar, double serChar, double medChar)
{
	return (numDays * rateChar) + serChar + medChar;
}

// Name: outPat
// Input: double
// Process: is used to create a total for the outPatientBills
// output: The Total for output
double outPat(double serChar1, double medChar1)
{
	
	return serChar1 + medChar1 + 10.0;
}

int main() 
{
	// Declare input file
	ifstream infile;
	infile.open("input.txt");

	// Declare output file
	ofstream outfile;
	outfile.open("output.txt");

	// Declarations of variables
	char item;
	double rateChar, serChar, medChar, total0, total1, serChar1, medChar1;
	int num, numDays;

	// Prints out to outfile
	outfile << fixed << setprecision(2) << "Student: Paxton Proctor \n\n";
	outfile << "*****************************************\n";

	// Declaration and start of while loop
	int count = 1;
	while (count <= 10)
	{
		// Reads all values into program
		infile >> num >> item;

		// If statement determines whether it is inpatient or outpatient
		// Start of If Statement
		if (num >= 10000 && num <= 59999 && item == 'I' || item == 'i')
		{
			// Reads all values into program
			infile >> numDays >> rateChar >> serChar >> medChar;

			// calls inpatient
			total0 = inPat(numDays, rateChar, serChar, medChar);

			// Prints all answers of inpatient to outfile
			outfile << "Patient ID:   " << num << '\n';
			outfile << "Type:         In-patient\n";
			outfile << "Total Due:    $" << setw(9) << total0 << "\n\n";
			outfile << setw(5) << numDays <<
				" Days @  $" << setw(9) << rateChar << '\n';
			outfile << "   Other      $" << setw(9) << serChar << '\n';
			outfile << "   medicines  $" << setw(9) << medChar << '\n';
		}
		else if (num >= 60000 && num <= 99999 && item == 'O' || item == 'o')
		{
			// Reads all values into program
			infile >> serChar1 >> medChar1;

			// calls outPatient
			total1 = outPat(serChar1, medChar1);

			// Prints all answers of outpatient to outfile
			outfile << "Patient ID:   " << num << '\n';
			outfile << "Type:         Out-patient\n";
			outfile << "Total Due:    $" << setw(9) << total1 << "\n\n";
			outfile << "   Charges    $" << setw(9) << serChar1 << '\n';
			outfile << "   Medicines  $" << setw(9) << medChar1 << '\n';
			outfile << "   Processing $    10.00\n";
		}
		else
		{
			if (item == 'I' || item == 'i')
			{
				infile >> numDays >> rateChar >> serChar >> medChar;
				// Prints Error if Patient ID does not meet criteria
				outfile << "Patient ID:   " << num << "   ERROR\n";
			}
			else if (item == 'O' || item == 'o')
			{
				// Reads all values into program
				infile >> serChar1 >> medChar1;

				// Prints Error if Patient ID does not meet criteria
				outfile << "Patient ID:   " << num << "   ERROR\n";
			}
		}
		// End of If statement

		// separates each bill
		outfile << "*****************************************\n";

		count++;
	}
	// End of While loop

	// Closes infile and outfile
	infile.close();
	outfile.close();
	return 0;
}