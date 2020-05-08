#include <iostream>
#include<assert.h>
#include "Stack.h"
#include "Stack.cpp"
using namespace std;

int main()
{
	Stack<int> st;
	st.push(1);
	st.push(2);
	st.push(3);
	cout << st.top() << endl;
	st.pop();
	cout << st.top() << endl;
	st.pop();
	cout << st.top() << endl;
	st.pop();
	cout << st.top() << endl;
	return 0;
}