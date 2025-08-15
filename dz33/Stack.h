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

	friend int size(const Stack&);
	friend char top(const Stack&);
	friend bool isEmpty(const Stack&);
	friend bool isFull(const Stack&);
	friend void clear(Stack&);
	friend void resize(Stack&, int capacity);
	friend void push(Stack&, char symbol);
	friend void pop(Stack&);
	friend void show(const Stack&);

	~Stack()
	{
		delete[] m_stack;
	}

};

