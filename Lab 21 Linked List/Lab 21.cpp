#include <cstdlib> // For several general-purpose functions
#include <fstream> // For file handling
#include <iomanip> // For formatted output
#include <iostream> // For cin, cout, and system
#include <string> // For string data type
using namespace std; // So "std::cout" may be abbreviated to "cout"

class Node {
public:
	int info;
	Node* link;
};

int main()
{
	// Declare variables
	Node* list = NULL;
	Node* first = NULL;
	Node* current = NULL;
	Node* last = NULL;
	Node* temp = NULL;
	Node* trail = NULL;
	Node* p = NULL;
	Node* q = NULL;

	Node* one = NULL;
	Node* two = NULL;
	Node* three = NULL;
	Node* four = NULL;
	Node* five = NULL;
	Node* six = NULL;
	Node* seven = NULL;
	Node* eight = NULL;

	list = new Node();
	first = new Node();
	current = new Node();
	last = new Node();
	temp = new Node();
	trail = new Node();
	p = new Node();
	q = new Node();

	one = new Node();
	two = new Node();
	three = new Node();
	four = new Node();
	five = new Node();
	six = new Node();
	seven = new Node();
	eight = new Node();

	// Initialize 8 nodes
	one->info = 47;
	one->link = two;

	two->info = 12;
	two->link = three;

	three->info = 92;
	three->link = four;

	four->info = 65;
	four->link = five;

	five->info = 80;
	five->link = six;

	six->info = 46;
	six->link = seven;

	seven->info = 5;
	seven->link = eight;

	eight->info = 78;
	eight->link = NULL;

	list = one;
	first = one;
	p = two;
	current = four;
	temp = six;
	last = eight;

	// Show application header
	cout << "Welcome to Linked List!" << endl;
	cout << "-----------------------" << endl << endl;

	//#1

	cout << p->info << endl; // displays 2nd node

	q = p->link; // q is set to third node
	cout << q->info << " " << current->info << endl; // displays third node and fourth

	cout << current->link->info << endl; // displays fifth node

	trail = current->link->link; // trail is set to sixth node
	trail->link = nullptr; // trails link is set to point to null
	cout << trail->info << endl; //Displays sixth node

	cout << last->link->info; // linked list ends before last

	q = current->link;     // q is set to fifth node
	cout << q->link->link->info << endl; // displays seventh node

	//#2

	if (p->link->link->link->info == temp->info) // both fourth nodes
	{
		cout << "\nTrue" << endl;
	}
	else
	{
		cout << "\nFalse" << endl;
	}

	//#3

	trail = temp->link; // trail is set to seventh node
	trail->link = nullptr; // not pointing to 8th node anymore and denoting end of list at 7th node
	delete last;  // last node is erased from memory
	last = trail; // last ptr is now pointing to to trail which is 7th node

	q = p->link->link->link; q->info = 60;
	cout << five->info << endl;

	//#4

	p->link->info = 24;
	q = current->link;
	first = list->link;
	trail = p->link;
	temp->link->info = 54;

	while (first->info != 5)
	{
		first = first->link;
	}
	cout << first->info;

	// Show application close
	cout << "\nEnd of Linked List" << endl;
}