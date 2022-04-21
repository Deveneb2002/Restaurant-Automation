#include "Item.hpp"

Node::Node(string n, string d, double p, bool a) {
	name = n;
	description = d;
	price = p;
	availability = a;
	pNext = nullptr;
}

Node::~Node() {

}

string Node::getName() const {
	return name;
}

string Node::getDescription() const {
	return description;
}

double Node::getPrice() const {
	return price;
}

bool Node::getAvailability() const {
	return availability;
}

Node* Node::getNext() const {
	return pNext;
}

void Node::setName(string n) {
	name = n;
}

void Node::setDescription(string d) {
	description = d;
}

void Node::setPrice(double p) {
	price = p;
}

void Node::setAvailability(bool a) {
	availability = a;
}

void Node::setNext(Node* ptr) {
	pNext = ptr;
}