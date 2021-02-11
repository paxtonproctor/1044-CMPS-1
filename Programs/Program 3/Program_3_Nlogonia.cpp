// Paxton Proctor
// Computer Science 1 - Dr.Halverson
// Program 3 - Nlogonia
// 3/2/2020
/*
It was agreed that one point, called the Division Point,
with coordinatesto be established in the negotiations,
will define the country division. Two lines, 
both containing the division point, 
one in the North-South direction and one in the East-Westdirection,
will be drawn on the map, 
dividing the land into 4 new countries with names as shown below on the map.
*/

#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

int main()
{
	// Delcare input file.
	ifstream infile;
	infile.open("Nlogonia data 4.txt"); 
	// insert Nlogonia data 2.txt, Nlogonia data 4.txt in the infile.open();

	// Declare output file.
	ofstream outfile;
	outfile.open("output.txt");

	// Declaring Variables X and Y.
	int PointX, PointY, LiPointX, LiPointY;

	// Reads the Division lines of X and Y.
	infile >> LiPointX >> LiPointY;

	// Formatting for 2 decimals in file.
	outfile << fixed << setprecision(2) << "Paxton Proctor \n\n";

	// Prints out the division point to the file.
	outfile << "The Division Point is " << LiPointX << "," << LiPointY << "\n";

	// Reads in X and Y then prints quadrant name in output.
	while (infile >> PointX >> PointY) // loops till infile is done.
	{
		if (PointX > LiPointX && LiPointY < PointY) // Prints out Kiowa 1 Quad
		{
			outfile << setw(6) << PointX << setw(8) << PointY << "     Kiowa\n";
		}
		else if (PointX < LiPointX && LiPointY < PointY) // Prints out Comanche
		{
			outfile << setw(6) << PointX << setw(8) << PointY <<
				"     Comanche\n";
		}
		else if (PointX < LiPointX && LiPointY > PointY) // Prints out Nocona
		{
			outfile << setw(6) << PointX << setw(8) << PointY << "     Nocona\n";
		}
		else if (PointX > LiPointX && LiPointY > PointY) // Prints out Tepee
		{
			outfile << setw(6) << PointX << setw(8) << PointY << "     Tepee\n";
		}
		else if (LiPointX == PointX && LiPointY < PointY) // Positive Y Axis
		{
			outfile << setw(6) << PointX << setw(8) << PointY <<
				"     Divisa " << "Comanche, Kiowa\n";
		}
		else if (PointX == LiPointX && LiPointY > PointY) // Negative Y Axis
		{
			outfile << setw(6) << PointX << setw(8) << PointY <<
				"     Divisa " << "Nocona, Tepee\n";
		}
		else if (PointY == LiPointY && LiPointX < PointX) // Positive X Axis
		{
			outfile << setw(6) << PointX << setw(8) << PointY <<
				"     Divisa " << "Comanche, Nocona\n";
		}
		else if (PointY == LiPointY && LiPointX > PointX) // Negative X Axis
		{
			outfile << setw(6) << PointX << setw(8) << PointY <<
				"     Divisa " << "Kiowa, Tepee\n";
		}
		else
		{
			outfile << setw(6) << LiPointX << setw(8) << LiPointY <<
				"     Division Point\n"; // Prints out the Division Point
		}
	}
	// End While when file Ends
	infile.close();
	outfile.close();
	return 0;
}