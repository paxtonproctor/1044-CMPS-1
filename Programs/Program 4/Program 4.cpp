// Paxton Proctor
// Computer Science 1 - Dr.Halverson
// Program 4 - Counting Characters
// 3/10/2020
//
//
//

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
	
	// Formatting for 2 decimals in file
	outfile << fixed << setprecision(2) << "Student: Paxton Proctor \n\n";

	// Declaring count and innercount to 1
	int count = 1;
	int innercount = 1;

	// start of outer loop lines
	while (count <= 12)
	{
		// Resetting all letter counts back to zero
		LetterA = LetterB = LetterC = LetterD = LetterE = LetterF = LetterG = 0;
		LetterH = LetterI = LetterJ = Other = 0;

		// Formatting for line and letters
		outfile << "______________________________________________" << '\n';
		outfile << "Line: " << count << '\n';
		outfile << " A   B   C   D   E   F   G   H   I   J   other\n";
		
		// Resetting innercount back to 1
		innercount = 1;

		// start of inner loop characters
		while (innercount <= 25)
		{
			infile >> item;
			
			if (item == 'A' || item == 'a')
			{
				LetterA++;
			}
			else if (item == 'B' || item == 'b')
			{
				LetterB++;
			}
			else if (item == 'C' || item == 'c')
			{
				LetterC++;
			}
			else if (item == 'D' || item == 'd')
			{
				LetterD++;
			}
			else if (item == 'E' || item == 'e')
			{
				LetterE++;
			}
			else if (item == 'F' || item == 'f')
			{
				LetterF++;
			}
			else if (item == 'G' || item == 'g')
			{
				LetterG++;
			}
			else if (item == 'H' || item == 'h')
			{
				LetterH++;
			}
			else if (item == 'I' || item == 'i')
			{
				LetterI++;
			}
			else if (item == 'J' || item == 'j')
			{
				LetterJ++;
			}
			else
			{
				Other++;
			}
			innercount++;
		}
		// End of inner while loop

		// Prints numbers for all characters
		outfile << setw(2) << LetterA << setw(4) << LetterB << setw(4) << LetterC
			<< setw(4) << LetterD << setw(4) << LetterE << setw(4) << LetterF
			<< setw(4) << LetterG << setw(4) << LetterH << setw(4) << LetterI 
			<< setw(4) << LetterJ << setw(8) << Other << '\n';
		count++;
	}
	// End of outer while loop

	// closes infile and outfile
	infile.close();
	outfile.close();
	return 0;
}
