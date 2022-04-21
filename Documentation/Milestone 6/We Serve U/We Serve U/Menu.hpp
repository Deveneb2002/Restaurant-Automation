#pragma once
#include "Item.hpp"

class LinkedList {
public:
	LinkedList();
	~LinkedList();
	Node* getHead() const;
	bool insertFront(string n, string d, double p, bool a);
	bool deleteItem(const string n);
	bool isPresentOnMenu(const string n);
	void deleteList(Node* pCur);
private:
	Node* pHead;
};