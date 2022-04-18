#pragma once
#include "Item.hpp"

class LinkedList {
public:
	LinkedList();
	~LinkedList();
	Node* getHead() const;
	void insertFront(string n, string d, double p, bool a);
	void deleteItem(const string n);
	void deleteList(Node* pCur);
private:
	Node* pHead;
};