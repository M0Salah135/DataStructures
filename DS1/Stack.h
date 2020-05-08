#pragma once
#include "Node.h"
#include "Node.cpp"

template <class T>
class Stack
{
private:
	Node<T>* head;
	int s;
public:
	void push(T val);
	void pop();
	bool empty();
	int size();
	T top();

	Stack();
	~Stack();
};

