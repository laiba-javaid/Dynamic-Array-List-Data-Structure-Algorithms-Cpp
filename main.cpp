#include "List.h"
#include<string>
#include<iostream>
using namespace std;

int main()
{
	List list;
	unsigned int choice;
	char choice1;
	cout << "1. Insert Value at End" << endl;
	cout << "2. Insert Value at Start" << endl;
	cout << "3. Delete First Value " << endl;
	cout << "4. Delete Last Value" << endl;
	cout << "5. Delete Any Value" << endl;
	cout << "6. Find a Value" << endl;
	cout << "7. Search any Value" << endl;
	cout << "8. Display all Values" << endl;
	cout << "9. Exit" << endl;

	do
	{
		cout << "Enter your choice" << endl;
		cin >> choice;
		switch (choice)
		{
	    case 1:
			list.insertAtEnd();
			break;
	    case 2:
	     	list.insertAtStart();
		    break;
	    case 3:
		    list.deleteFirstValue();
		    break;
	    case 4:
		    list.deleteLastValue();
		    break;
	    case 5:
		    list.deleteAnyValue();
		    break;
 	    case 6:
		    list.findValue();
		    break;
	    case 7:
		    list.getAnyValue();
		    break;
	    case 8:
		    list.displayAllValues();
		    break;
	    case 9:
		    exit(0);
		    break;
	    default:
		    cout << "Invalid choice!!" << endl;
		    break;
	    }
		cout << "Do you again want to enter anything?" << endl;
		cin >> choice1;
	} while (choice1 == 'y');


	return 0;
}