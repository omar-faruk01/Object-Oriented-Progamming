//==========================================================
//
// Title:      application
// Course:     CSC 2111
// Lab Number: number
// Author:     name
// Date:       date
// Description:
//   brief description of application including its inputs,
// processing, and outputs
//
//==========================================================
#include <cstdlib> // For several general-purpose functions
#include <fstream> // For file handling
#include <iomanip> // For formatted output
#include <iostream> // For cin, cout, and system
#include <string> // For string data type
#include <vector> // For vector class
using namespace std; // So "std::cout" may be abbreviated to "cout"

int main()
{

  // Show application header
  cout << "Welcome to Vectors!" << endl;
  cout << "-------------------" << endl << endl;

  // #1 
  //Decalre variables
  cout << "#1" << endl;
  vector<int> secretList;

  //Store numbers in vector
  secretList.push_back(56);
  secretList.push_back(28);
  secretList.push_back(32);
  secretList.push_back(96);
  secretList.push_back(75);

  // Output contents of vector
  for (int i = 0; i < secretList.size(); i++)
  {
	  cout << secretList[i] << " ";
  }



  // #2
  cout << "\n#2" << endl;
  
  // Decalre Variables
  vector<int> myList(5);
  unsigned int length;

  myList[0] = 3;
  for (int i = 1; i < 4; i++)
  {
	  myList[i] = 2 * myList[i - 1] - 5;
  }

  myList.push_back(46);
  myList.push_back(57);
  myList.push_back(35);

  // print first and last element of vector
  cout << "Front " << myList.front();
  cout << "\nBack " << myList.back();

  // size of vector in length
  length = myList.size();
  cout << "\nLength " << length << endl;

  // output all elements
  for (int i = 0; i < length; i++)
  {
	  cout << myList[i] << " ";
  }
  


  //#3
  cout << "\n#3" << endl;

  vector<int> intList(5); // create vector of size 5

  int num = 1; // initialize num as 1
  for (auto &p : intList) // make p travrse through vector
  {
	  if (num % 2 == num % 3) // If num modulo 2 is same as num module 3 
	  {
		  p = 2 * num; // then multiply num by 2 and store it as that iteration of vector
	  }
	  else
	  {
		  p = 3 * num; // otherwise multiply num by 3 and store it as that iteration of vector
	  }

	  num = p - 2; // for every iteration, num = p - 2
  }

  for (auto& p : intList) // print out all elements in a vector
  {
	  cout << p << " ";
  }
  cout << endl; 

  // Show application close
  cout << "\nEnd of Vectors" << endl;

}
