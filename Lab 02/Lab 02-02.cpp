//==========================================================
//
// Title:      Array Printer
// Course:     CSC 2111
// Lab Number: Lab 02-02
// Author:     Omar Faruk
// Date:       01/14/21
// Description:
//   Creating an array of 50 ints with first 25 filled by index
// squared and the last 25 filled by index * 3. Then printing the 
// array with 10 values per line.
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
  double alpha[ARRAY_SIZE];
  int temp;

  // Fill the array
  // index * index
  for (int i = 0; i < 25; i++)
  {
	  alpha[i] = i * i;
  }
  // index * 3
  for (int i = 25; i < 50; i++)
  {
	  alpha[i] = i * 3;
  }

  // Show application header
  cout << "Welcome to Array Printer!" << endl;
  cout << "-------------------------" << endl << endl;

  // print array
  for (int i = 0; i < 50; i++)
  {
	  cout << alpha[i] << " ";
	  if ((i + 1) % 10 == 0)
	  {
		  cout << "\n";
	  }
  }
  
  // Show application close
  cout << "\nEnd of Array Printer!" << endl;

}
