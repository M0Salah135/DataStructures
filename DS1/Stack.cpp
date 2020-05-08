#include "Stack.h"
#include <assert.h>
template<class T>
void Stack<T>::push(T val)
{
	Node<T>* newNode = new Node<T>(val);
	newNode->next = head;
	head = newNode;
	s++;
}

template<class T>
void Stack<T>::pop()
{
	assert(empty() == false);
	Node<T>* tmp = head->next;
	delete head;
	head = tmp;
	s--;
}

template<class T>
bool Stack<T>::empty()
{
	if (s == 0)
		return true;
	else
		return false;
}

template<class T>
int Stack<T>::size()
{
	return s;
}

template<class T>
T Stack<T>::top()
{
	assert(empty() == false);
	return head->value;
}

template <class T>
Stack<T>::Stack() : head(nullptr), s(0)
{
}

template<class T>
Stack<T>::~Stack()
{
	while (empty() == false)
		pop();
}
