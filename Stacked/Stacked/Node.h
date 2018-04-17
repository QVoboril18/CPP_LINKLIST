#pragma once
#include <string>
class Node
{
public:
	Node();
	
	std::string  getData() const;
	void setData(std::string data);
	void setNext(Node* a);
	Node* getNode() const;

	
private:
	std::string dat;
	Node* b;
};

