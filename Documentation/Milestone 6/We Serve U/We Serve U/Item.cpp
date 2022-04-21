#include "Item.hpp"

Node::Node(System::String^ n, System::String^ d, double p, bool a) {
	name = n;
	description = d;
	price = p;
	availability = a;
	pNext = nullptr;
}

Node::~Node() {

}

System::String^ Node::getName(){
	return name;
}

System::String^ Node::getDescription(){
	return description;
}

double Node::getPrice(){
	return price;
}

bool Node::getAvailability(){
	return availability;
}

Node^ Node::getNext(){
	return pNext;
}

void Node::setName(System::String^ n) {
	name = n;
}

void Node::setDescription(System::String^ d) {
	description = d;
}

void Node::setPrice(double p) {
	price = p;
}

void Node::setAvailability(bool a) {
	availability = a;
}

void Node::setNext(Node^ ptr) {
	pNext = ptr;
}