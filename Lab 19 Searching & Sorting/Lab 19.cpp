
#include <cstdlib> // For several general-purpose functions
#include <fstream> // For file handling
#include <iomanip> // For formatted output
#include <iostream> // For cin, cout, and system
#include <string> // For string data type
#include <vector> //
using namespace std; // So "std::cout" may be abbreviated to "cout"

void bubbleSort(int list[], int length)
{
	int temp, iteration, index;

	for (iteration = 0; iteration < length-1; iteration++)
	{
		for ( index = 0; index  < length-iteration-1; index++)
		{
			if (list[index] > list[index+1])
			{
				temp = list[index];
				list[index] = list[index + 1];
				list[index + 1] = temp;
			}
		}
	}
}

void insertionSort(int list[], int length)
{
	int firstOutOfOrder, location, temp;
	
	for (firstOutOfOrder = 1; firstOutOfOrder < length; firstOutOfOrder++)
	{
		if (list[firstOutOfOrder] < list[firstOutOfOrder-1])
		{
			temp = list[firstOutOfOrder];
			location = firstOutOfOrder;

			do
			{
				list[location] = list[location - 1];
				location--;
			} while (location > 0 && list[location - 1] > temp);

			list[location] = temp;
		}
	}
}

int binarySearch(int list[], int length, int searchItem)
{
	int first = 0, last = length - 1, mid;
	bool found = false;

	while (first <= last && !found)
	{
		mid = (first + last) / 2;
		if (list[mid] == searchItem)
		{
			found = true;
		}
		else if (list[mid] > searchItem)
		{
			last = mid - 1;
		}
		else
		{
			first = mid + 1;
		}
	}

	if (found)
	{
		return mid;
	}
	else
	{
		return -1;
	}
}

int sequentialSearch(int list[], int length, int searchItem)
{
	int loc;
	bool found = false;
	loc = 0;

	while (loc < length && !found)
	{
		if (list[loc] == searchItem)
		{
			found = true;
		}
		else
		{
			loc++;
		}
	}

	if (found)
	{
		return loc;
	}
	else
	{
		return -1;
	}
}

void printVector(int list[],int length)
{
	for (int i = 0; i < length; i++)
	{
		cout << list[i] << " ";
	}

	cout << endl;
}

int main()
{

  // Declare variables
	int intList1[10] = { 20,59,102,77,13,14,90,55,42,83 };
	int intList2[10] = { 20,59,102,77,13,14,90,55,42,83 };
	
  // Show application header
  cout << "Welcome to Sorting & Searching!" << endl;
  cout << "-------------------------------" << endl << endl;

  // #1
  cout << "Unsorted: ";
  printVector(intList1, 10);
  cout << "Bubble Sort: ";
  bubbleSort(intList1, 10);
  printVector(intList1, 10);
  cout << "Location: " << sequentialSearch(intList1, 10, 59)<< endl;

  //#2
  cout << "\nUnsorted: ";
  printVector(intList2, 10);
  cout << "Insertion Sort: ";
  insertionSort(intList2, 10);
  printVector(intList2, 10);
  cout << "Location: " << binarySearch(intList2, 10, 83) << endl;

  // Show application close
  cout << "\nEnd of Sorting & Searching" << endl;

}
