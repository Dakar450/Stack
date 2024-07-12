#include "Array.hpp"
#include "ArrayException.hpp"
#include "OutOfBoundsException.hpp"
#include "Stack.hpp"
#include <iostream>

using namespace std;
int main() {
	try
	{
		Stack<int, 10> stack0;
		for (int i = 0; i < 10; i++)
		{
			stack0.Push(i);
		}
		Stack<int,10> stack1(stack0);
		// Test Pop().
		for (int i = 0; i < 10; i++)
		{
			cout << stack1.Pop() << endl;
		}
		stack1.Pop();
		stack0.Push(1.0);

	}
	catch (StackException& err)
	{
		cout << err.GetMessage() << endl;	
	}
	return 0;
}