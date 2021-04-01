
#include <cstdlib> // For several general-purpose functions
#include <fstream> // For file handling
#include <iomanip> // For formatted output
#include <iostream> // For cin, cout, and system
#include <string> // For string data type
using namespace std; // So "std::cout" may be abbreviated to "cout"


int sumOf(int k)
{

    if (k == 0)
        return 0;
    return (k % 10 + sumOf(k / 10));
}

int greatestCD(int a, int b)
{
    if (b == 0)
    {
        return a;
    }

    return greatestCD(b, a % b);
}

int main()
{

  // Declare variables
  int x, y, z;

  // Show application header
  cout << "Welcome to Recursion w/ Math!" << endl;
  cout << "-----------------------------" << endl << endl;

  // #1
  cout << "Enter two digits to get sum of: ";
  cin >> z;

  cout << "Sum of two digits: ";
  cout << sumOf(z) << endl;

  // #2
  cout << "\nEnter two digits to get GCD of (Use space to denote two numbers): ";
  cin >> x >> y;

  cout << "\GCD of two numbers: ";
  cout << greatestCD(x, y) << endl;

  // Show application close
  cout << "\nEnd of Recursion w/ Math" << endl;
}
