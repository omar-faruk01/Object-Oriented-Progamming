//==========================================================
//
// Title:      Mean and Standard Deviation
// Course:     CSC 2111
// Lab Number: Structured Programming Self-Assessment 
// Author:     Omar Faruk
// Date:       01/15/21
// Description:
//   Creating an application that prints the mean and standard
// deviation using two functions with calculations.
//
//==========================================================
#include <cstdlib> // For several general-purpose functions
#include <fstream> // For file handling
#include <iomanip> // For formatted output
#include <iostream> // For cin, cout, and system
#include <string> // For string data type
using namespace std; // So "std::cout" may be abbreviated to "cout"

double getMean(double x1, double x2, double x3, double x4, double x5)
{
	double mean = (x1 + x2 + x3 + x4 + x5) / 5;
	return mean;
}
double getStdDev(double x1, double x2, double x3, double x4, double x5, double mean)
{
	double stdDev = sqrt((pow(x1 - mean, 2) + pow(x2 - mean, 2) + pow(x3 - mean, 2) +
		pow(x4 - mean, 2) + pow(x5 - mean, 2)) / 5);
	return stdDev;
}
int main()
{
  // Declare variables
	double x1, x2, x3, x4, x5;
	double mean = 0, std_dev = 0;

  // Input of 5 numbers
	cout << "Enter 5 numbers: ";
	cin >> x1 >> x2 >> x3 >> x4 >> x5;

  // Assigning function return to variable
	mean = getMean(x1, x2, x3, x4, x5);
	std_dev = getStdDev(x1, x2, x3, x4, x5, mean);

  // Output of meean & std dev
	cout << "\nThe mean is " << mean << "." << "\nThe standard deviation is "
		<< std_dev << "." << endl;
}
