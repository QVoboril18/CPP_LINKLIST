#include "stdafx.h"
#include "Node.h"
#include <string>


Node::Node()
{
}




std::string  Node::getData() const
{
	return dat;
}

void Node::setData(std::string data)
{
	dat = data;
}

void Node::setNext(Node* a)
{
	b = a;
}

Node*  Node::getNode() const
{
	
	return b;
}





