//==========================================================
//
// Title:      To Uppercase
// Course:     CSC 2111
// Lab Number: 10-2
// Author:     Omar Faruk
// Date:       02/12/21
// Description:
//   Creating a program that prompts the user to input a string
// and outputs the string in uppercase letters using dynamic char
// array.
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

  // Declare variables and pointers
  string input;
  char* name;
  int length;
  
  // Get user name
  cout << "Enter your name: ";
  cin >> input;

  // Compute length to set array
  length = input.length();
  
  // Declare dynamic array
  name = new char[length];

  // Fill name
  for (int i = 0; i < length; i++)
  {
	  name[i] = input[i];
  }

  // Convert char into ascii value
  for (int i = 0; i < length; i++)
  {
	  name[i] = int(input[i]) - 32;
  }

  // Print output of array
  for (int i = 0; i < length; i++)
  {
	  cout << name[i];
  }

  // Delete dynamic array
  delete[length] name;
}
