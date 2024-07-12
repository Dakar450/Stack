//OutOfBoundsException.hpp
//out of bounds exception for array class

#ifndef OutOfBoundsException_HPP
#define OutOfBoundsException_HPP
#include <iostream>
#include <string>
#include <sstream>
#include "ArrayException.hpp"
using namespace std;

class OutOfBoundsException :public ArrayException {
private:
	int m_index;
public:
	OutOfBoundsException(int index);
	~OutOfBoundsException();
	string GetMessage() const;
};

#endif