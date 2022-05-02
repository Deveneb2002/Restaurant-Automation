#pragma once
#include "Item.hpp"

ref class LinkedList {
public:
	LinkedList();
	~LinkedList();
	Node^ getHead();
	void insertFront(System::String^ n, System::String^ d, double p, bool a);
	void deleteItem(const System::String^ n);
	void deleteList(Node^ pCur);
private:
	Node^ pHead;
};