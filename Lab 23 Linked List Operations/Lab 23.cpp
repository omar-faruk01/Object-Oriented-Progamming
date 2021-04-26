#include <cstdlib> // For several general-purpose functions
#include <fstream> // For file handling
#include <iomanip> // For formatted output
#include <iostream> // For cin, cout, and system
#include <string> // For string data type
using namespace std; // So "std::cout" may be abbreviated to "cout"

class Node {
public:
	char data;
	Node* next;
	Node* prev;
};

//Global
Node* head = nullptr;

Node* getNewNode(char item)
{
	Node* newNode = new Node();
	newNode->data = item;
	newNode->next = nullptr;
	newNode->prev = nullptr;

	return newNode;
}

void insert(char item)
{
	Node* newNode = getNewNode(item);
	if (head == nullptr)
	{
		head = newNode;
		return;
	}

	head->prev = newNode;
	newNode->next = head;
	head = newNode;
}

void reversePrint()
{
	Node* temp = head;

	if (temp == nullptr) // Return to main if list is empty
	{
		return;
	}
	while (temp->next != nullptr) // Traverse to last node
	{
		temp = temp->next;
	}

	while (temp != nullptr) // Print nodes in reverse
	{
		cout << temp->data << " ";
		temp = temp->prev;
	}
}

void countList()
{
	Node* temp = head;
	int countM = 0, countI = 0, countS = 0, countP = 0;

	while (temp != nullptr) // Traverse to last node
	{
		if (temp->data == 'm')
		{
			countM++;
		}
		if (temp->data == 'i')
		{
			countI++;
		}
		if (temp->data == 's')
		{
			countS++;
		}
		if (temp->data == 'p')
		{
			countP++;
		}
		temp = temp->next;
	}

	cout << "\nOccurrences - "
		<< "\nM: " << countM 
		<< "\nI: " << countI 
		<< "\nS: " << countS 
	    << "\nP: " << countP << endl;

}


int main()
{

  // Declare variables

  // Show application header
  cout << "Welcome to Linked List!" << endl;
  cout << "----------------------" << endl << endl;


  insert('m');
  insert('i');
  insert('s');
  insert('s');
  insert('i');
  insert('s');
  insert('s');
  insert('i');
  insert('p');
  insert('p');
  insert('i');

  reversePrint();// Print list
  countList();



  // Show application close
  cout << "\nEnd of Linked List" << endl;

}
