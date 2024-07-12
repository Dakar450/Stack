// Stack.cpp
// Stack source file


#ifndef Stack_CPP
#define Stack_CPP

#include "Stack.hpp"
#include "StackEmptyException.hpp"
#include "StackFullException.hpp"

// Constructors
template <typename T,int size>
Stack<T,size>::Stack() : m_current(0),m_array(size){}

template <typename T, int size>
Stack<T,size>::Stack(int size) : m_current(0), m_array(size){}

template <typename T, int size>
Stack<T,size>::Stack(const Stack<T,size>& other) : m_current(other.m_current), m_array(other.m_array){}

// Destructor
template <typename T, int size>
Stack<T,size>::~Stack(){} 

// Assignment operator
template <typename T, int size>
Stack<T,size>& Stack<T,size>::operator = (const Stack<T,size>& source)
{ 
	if (this == &source)
	{
		return *this;
	}
	m_current = source.m_current;
	m_array = source.m_array;
	return *this;
}

template <typename T, int size>
T& Stack<T,size>::Pop()
{
	try
	{
		m_current--;
		return m_array[m_current];
	}
	catch (ArrayException& err) {
		throw StackEmptyException();
	}
}

template <typename T, int size>
void Stack<T,size>::Push(const T& new_data)
{
	try
	{
		m_array[m_current] = new_data;
		m_current++;
	}
	catch (ArrayException& err) {
		throw StackFullException();
	}
}

#endif