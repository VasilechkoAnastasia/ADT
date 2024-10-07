#include <iostream>
#include "Queue.h"
using namespace std;

int Queue::pop()
{
	int result = data[0];
	int new_size = size - 1;
	for (int i = 0; i < size; i++)
	{
		data[i] = data[i + 1];
	}
	size--;
	return result;
}

int Queue::top()
{
	return data[0];
}

int Queue::push(int value)
{
	int  new_size = size + 1;
	int last = new_size - 1;
	data[last] = value;
	size += 1;
}

bool Queue::IsFull()
{
	return size == 10;
}

bool Queue::IsEmpty()
{
	return size == 0;
}


