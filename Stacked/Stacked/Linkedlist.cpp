#include "stdafx.h"
#include "Linkedlist.h"
#include <string>


Linkedlist::Linkedlist(Node a, Node b)
{
	prev = a;
	top = b;
}

Linkedlist::Linkedlist() {

}



void Linkedlist::enqueue(Node n)
{
	Node temp = top;
	top = n;
	top.setNext(&temp);
	

	
}

std::string Linkedlist::dequeue() 
{
	std::string datab = top.getData();
	Node* temp = top.getNode();
	
	top = *temp;
	

	return "hello";

}
