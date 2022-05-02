#include "Menu.hpp"

LinkedList::LinkedList() {
	pHead = nullptr;
}

LinkedList::~LinkedList() {
	deleteList(pHead);
}

Node^ LinkedList::getHead(){
	return pHead;
}

void LinkedList::insertFront(System::String^ n, System::String^ d, double p, bool a) {
	Node^ pMem = gcnew Node(n, d, p, a);
	if (pMem != nullptr) {
		pMem->setNext(pHead);
		pHead = pMem;
	}
}

void LinkedList::deleteItem(const System::String^ n) {
	Node^ pMem = pHead;
	Node^ pPrev = nullptr;

	if (pMem != nullptr) {
		while (pMem->getName() != n) {
			pPrev = pMem;
			pMem = pMem->getNext();
		}

		pPrev->setNext(pMem->getNext());
		delete pMem;
	}
}

void LinkedList::deleteList(Node^ pCur) {
	if (pCur != nullptr) {
		deleteList(pCur->getNext());
		delete pCur;
	}
	else
		pHead = nullptr;
}