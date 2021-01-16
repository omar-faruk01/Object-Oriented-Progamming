//==========================================================
//
// Title:      String to Upper Case
// Course:     CSC 2111
// Lab Number: Lab 02-03
// Author:     Omar Faruk
// Date:       01/14/2021
// Description:
//   Application which converts string input that is lowercase
// into uppercase letters by storing the string into a char array
// using for loops.
//
//==========================================================
#include <cstdlib> // For several general-purpose functions
#include <fstream> // For file handling
#include <iomanip> // For formatted output
#include <iostream> // For cin, cout, and system
#include <string> // For string data type
using namespace std; // So "std::cout" may be abbreviated to "cout"

int main()
{
  // Declare constants
  const int ARRAY_SIZE = 50;

  // Declare variables
  string user_input;

  // Declare array
  char arrayText[ARRAY_SIZE];

  // Show application header
  cout << "Welcome to String to Upper Case!" << endl;
  cout << "--------------------------------" << endl << endl;

  // Fill array with user input
  cout << "Enter the text to make upper case: ";
  getline(cin, user_input);

  // Store charracters from string into char array
  for (int i = 0; i < user_input.length(); i++)
  {
	  arrayText[i] = user_input[i];
  }

  // Convert char into ascii value
  for (int i = 0; i < user_input.length(); i++)
  {
	  arrayText[i] = int(arrayText[i]) - 32;
  }

  // Print output of array
  for (int i = 0; i < user_input.length(); i++)
  {
	  cout << arrayText[i];
  }

  // Show application close
  cout << endl << "\nEnd of String to Upper Case!" << endl;

}
