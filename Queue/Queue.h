#pragma once
using namespace std;
class Queue
{
private:
	const int MAX_SIZE = 10;
	int data[10]{};
	int size = 0;
public:
	int pop();
	int top();
	int push(int value);
	bool IsFull();
	bool IsEmpty();
};