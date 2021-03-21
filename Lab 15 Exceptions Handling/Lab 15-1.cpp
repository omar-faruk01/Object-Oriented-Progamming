//==========================================================
//
// Title:      Feet 2 Centimeters
// Course:     CSC 2111
// Lab Number: 15-1
// Author:     Omar Faruk
// Date:       03/09/21
// Description:
//  Creating an application to convert length in ft and in to cm, 
// while also using validating using exception handling.
//
//==========================================================
#include <cstdlib> // For several general-purpose functions
#include <fstream> // For file handling
#include <iomanip> // For formatted output
#include <iostream> // For cin, cout, and system
#include <string> // For string data type
#include <cassert>
using namespace std; // So "std::cout" may be abbreviated to "cout"

int main()
{

  // Declare variables
  double length, length2;
  bool valid = true;
  string numStr;

  // Show application header
  cout << "Welcome to Feet 2 Centimeters!" << endl
	 << "------------------------------" << endl;

  while (valid)
  {
	  cout << "\nEnter length in feet and inches (Distinguish using '.'): ";
	  cin >> numStr; // take user input as string

	  try
	  {
		  length = stod(numStr); // convert string to double
		  if (length < 0)
		  {
			  throw length;
		  }
		  valid = false;
	  }
	  catch (double) // catch if input is negative
	  {
		  cout << "Length must be a positive number!" << endl;
	  }
	  catch (const invalid_argument&) // catch if string can not be converted to number
	  {
		  cout << "Length must be a positive number!" << endl;
	  }
	  
  }
  
  length2 = length * 30.48; // compute length from ft and in to cm

  cout << "\nThe coverted length is " << length2 << " (cm)" << endl;

  // Show application close
  cout << "\nEnd of Feet 2 Centimeters" << endl;

}
