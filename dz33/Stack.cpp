#include "Stack.h"

bool Stack::isEmpty()
{
	return m_size == 0;
} 

bool Stack::isFull()
{
	return m_size >= m_capacity;
}
void Stack::clear()
{
	for (int i{}; i < m_size; ++i)
	{
		m_stack[i] = '\0';
	}
	m_size = 0;
}

void Stack::resize(int capacity)
{
	char* newStack = new char[capacity];
	m_size = m_size < capacity ? m_size : capacity;
	for (int i{}; i < m_size; ++i)
	{
		newStack[i] = m_stack[i];
	}
	delete[] m_stack;
	m_stack = newStack;
	m_capacity = capacity;

}

void Stack::push(char symbol)
{
	if (m_size >= m_capacity)
	{
		resize(m_capacity + m_grow);
	}
	m_stack[m_size] = symbol;
	++m_size;
}

void Stack::pop()
{
	for (int i{	m_size - 1 }; i < m_size - 1; ++i)
	{
		m_stack[i] = m_stack[i + 1];
	}
	--m_size;
}
void Stack::show()
{
	for (int i{}; i < m_size; ++i)
	{
		std::cout << "Element [" << i << "]: " << m_stack[i] << std::endl;
	}
}

int Stack::size()
{
	return m_size;
}
char Stack::top()
{
	return m_stack[m_size - 1];
}