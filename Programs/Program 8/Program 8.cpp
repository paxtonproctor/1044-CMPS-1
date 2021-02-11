// Paxton Proctor
// Computer Science 1 - Dr.Halverson
// Program 8 - Arrays and Functions
// 5/6/2020
/*
Write a C++ program to declare 3 arrays, ArrayA, 
ArrayB, ArrayC, to hold 25 integers each.
Write code to do the following – in this order.
All code is to be in main except for the specific
functions described below.
Put one BLANK line between the printing of each array.
*/

#include<iostream>
#include<fstream>
#include<cstdlib>
#include <iomanip>

using namespace std;

const int SIZE = 25; // This is a constant of 25

// Prototypes for COMPUTE and MAXARRAY
void COMPUTE(double AryA[], double AryB[], double AryC[], int size);
void MAXARRAY(double AryA[], double AryB[], double AryC[], int size);

int main() {
	// Declare input file
	ifstream infile;
	infile.open("Input.txt");

	// Declare output file
	ofstream outfile;
	outfile.open("output.txt");

	// Prints out to outfile
	outfile << fixed << setprecision(2) << "Student: Paxton Proctor \n\n";

	double ArrayA[SIZE]; // Holds numbers of ArrayA
	int countA = 0; // loop control variable
	double sum = 0; // initializing sum
	double avg = 0; // initializing avg

	// Read values from value and stores them in the array,
	// counting them and summing them as they are read in
	while (countA < SIZE && infile >> ArrayA[countA])
		countA++;

	// displaying contents of ArrayA
	outfile << " ArrayA\n";
	for (int f = 0; f < countA; f++)
	{
		outfile << setw(3) << f + 1 << ".  ";
		outfile << setw(12) << ArrayA[f] << '\n';
		sum += ArrayA[f];
		avg = sum / countA;
	}
	outfile << " Sum of A " << setw(8) << sum << '\n';
	outfile << " Avg of A " << setw(8) << avg << "\n\n";

	double ArrayB[SIZE]; // Holds numbers of ArrayA
	int countB = 0; // loop control variable
	double sumB = 0; // initializing sum
	double avgB = 0; // initializing avg

	// Read values from value and stores them in the array,
	// counting them and summing them as they are read in
	while (countB < SIZE && infile >> ArrayB[countB])
		countB++;

	// displaying contents of ArrayB
	outfile << " ArrayB\n";
	for (int f = 0; f < countB; f++)
	{
		outfile << setw(3) << f + 1 << ".  ";
		outfile << setw(12) << ArrayB[f] << '\n';
		sumB += ArrayB[f];
		avgB = sumB / countB;
	}
	outfile << " Sum of B " << setw(8) << sumB << '\n';
	outfile << " Avg of B " << setw(8) << avgB << "\n\n";

	// Declaring ArrayC and Calling COMPUTE function
	double ArrayC[SIZE];
	COMPUTE(ArrayA, ArrayB, ArrayC, SIZE);
	
	// displaying contents of ArrayC
	outfile << " ArrayC\n";
	for (int f = 0; f < SIZE; f++)
	{
		outfile << setw(3) << f + 1 << ".  ";
		outfile << setw(12) << ArrayC[f] << '\n';
	}
	outfile << '\n';

	// calling MAXARRAY function
	MAXARRAY(ArrayA, ArrayB, ArrayC, SIZE);

	// displaying contents of ArrayC MAX
	outfile << " ArrayC MAX\n";
	for (int f = 0; f < SIZE; f++)
	{
		outfile << setw(3) << f + 1 << ".  ";
		outfile << setw(12) << ArrayC[f] << '\n';
	}

	// Closes infile and outfile
	infile.close();
	outfile.close();
	return 0;
}

// Name: COMPUTE
// Input: void, double, int
// Process: adds ArrayA to ArrayB to create ArrayC
// output: none
void COMPUTE(double AryA[], double AryB[], double AryC[], int size) {
	for (int k = 0; k < SIZE; k++)
	{
		AryC[k] = AryA[k] + AryB[k];
	}
}

// Name: MAXARRAY
// Input: void, double, int
// Process: is used to create a Max for ArrayC
// output: none
void MAXARRAY(double AryA[], double AryB[], double AryC[], int size) {
	for (int k = 0; k < SIZE; k++)
	{
		if (AryA[k] > AryB[k])
		{
			AryC[k] = AryA[k];
		}
		else
		{
			AryC[k] = AryB[k];
		}
	}
}