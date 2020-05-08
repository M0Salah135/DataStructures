#include <iostream>
#include "List.h"
#include<assert.h>
using namespace std;

int main()
{
	List l;
	l.append(1);
	l.append(2);
	l.append(3);
	l.append(4);
	l.print();
	l.insert(-1, 100);
	l.print();
	return 0;
}