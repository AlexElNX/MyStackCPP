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
	int size()
	{
		return m_size;
	}
	bool isEmpty()
	{
		if (m_size == 0)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	bool isFull()
	{
		if (m_size >= m_capacity)
		{
			return true;
		}
		else 
		{
			return false;
		}

	}
	void clear()
	{
		for(int i{}; i < m_size; ++i)
		{
			m_stack[i] = '\0';
		}
		m_size = 0;
	}
	char top()
	{
		return m_stack[m_size - 1];
	}
	void resize(int capacity)
	{
		char* newStack = new char[capacity];
		for (int i{}; i < m_size; ++i)
		{
			newStack[i] = m_stack[i];
		}
		delete[] m_stack;
		m_stack = newStack;
		m_capacity = capacity;

	}

	void push(char symbol)
	{
		if (m_size >= m_capacity)
		{
			resize(m_capacity + m_grow);
		}
		m_stack[m_size] = symbol;
		++m_size;
	}
	void pop()
	{
		for (int i{m_size-1}; i < m_size - 1; ++i)
		{
			m_stack[i] = m_stack[i + 1];
		}
		--m_size;
	}
	void show()
	{
		for (int i{}; i < m_size; ++i)
		{
			std::cout << "Element [" << i << "]: " << m_stack[i] << std::endl;
		}
	}

	~Stack()
	{
		delete[] m_stack;
	}

};

