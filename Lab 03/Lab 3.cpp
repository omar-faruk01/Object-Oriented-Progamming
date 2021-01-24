//==========================================================
//
// Title:      Faruk Banking
// Course:     CSC 2111
// Lab Number: 3
// Author:     Omar Faruk
// Date:       01/21/21
// Description:
//   Creating an application to resemble a banking system that
// outputs two bank accounts using classes and methods.
//
//==========================================================
#include <cstdlib> // For several general-purpose functions
#include <fstream> // For file handling
#include <iomanip> // For formatted output
#include <iostream> // For cin, cout, and system
#include <string> // For string data type
using namespace std; // So "std::cout" may be abbreviated to "cout"


// Creating a class for Bank Account
class bankAccount {
public:
	string customerName;
	double customerBalance;
	void getName();
	void getBalance();
	double depositAmount(double balance);
	double withdrawAmount(double balance);
	bankAccount(double balance, string name);
};

// To print customer name method
void bankAccount::getName() 
{
	cout << "Name: " <<customerName << endl;
}
// To print customer balance method
void bankAccount::getBalance()
{
	cout << "Balance: $" << customerBalance << endl;
}
// To increase customr balance method
double bankAccount::depositAmount(double balance)
{
	customerBalance = customerBalance + balance;
	return customerBalance;
}
// To decrease customer balance method
double bankAccount::withdrawAmount(double balance)
{
	customerBalance = customerBalance - balance;
	return customerBalance;
}
// Constructor to initalize values
bankAccount::bankAccount(double balance, string name)
{
	customerBalance = balance;
	customerName = name;
}

int main()
{

	cout << fixed << setprecision(2);
  
	// Application header
	cout << "Welcome to Faruk Banking! " << endl
		<< "-------------------------" << endl
		<< "Customer Service is Our Guarantee!" << endl << endl;

	// First Account
	cout << "First Bank Account\n"
		<<  "^^^^^^^^^^^^^^^^^^\n";
	bankAccount Account1(6300, "Omar Faruk");
	Account1.getName();
	Account1.getBalance();
	
	// Depositing money
	Account1.depositAmount(653.40);
	cout << "\n**Deposit of $653.40**\n";


	//Final balance and name output
	cout << "\n^^^^^^^^^^^^^^^^^^^\n";
	Account1.getName();
	cout << "Final ";
	Account1.getBalance();

	// Second Account5
	cout << "\n\nSecond Bank Account\n"
		<< "^^^^^^^^^^^^^^^^^^^\n"; 
	bankAccount Account2(811500, "Lionel Messi");
	Account2.getName();
	Account2.getBalance();

	// Withdarwing money
	Account2.withdrawAmount(3240);
	cout << "\n**Withdrawal of $3240**" << endl;

	//Final balance and name output
	cout << "\n^^^^^^^^^^^^^^^^^^^\n";
	Account2.getName();
	cout << "Final ";
	Account2.getBalance();

}
