#include <iostream>
#include "Stack.h"
using namespace std;

int main() {
	char str[] = ( "Hello" );
	Stack obj1;
	obj1.push(1);
	obj1.push(2);
	obj1.push(3);
	int size = obj1.length();
	for (int i = 0; i < obj1.length(); i++)
	{
		cout << obj1.pop() << " ";
	}
	if (obj1.length() == 0)
	{
		cout << "\nstack is empty\n";
	}
	return 0;

}