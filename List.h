#pragma once
class List
{
	int size;
	unsigned int NoOfElements;
	int* A;
public:
	List();
	void insertAtEnd();
	void insertAtStart();
	bool findValue();
	void deleteFirstValue();
	void deleteLastValue();
	void deleteAnyValue();
	void getAnyValue();
	void displayAllValues();
	~List();
};

