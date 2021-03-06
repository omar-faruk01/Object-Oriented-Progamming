//==========================================================
//
// Title:      Class Operators
// Course:     CSC 2111
// Lab Number: 13
// Author:     Omar Faruk
// Date:       02/27/21
// Description:
//   Creating a program to use class operations using complex
// numbers computation.
//
//==========================================================
#include <cstdlib> // For several general-purpose functions
#include <fstream> // For file handling
#include <iomanip> // For formatted output
#include <iostream> // For cin, cout, and system
#include <string> // For string data type
using namespace std; // So "std::cout" may be abbreviated to "cout"

class Complex 
{
private:
	int real, imag;
public:
	Complex(int r = 0, int i = 0)
	{
		real = r;
		imag = i;
	}

	Complex operator + (Complex const& obj)
	{
		Complex res;
		res.real = real + obj.real;
		res.imag = imag + obj.imag;
		return res;
	}

	Complex operator - (Complex const& obj)
	{
		Complex res;
		res.real = real - obj.real;
		res.imag = imag - obj.imag;
		return res;
	}

	Complex operator / (Complex const& obj)
	{
		Complex res;

		if (imag != 0 && obj.imag != 0)
		{
			res.real = ((real * obj.real + imag * obj.imag) / ((imag * imag) + (obj.imag * obj.imag)));
			res.imag = (((-1 * real * obj.imag) + (imag * obj.real)) / ((imag * imag) + (obj.imag * obj.imag)));
		}

		return res;
	}


	void print(string operation)
	{
		if (operation == "add" )
		{
			cout << "\nnum1 + num2 = ";
			cout << real << " + i" << imag << endl;
		}
		else if (operation == "minus")
		{
			cout << "\nnum1 - num2 = ";
			cout << real << " - i" << imag << endl;
		}
		else if (operation == "divide")
		{
			cout << "\nnum1 / num2 = ";
			cout << real << " / i" << imag << endl;
		}
		else
		{
			cout << "No operator found" << endl;
		}
	}
};

int main()
{
	// Declare variable
	string add = "add", minus = "minus", divide = "divide";

	Complex num1(12, 6), num2(8, 4); // Creating two objects

	// Application header
	cout << "Welcome to Class Operators!" << endl;
	cout << "---------------------------" << endl;

	// Substraction operator
	Complex num3 = num1 - num2; // create object to hold result of substraction
	num3.print(minus); // print output

	// Division operator
	num3 = num1 / num2;
	num3.print(divide); // print output

	// Addition operator
	num3 = num1 + num2;
	num3.print(add); // print output

	// Application footer
	cout << "\nEnd of Class Operators";
}
