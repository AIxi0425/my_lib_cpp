#ifndef STACK_ARRAY_H
#define STACK_ARRAY_H

#include <iostream>
using namespace std;

template<class Type>
class Stack 
{
private:
	int top, MaxSize;
	Type* stack;
public:
	explicit Stack(int Msize): MaxSize(Msize)
	{
		top = -1;
		stack = new Type[MaxSize];
	}
	~Stack()
	{
		delete [] stack;
	}
	inline bool Add(const Type item)
	{
		if (StackFull())
		{
			cout << "Stack is full!" << endl;	
			return false;
		}
		else
		{
			stack[++top] = item;
			return true;
		}
	}
	inline bool Delete(Type& item)
	{
		if (StackEmpty())
		{
			cout << "Stack is empty!" << endl;	
			return false;
		}
		else
		{
			item = stack[top--];
			return true;
		}
	}
	inline bool StackFull()
	{
		if (top >= (MaxSize-1))
			return true;
		else
			return false;
	}
	inline bool StackEmpty()
	{
		if (top < 0)
			return true;
		else
			return false;
	}
	void Print_stack()
	{
		for (int i = 0; i <= top; i++)
			cout << stack[i] << endl;
	}
};

#endif // endif stack_array.h
