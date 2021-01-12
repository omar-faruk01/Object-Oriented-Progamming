//==========================================================
//
// Title:      Integer Print w/Sum
// Course:     CSC 2111
// Lab Number: Lab 1
// Author:     Omar Faruk
// Date:       01/12/2021
// Description:
//   Creating a program that takes user input, prints out the digits within
// the integer, and calculating to print a sum of the integer.
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

  // Declare variables
  int user_input;
  int first_digit, second_digit, third_digit, fourth_digit;
  int sum;


  // Taking user input
  cout << "Enter an input that is an integer: ";
  cin >> user_input;

  // Calculations
  first_digit = user_input / 1000;
  second_digit = user_input / 100 % 10;
  third_digit = user_input / 10 % 10;
  fourth_digit = user_input % 10;
  sum = first_digit + second_digit + third_digit + fourth_digit;

  // Print output
  cout << first_digit << " " << second_digit << " " << third_digit << " " << fourth_digit << endl;
  cout << "The sum is " << sum << endl;

}
