// Paxton Proctor
// Computer Science 1 - Dr.Halverson
// Program 5 - Counting Characters
// 3/30/2020
/*
You must use switch statements to identify the characters and count them.
Your report must look as shown below with numbers right aligned with the letters.`
*/

#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int main()
{
	// Declare input file
	ifstream infile;
	infile.open("Alphabetic_Input.txt");

	// Declare output file
	ofstream outfile;
	outfile.open("output.txt");

	// Declarations of variables
	int LetterA = 0, LetterB = 0, LetterC = 0, LetterD = 0, LetterE = 0;
	int LetterF = 0, LetterG = 0, LetterH = 0, LetterI = 0, LetterJ = 0;
	int Other = 0;
	char item = 0;

	// Formatting for 2 decimals on screen and in file for measurement.
	outfile << fixed << setprecision(2) << "Student: Paxton Proctor \n\n";

	// Start of outer for loop
	for (int count = 1; count <= 12; count++)
	{
		// Resetting all letter counts back to zero
		LetterA = LetterB = LetterC = LetterD = LetterE = LetterF = LetterG = 0;
		LetterH = LetterI = LetterJ = Other = 0;

		// Formatting for line and letters
		outfile << "______________________________________________\n\n";
		outfile << "Line: " << count << '\n';
		outfile << " A   B   C   D   E   F   G   H   I   J   other\n";

		// Start of inner for loop
		for (int innercount = 1; innercount <= 25; innercount++)
		{
			infile >> item;

			// Start of Switch counting different letters
			switch (item)
			{
			case 'A': case 'a': LetterA += 1;
				break;
			case 'B': case 'b': LetterB += 1;
				break;
			case 'C': case 'c': LetterC += 1;
				break;
			case 'D': case 'd': LetterD += 1;
				break;
			case 'E': case 'e': LetterE += 1;
				break;
			case 'F': case 'f': LetterF += 1;
				break;
			case 'G': case 'g': LetterG += 1;
				break;
			case 'H': case 'h': LetterH += 1;
				break;
			case 'I': case 'i': LetterI += 1;
				break;
			case 'J': case 'j': LetterJ += 1;
				break;
			default: Other += 1;
			}
			// End of Switch Statement
		}
		// End of inner for loop

		// Prints numbers for all characters
		outfile << setw(2) << LetterA << setw(4) << LetterB << setw(4) << LetterC
			<< setw(4) << LetterD << setw(4) << LetterE << setw(4) << LetterF
			<< setw(4) << LetterG << setw(4) << LetterH << setw(4) << LetterI
			<< setw(4) << LetterJ << setw(8) << Other << '\n';
	}
	// End of outer for loop

	// Closes infile and outfile
	infile.close();
	outfile.close();
	return 0;
}