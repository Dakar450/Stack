#include "OutOfBoundsException.hpp"
using namespace std;

OutOfBoundsException::OutOfBoundsException(int idx):m_index(idx){}
OutOfBoundsException::~OutOfBoundsException(){}
string OutOfBoundsException::GetMessage() const{
	stringstream ss;
	ss << "The index " << m_index << " is out of bounds.";
	string stringException = ss.str();
	return stringException;
}