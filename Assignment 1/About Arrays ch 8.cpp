//==========================================================
//
// Title:      Smallest Index in Array
// Course:     CSC 2110
// Lab Number: Structured Programming Self-Assessment
// Author:     Omr Faruk
// Date:       01/15/21
// Description:
//  Creating an application to find the index of the smallest element 
// to print it out using a function and array
//
//==========================================================
#include <cstdlib> // For several general-purpose functions
#include <fstream> // For file handling
#include <iomanip> // For formatted output
#include <iostream> // For cin, cout, and system
#include <string> // For string data type
using namespace std; // So "std::cout" may be abbreviated to "cout"

// Globals
const int ARRAY_SIZE = 5;

int smallestIndex(int array[], int arraySize) 
{

    // Declare variables
    int minIndex = 0;
    
    for (int i = 0; i < arraySize; i++)
    {
        if (array[minIndex] > array[i])
            minIndex = i;
    }
    return minIndex;
}
int main()
{

  // Declare variables
    int array_nums[ARRAY_SIZE];
  
  // Take user input
    cout << "Enter 5 integers: ";
    for (int i = 0; i < 5; i++)
    {
        cin >> array_nums[i];
    }

    cout << endl;

  // printing the array
    for (int i = 0; i < ARRAY_SIZE; i++)
    {
        cout << array_nums[i] << " ";
    }

  // Printing smallest index and element
    cout << endl << "\nThe index of the smallest element is " << smallestIndex(array_nums, ARRAY_SIZE) 
        << endl << "The smallest element in the array is " << array_nums[smallestIndex(array_nums, ARRAY_SIZE)];
}
