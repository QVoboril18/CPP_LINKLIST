#pragma once
#include "Node.h"
class Linkedlist
{
public:
	Linkedlist();
	Linkedlist(Node a, Node b);
	
	void enqueue(Node n);
	std::string  dequeue();

private:
	Node prev;
	Node top;
};

