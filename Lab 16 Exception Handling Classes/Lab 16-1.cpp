//==========================================================
//
// Title:      Standard to Military Time
// Course:     CSC 2111
// Lab Number: 16-1
// Author:     Omar Faruk
// Date:       03/20/21
// Description:
//   Using exception classes to create an application that converts
// standard time to military time.
//
//==========================================================
#include <cstdlib> // For several general-purpose functions
#include <fstream> // For file handling
#include <iomanip> // For formatted output
#include <iostream> // For cin, cout, and system
#include <string> // For string data type
using namespace std; // So "std::cout" may be abbreviated to "cout"

class invalidHr
{
private:
	string message;

public:
	invalidHr()
	{
		message = "Invalid hour entry, there are 12 hours in a day.";
	}
	string what()
	{
		return message;
	}
};

class invalidMin
{
private:
	string message;

public:
	invalidMin()
	{
		message = "Invalid minutes entry, there are 60 minutes in an hour.";
	}
	string what()
	{
		return message;
	}
};

class invalidSec
{
private:
	string message;

public:
	invalidSec()
	{
		message = "Invalid seconds entry, there are 60 seconds in a minute.";
	}
	string what()
	{
		return message;
	}
};

int main()
{
  // Declare variables
  int hr, min, sec;

  // Show application header
  cout << "Welcome to Standard to Military Time!" << endl;
  cout << "--------------------------" << endl;

  bool valid = true;

  while (valid)
  {

	  // Take user input
	  cout << "\nEnter a 12-hour notation (Use a space between hours, mins, and secs): ";
	  cin >> hr >> min >> sec;

	  try
	  {
		  if (hr > 12 || hr < 0)
		  {
			  throw invalidHr();
		  }
		  if (min > 60 || hr < 0)
		  {
			  throw invalidMin();
		  }
		  if (sec > 60 || hr < 0)
		  {
			  throw invalidSec();
		  }

		  valid = false; // exit while loop if no exceptions to handle
	  }
	  catch (invalidHr hrObj)
	  {
		  cout << hrObj.what() << endl
			  << "Try Again!" << endl;
	  }
	  catch (invalidMin minObj)
	  {
		  cout << minObj.what() << endl
			  << "Try Again!" << endl;
	  }
	  catch (invalidSec secObj)
	  {
		  cout << secObj.what() << endl
			  << "Try Again!" << endl;
	  }

  }

  // Output of 24 hr notation conversion
	if (hr < 12)
	{
		hr = hr + 12;
		cout << "\nConverted 24-hour notation time: "
			<< hr  << ":" << min << ":" << sec << endl;
	}
	else
	{
		cout << "\nConverted 24-hour notation time: "
			<< hr << ":" << min << ":" << sec << endl;
	}

  // Show application close
  cout << "\nEnd of Standard to Military Time" << endl;

}
