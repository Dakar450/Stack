//ArrayException.hpp
//Base class for array exceptions

#ifndef ArrayException_HPP
#define ArrayException_HPP
#include <iostream>
#include<string>
using namespace std;

class ArrayException {
public:
	virtual string GetMessage() const = 0;
};

#endif