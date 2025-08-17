#pragma once
#include <iostream>

class Stack
{
	char *m_stack;
	int m_capacity;
	int m_size;
	int m_grow;

public:
	Stack(int capacity) : m_capacity {capacity} 
	{
		m_stack = new char[m_capacity];
		m_size = 0;
		m_grow = 5;
	}

	int size();
	char top();
	bool isEmpty();
	bool isFull();
	void clear();
	void resize(int capacity);
	void push(char symbol);
	void pop();
	void show();

	~Stack()
	{
		delete[] m_stack;
	}

};

