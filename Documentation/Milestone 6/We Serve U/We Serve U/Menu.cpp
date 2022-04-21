#include "Menu.hpp"

LinkedList::LinkedList() {
	pHead = nullptr;
}

LinkedList::~LinkedList() {
	deleteList(pHead);
}

Node* LinkedList::getHead() const {
	return pHead;
}

bool LinkedList::insertFront(string n, string d, double p, bool a) {
	Node* pMem = new Node(n, d, p, a);
	if (pMem != nullptr) 
	{
		pMem->setNext(pHead);
		pHead = pMem;
		return true;
	}
	return false;
}

bool LinkedList::deleteItem(const string n) 
{
	Node* pMem = pHead;
	Node* pPrev = nullptr;
	bool isDeleted = false;
	if (pMem != nullptr) 
	{
		while (pMem->getName() != n) {
			pPrev = pMem;
			pMem = pMem->getNext();
		}
		if (pMem->getName() == n)
		{
			pPrev->setNext(pMem->getNext());
			isDeleted = true;
		}
		else // it should be null
		{
			isDeleted = false;
		}

		delete pMem;
	}
	return isDeleted;
}

bool LinkedList::isPresentOnMenu(const string n)
{
	Node* pMem = pHead;
	Node* pPrev = nullptr;

	if (pMem != nullptr)
	{
		if (pMem->getName() == n)
			return true;

		while (pMem->getName() != n) 
		{
			pPrev = pMem;
			pMem = pMem->getNext();
			if (pMem->getName() == n)
				return true;
		}
		
	}
	return false;
}

void LinkedList::deleteList(Node* pCur) {
	if (pCur != nullptr) {
		deleteList(pCur->getNext());
		delete pCur;
	}
	else
		pHead = nullptr;
}