/*
 * 使用链表来实现一个Stack模板类
 * 变量命名style： 类名/结构体第一个字母大写；函数名第一个字母大写；变量名小写；使用下划线；
 */
#ifndef STACK_LIST_H
#define STACK_LIST_H

#include <iostream>
using namespace std;

template<class Type>
class Stack_list{
private:
	struct Link_node{
		Type data;
		struct Link_node *link;
	}*top;
public:
	explicit Stack_list()
	{
		top = NULL;
	}
	~Stack_list()
	{
		struct Link_node* tmp;
		// 释放申请的空间
		while (top)
		{
			tmp = top;
			top = top->link;
			delete tmp;
		}
	}
	inline bool Push(const Type item)
	{
		struct Link_node *tmp = new struct Link_node;
		if (tmp)
		{
			tmp->data = item;
			tmp->link = top;
			top = tmp;
			return true;	
		}
		else
		{
			cout << "out of space!" << endl;
			return false;
		}
	}
	inline bool Pop(Type& item)
	{
		if (Stack_empty())
		{
			cout << "stack is empty" << endl;
			return false;
		}
		else
		{
			item = top->data;
			struct Link_node *tmp = new struct Link_node;
			tmp = top->link;
			top = tmp;
			return true;	
		}
	}
	inline bool Stack_empty()
	{
		if (top)
			return false;
		else
			return true;
	}
	void Print_stack()
	{
		while(top->link)
		{
			cout << top->data << endl;
			top = top ->link;
		}
		
			cout << top->data << endl;
	}
};

#endif // endif stack_list.h
