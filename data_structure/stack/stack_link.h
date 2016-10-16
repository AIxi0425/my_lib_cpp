#ifndef STACK_LINK_H
#define STACK_LINK_H

#include <iostream>
using namespace std;

template<class Type>
class Stack_link{
private:
	struct Link_node{
		Type data;
		struct Link_node *link;
	}*top;
public:
	explicit Stack_link()
	{
		top = NULL;
	}
	~Stack_link()
	{
		struct Link_node* tmp;
		while (top)
		{
			tmp = top;
			top = top->link;
			delete tmp;
		}
	}
	inline bool Add(const Type item)
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
	inline bool Delete(Type& item)
	{
		if (StackEmpty())
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
			//delete tmp;
			return true;	
		}
	}
	inline bool StackEmpty()
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
#endif // endif stack_link.h
