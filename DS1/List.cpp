#include "List.h"
#include <iostream>
#include <assert.h>
using namespace std;
void List::append(int val)
{
	Node* newNode = new Node(val);
	if (head == nullptr)
	{
		head = newNode;
	}
	else
	{
		Node* last = head;
		while (last->next != nullptr)
		{
			last = last->next;
		}
		last->next = newNode;
	}
	size++;
}

void List::print()
{
	cout << "List :\n";
	Node* tmp = head;
	while (tmp != nullptr)
	{
		cout << tmp->value << ' ';
		tmp = tmp->next;
	}
	cout << endl;
}

void List::insert(int index, int val)
{
	assert(index <= size && index >= 0);
	Node* newNode = new Node(val);
	if (index == 0)
	{
		newNode->next = head;
		head = newNode;
	}
	else
	{
		int i = 0;
		Node* beforeLast = head;
		while (i < index - 1)
		{
			beforeLast = beforeLast->next;
			i++;
		}
		newNode->next = beforeLast->next;
		beforeLast->next = newNode;
	}
	size++;
}

List::List() : head(nullptr), size(0)
{

}

List::~List()
{
	while (head != nullptr)
	{
		Node* tmp = head->next;
		delete head;
		head = tmp;
	}
}