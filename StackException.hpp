#ifndef StackException_HPP
#define StackException_HPP

#include <sstream>
#include <iostream>
using namespace std;

class StackException
{
public:
	virtual string GetMessage() const = 0;
};
#endif