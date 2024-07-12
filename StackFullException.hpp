#ifndef StackFullException_HPP
#define StackFullException_HPP

#include "StackException.hpp"
#include <sstream>
#include <iostream>
using namespace std;

class StackFullException: public StackException
{
public:
	StackFullException() {}
	~StackFullException() {}
	string GetMessage() const {
		string errormessage = "stack has already been full";
		return errormessage;
	}
};
#endif