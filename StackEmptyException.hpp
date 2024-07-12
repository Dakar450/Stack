#ifndef StackEmptyException_HPP
#define StackEmptyException_HPP

#include "StackException.hpp"
#include <sstream>
#include <iostream>
using namespace std;

class StackEmptyException:public StackException
{
public:
	StackEmptyException(){}
	~StackEmptyException() {}
	string GetMessage() const {
		string errormessage = "stack has already been empty";
		return errormessage;
	}
};
#endif