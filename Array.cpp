//Array.cpp
//Array source file
#ifndef Array_CPP
#define Array_CPP

#include "Array.hpp"
#include "OutOfBoundsException.hpp"

template <typename T>
int Array<T>::DefaultSize0 = 10;

template <typename T>
Array<T>::Array(): m_data(new T[DefaultSize0]), m_size(DefaultSize0) {}

template<typename T>
Array<T>::Array(int size): m_data(new T[size]), m_size(size){}

template <typename T>
Array<T>::~Array() 
{
	delete[] m_data;
    // cout << "destructor is used" << endl;
}

template <typename T>
Array<T>::Array(const Array<T>& other) : m_data(new T[other.m_size]), m_size(other.m_size) 
{
    for (int i = 0; i < m_size; i++) {
        m_data[i] = other.m_data[i];
    }
}

template <typename T>
Array<T>& Array<T>::operator =(const Array<T>& other) 
{
    if (this == &other) {
        return *this;
    }
    delete[] m_data;
    m_size = other.m_size;
    m_data = new T[m_size];
    for (int i = 0; i < m_size; i++) {
        m_data[i] = other.m_data[i];
    }
    return *this;
}

template <typename T>
void Array<T>::SetElement(int index, const T& data) {
    if (index >= 0 && index < m_size) {
        m_data[index] = data;
    }
    else {
        throw OutOfBoundsException(index);
    }
}

template <typename T>
T& Array<T>::GetElement(int index) const{
    if (index >= 0 && index < m_size) {
        return m_data[index];
    }
    else {
        throw OutOfBoundsException(index);
    }
}

template <typename T>
T& Array<T>::operator [](int index) {
    if (index >= 0 && index < m_size) {
        return m_data[index];
    }
    else {
        throw OutOfBoundsException(index);
    }
}


template <typename T>
const T& Array<T>::operator [](int index) const{
    if (index >= 0 && index < m_size) {
        return m_data[index];
    }
    else {
        throw OutOfBoundsException(index);
    }
}

template <typename T>
void Array<T>::DefaultSize(int newsize) {
    DefaultSize0 = newsize;
}


#endif