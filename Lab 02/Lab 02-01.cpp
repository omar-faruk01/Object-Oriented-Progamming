//==========================================================
//
// Title:      application
// Course:     CSC 2111
// Lab Number: Lab 02-01
// Author:     Omar Faruk
// Date:       01/14/21
// Description:
//  Creating a user defined fuction to return true or false
// and asking for user input of letter to then see if it is a vowel
// by using the user def function.
//
//==========================================================
#include <cstdlib> // For several general-purpose functions
#include <fstream> // For file handling
#include <iomanip> // For formatted output
#include <iostream> // For cin, cout, and system
#include <string> // For string data type
using namespace std; // So "std::cout" may be abbreviated to "cout"

bool isVowel(char letter)
{
	// Declare variabe

	if (letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' || letter == 'u')
	{
		return true;
	}
	else
		return false;
}

int main()
{

  // Declare variables
  char user_input;
  char lower_case;

  // Show application header
  cout << "Welcome to Vowel Checker!" << endl;
  cout << "-------------------------" << endl << endl;

  // Promot for input of letter
  cout << "Enter a character: ";
  cin >> user_input;

  // Convert input to lower case
  lower_case = tolower(user_input);

  // Run user def function
  bool logic = isVowel(lower_case);

  // Output if vowel or not
  if (logic == true)
  {
	  cout << endl << "The letter " << user_input << " is a vowel" << endl;
  }
  else
  {
	  cout << endl << "\nThe letter " << user_input << " is not a vowel" << endl;
  }
  
  // Show application close
  cout << "\nEnd of Vowel Checker" << endl;

}
