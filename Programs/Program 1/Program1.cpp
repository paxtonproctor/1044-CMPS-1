// Paxton Proctor
// Computer Science 1 - Dr.Halverson
// Program 1 - Cookie Program
// 2/15/2020
// This Program takes the number of cookies desired and displays the
// necessary ingredients in cups for the user.


#include<iostream>
#include<iomanip>
#include<fstream>

using namespace std;

int main()
{
	int number = 1;

	ofstream outfile("output.txt");

	// Declaration of variables
	int numCook;
	double Rate, totSug, totOat, totBut, totFlr, totChoc, totCin, totMlk;

	// Formatting for 2 decimals on screen and in file.
	cout << fixed << setprecision(2) << "Paxton Proctor \n\n";
	outfile << fixed << setprecision(2) << "Paxton Proctor \n\n";

	// loops 10 times
	while (number <= 10)
	{
		// Asking user on how many cookies they want.
		cout << "How many cookies do you want to make? \n";
		cin >> numCook;

		// Arithmetics for the recipe, Example: totSug = Sug * Rate.
		Rate = numCook / 48.0;
		totSug = 1.5 * Rate;
		totOat = 0.75 * Rate;
		totBut = 1 * Rate;
		totFlr = 2.75 * Rate;
		totChoc = 1.25 * Rate;
		totCin = 0.1 * Rate;
		totMlk = 0.5 * Rate;

		// Prints total number of cookies inputted.
		cout << "For " << numCook << " cookies, use this recipe:\n\n\n";
		outfile << "For " << numCook << " cookies, use this recipe:\n\n\n";

		// Calc total number req of Sugar and displays.
		cout << setw(7) << totSug << "  Cups Sugar \n\n\n";
		outfile << setw(7) << totSug << "  Cups Sugar \n\n\n";

		// Calc total number req of Oats and displays.
		cout << setw(7) << totOat << "  Cups Oats \n\n\n";
		outfile << setw(7) << totOat << "  Cups Oats \n\n\n";

		// Calc total number req of Butter and displays.
		cout << setw(7) << totBut << "  Cups Butter \n\n\n";
		outfile << setw(7) << totBut << "  Cups Butter \n\n\n";

		// Calc total number req of Flour and displays.
		cout << setw(7) << totFlr << "  Cups Flour \n\n\n";
		outfile << setw(7) << totFlr << "  Cups Flour \n\n\n";

		// Calc total number req of Chocolate chips and displays.
		cout << setw(7) << totChoc << "  Cups Chocolate Chips \n\n\n";
		outfile << setw(7) << totChoc << "  Cups Chocolate Chips \n\n\n";

		// Calc total number req of Cinnamon and displays.
		cout << setw(7) << totCin << "  Cups Cinnamon \n\n\n";
		outfile << setw(7) << totCin << "  Cups Cinnamon \n\n\n";

		// Calc total number req of Milk and displays.
		cout << setw(7) << totMlk << "  Cups Milk \n\n\n";
		outfile << setw(7) << totMlk << "  Cups Milk \n\n\n";

		number = number + 1;
	}
	// End While Number
	outfile.close();
	return 0;
}