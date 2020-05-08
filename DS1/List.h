#pragma once
#include "Node.h"
class List
{
private:
	Node* head;
	int size;
public:
	void append(int val);
	void print();
	void insert(int index, int val);
	List();
	~List();
};

