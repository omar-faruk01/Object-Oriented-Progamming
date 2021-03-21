//==========================================================
//
// Title:      Fractions Calculator
// Course:     CSC 2111
// Lab Number: 15-2
// Author:     Omar Faruk
// Date:       03/09/21
// Description:
//  Creating a fractions calcutor to handle mathematical operations
// while handling exceptions.
//
//==========================================================
#include <cstdlib> // For several general-purpose functions
#include <fstream> // For file handling
#include <iomanip> // For formatted output
#include <iostream> // For cin, cout, and system
#include <string> // For string data type
using namespace std; // So "std::cout" may be abbreviated to "cout"

int menu() 
{
	int opt;
	cout <<"\nFractions are in form a/b, where b can not equal 0!"<< endl
		<< "Select an operator from below to use in a fractions operation:" << endl
		<< "\nOperator Menu" << endl
		<< "-------------" << endl
		<< "Option 1: +" << endl
		<< "Option 2: -" << endl
		<< "Option 3: x " << endl
		<< "Option 4: /" << endl
		<< "Option 9: Exit" << endl
		<< "\nEnter an option: ";
	cin >> opt;
	return opt;
}

double addFractions(double a, double b, double c, double d)
{
	double e;

	// compute addition of fractions
	e = (a / b) + (c / d);
	return e;
}

double substractFractions(double a, double b, double c, double d)
{
	double e;

	// compute substraction of fractions
	e = (a / b) - (c / d);
	return e;
}

double multiplyFractions(double a, double b, double c, double d)
{
	double e;

	// compute multiplication of fractions
	e = (a / b) * (c / d);
	return e;
}

double divideFractions(double a, double b, double c, double d)
{
	double e;
	// compute division of fractions
	e = (a / b) / (c / d);
	return e;
}

int main()
{

  // Declare variables
  string num1a, num2a, denum1a, denum2a;
  double num1, num2, denum1, denum2, sum;
  int option;


  // Show application header
  cout << "Welcome to Fractions Calculator!" << endl;
  cout << "-------------------------------" << endl;

  option = menu(); // Menu for user selection
  while (option != 9)
  {
	  if (option < 5 && option > 0)
	  {
		  try
		  {
			  // Take user input
			  cout << "\nEnter numerator for first fraction: ";
			  cin >> num1a;
			  cout << "Enter denominator for first fraction: ";
			  cin >> denum1a;

			  cout << "Enter numerator for second fraction: ";
			  cin >> num2a;
			  cout << "Enter denominator for second fraction: ";
			  cin >> denum2a;

			  num1 = stod(num1a);
			  num2 = stod(num2a);
			  denum1 = stod(denum1a);
			  denum2 = stod(denum2a);

			  if (denum1 == 0)
			  {
				  throw denum1;
			  }
			  if (denum2 == 0)
			  {
				  throw denum2;
			  }
		  }
		  catch (invalid_argument&) // handle invalid input exceptions
		  {
			  cout << "\nPlease enter a valid integer!" << endl;
			  option = 999;
		  }
		  catch (double) // handle exception where denominator is 0
		  {
			  cout << "\nCan not divide a number by 0!" << endl;
		  }
	  }
	 
	  
	  switch (option) // To execute user menu option
	  {
		case 1:
			sum = addFractions(num1, denum1, num2, denum2); // add fractions
			if (sum > -9999999 && sum < 9999999) //output results
			{
				cout << endl << sum << " is the result of " << num1 << "/" << denum1 << " + "
					<< num2 << "/" << denum2 << endl
					<< "-------------------------------" << endl;
			}
			break;
		case 2:
			sum = substractFractions(num1, denum1, num2, denum2); // substract fractions
			if (sum > -9999999 && sum < 9999999) //output results
			{
				cout << endl << sum << " is the result of " << num1 << "/" << denum1 << " - "
					<< num2 << "/" << denum2 << endl
					<< "-------------------------------" << endl;
			}
			break;
		case 3:
			sum = multiplyFractions(num1, denum1, num2, denum2); //multiply fractions
			if (sum > -999999 && sum < 9999999) //output results
			{
				cout << endl << sum << " is the result of " << num1 << "/" << denum1 << " x "
					<< num2 << "/" << denum2 << endl
					<< "-------------------------------" << endl;
			}
			break;
		case 4:
			sum = divideFractions(num1, denum1, num2, denum2); // divide fractions
			if (sum > -999999 && sum < 9999999) //output results
			{
				cout << endl << sum << " is the result of " << num1 << "/" << denum1 << " / "
					<< num2 << "/" << denum2 << endl
					<< "-------------------------------" << endl;
			}
			break;
		case 999: // To handle invalid input exception and break to menu
			break;
		default:
			cout << "Error: invalid menu option of " << option << "." << endl;

	  }
	  
	  option = menu(); // Menu for user selection
	 
  }

  cout << "Done processing menu options." << endl; // message for exiting menu option

  // Show application close
  cout << "\nEnd of Fractions Calculator!" << endl;

}
