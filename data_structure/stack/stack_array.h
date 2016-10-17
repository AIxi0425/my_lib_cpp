/*
 * 使用数组来实现一个Stack模板类
 * 变量命名style： 类名/结构体第一个字母大写；函数名第一个字母大写；变量名小写；使用下划线；
 */
#ifndef STACK_ARRAY_H
#define STACK_ARRAY_H

#include <iostream>
using namespace std;

template<class Type>
class Stack_array
{
private:
	int top, max_size;
	Type* stack;
public:
	explicit Stack_array(int msize): max_size(msize)
	{
		top = -1;
		stack = new Type[max_size];
	}
	~Stack_array()
	{
		delete [] stack;
	}
	inline bool Push(const Type item)
	{
		if (Stack_full())
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
	inline bool Pop(Type& item)
	{
		if (Stack_empty())
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
	inline bool Stack_full()
	{
		if (top >= (max_size - 1))
			return true;
		else
			return false;
	}
	inline bool Stack_empty()
	{
		if (top < 0)
			return true;
		else
			return false;
	}
	void Print_stack()
	{
		for (int i = top; i >= 0; i--)
			cout << stack[i] << endl;
	}
};

#endif // endif stack_array.h
