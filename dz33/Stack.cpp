#include "Stack.h"

bool isEmpty(const Stack& stack)
{
	if (stack.m_size == 0)
	{
		return true;
	}
	else
	{
		return false;
	}
} 

bool isFull(const Stack& stack)
{
	if (stack.m_size >= stack.m_capacity)
	{
		return true;
	}
	else
	{
		return false;
	}

}
void clear(Stack& stack)
{
	for (int i{}; i < stack.m_size; ++i)
	{
		stack.m_stack[i] = '\0';
	}
	stack.m_size = 0;
}

void resize(Stack& stack, int capacity)
{
	char* newStack = new char[capacity];
	for (int i{}; i < stack.m_size; ++i)
	{
		newStack[i] = stack.m_stack[i];
	}
	delete[] stack.m_stack;
	stack.m_stack = newStack;
	stack.m_capacity = capacity;

}

void push(Stack& stack, char symbol)
{
	if (stack.m_size >= stack.m_capacity)
	{
		resize(stack, stack.m_capacity + stack.m_grow);
	}
	stack.m_stack[stack.m_size] = symbol;
	++stack.m_size;
}

void pop(Stack& stack)
{
	for (int i{ stack.m_size - 1 }; i < stack.m_size - 1; ++i)
	{
		stack.m_stack[i] = stack.m_stack[i + 1];
	}
	--stack.m_size;
}
void show(const Stack& stack)
{
	for (int i{}; i < stack.m_size; ++i)
	{
		std::cout << "Element [" << i << "]: " << stack.m_stack[i] << std::endl;
	}
}

int size(const Stack& stack)
{
	return stack.m_size;
}
char top(const Stack& stack)
{
	return stack.m_stack[stack.m_size - 1];
}