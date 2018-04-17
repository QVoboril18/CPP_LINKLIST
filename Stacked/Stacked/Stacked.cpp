// Stacked.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Linkedlist.h"
#include "Node.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
	Node a, b, c;

	a.setData("word");
	b.setData("wow");
	c.setData("nice");

	Linkedlist list;



	list.enqueue(a);
	list.enqueue(b);
	list.enqueue(c);

	std::string x = list.dequeue();
	string y = list.dequeue();
	string z = list.dequeue();


	cout << x;
	cout << y;
	cout << z;




	return 0;

}

