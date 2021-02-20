//==========================================================
//
// Title:      Dynamic Array Print
// Course:     CSC 2111
// Lab Number: 10-1
// Author:     Omar Faruk
// Date:       02/12/2021
// Description:
//  Creating a dynamic array and pointer to take input numbers
// and outputting the array.
//
//==========================================================
#include <cstdlib> // For several general-purpose functions
#include <fstream> // For file handling
#include <iomanip> // For formatted output
#include <iostream> // For cin, cout, and system
#include <string> // For string data type
using namespace std; // So "std::cout" may be abbreviated to "cout"

void fillUp(int data[], int size)
{
	cout << "Enter " << size << " numbers: ";
	for (int i = 0; i < size; i++)
	{
		cin >> data[i];
	}
}

void showArray(int values[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << values[i] << endl;
	}
}

int main()
{

  // Declare variables
  int size = 0;
	
  // Dceclare a pointer to a dynamic array
  int* intArr;

  cout << "How many values: ";
  cin >> size;

  // Create the dynamic array
  intArr = new int[size];

  // Call fillup() func with the dynamic array
  fillUp(intArr, size);

  cout << "\nYou entered " << size << " numbers:\n";

  // Call showArray() func with the dynamic array
  showArray(intArr, size);

  // Delete the dynamic array
  delete[size] intArr;

}
