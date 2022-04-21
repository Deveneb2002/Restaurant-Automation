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

void LinkedList::insertFront(string n, string d, double p, bool a) {
	Node* pMem = new Node(n, d, p, a);
	if (pMem != nullptr) {
		pMem->setNext(pHead);
		pHead = pMem;
	}
}

void LinkedList::deleteItem(const string n) {
	Node* pMem = pHead;
	Node* pPrev = nullptr;

	if (pMem != nullptr) {
		while (pMem->getName() != n) {
			pPrev = pMem;
			pMem = pMem->getNext();
		}

		pPrev->setNext(pMem->getNext());
		delete pMem;
	}
}

void LinkedList::deleteList(Node* pCur) {
	if (pCur != nullptr) {
		deleteList(pCur->getNext());
		delete pCur;
	}
	else
		pHead = nullptr;
}