#include "List.h"
#include <iostream>
using namespace std;

List::List()
{
	cout << "Enter the size of the list: ";
	cin >> size;
	cout << endl;
	NoOfElements = 0;
	A = new int[size];
}

void List::insertAtEnd()
{
	int value;
	cout << "Enter the value to insert: ";
	cin >> value;
	if (NoOfElements == size)
		cout << "List is already full!!" << endl;
	else
		A[NoOfElements] = value;
	NoOfElements++;
	cout << "Value inserted successfully!!" << endl;

}

void List::insertAtStart()
{
	int value;
	cout << "Enter the value to insert: ";
	cin >> value;
	if (NoOfElements == size)
		cout << "List is already full!!" << endl;
	else
	{
		for (int i = NoOfElements; i > 0; i--)
			A[i] = A[i - 1];
		A[0] = value;
		NoOfElements++;
		cout << "Value inserted successfully!!" << endl;

	}

}

bool List::findValue()
{
	int value;
	cout << "Enter the value to search: ";
	cin >> value;
	bool found = false;
	for (int i = 0; i < NoOfElements && found == false; i++)
	{
		if (A[i] == value)
			found = true;
		return true;
	}
	if (found == false)
	{
		cout << "Value did'nt found!!" << endl;
		return false;

	}
		

}



void List::deleteFirstValue()
{
	if (NoOfElements == 0)
		cout << "List is already empty!!" << endl;
	else
	{
		for (int i = 0; i < NoOfElements; i++)
			A[i] = A[i + 1];
		NoOfElements--;
		cout << "First value is deleted successfully!!" << endl;

	}

}


void List::deleteLastValue()
{
	if (NoOfElements == 0)
		cout << "List is already empty!!" << endl;
	else
		NoOfElements--;
}



void List::deleteAnyValue()
{
	int value;
	cout << "Enter the value which you want to delete: ";
	cin >> value;

	if (NoOfElements == 0)
		cout << "List is empty, you can't delete any value" << endl;
	else
	{
		for (int i = 0; i < NoOfElements; i++)
		{
			if (A[i] == value)
			{
				NoOfElements--;
				for (int j = i; j < NoOfElements; j++)
					A[j] = A[j + 1];
				cout << "Value deleted successfully!!" << endl;
			}
		}
		cout << "Value does'nt found!!" << endl;

	}
}

void List::getAnyValue()
{
	unsigned int index;
	cout << "Enter the index from which you want a value: " << endl;
	cin >> index;
	if (NoOfElements == 0)
		cout << "List is empty, you can't get any value" << endl;
	else if (index >= size)
		cout << "Index is out of bound" << endl;
	else if (index >= NoOfElements)
		cout << "Value is not found at the given index" << endl;
	else
		cout << A[index] << endl;
}
void List::displayAllValues()
{
	if (NoOfElements == 0)
		cout << "List is empty!!" << endl;
	else
	{
		for (int i = 0; i < NoOfElements; i++)
			cout << A[i] << endl;
	}

}
List::~List()
{
	delete []A;
}