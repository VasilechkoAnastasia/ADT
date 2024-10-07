#pragma once
class Stack
{
private:
	int* data;
	int size;
public:
	Stack();
	~Stack();
	void push(int value);
	int top();
	int pop();
	void print();
	int length();
};

