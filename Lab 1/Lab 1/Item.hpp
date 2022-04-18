#pragma once
#include <iostream>
using namespace std;

class Node {
public:
	Node(string n, string d, double p, bool a);
	~Node();
	string getName() const;
	string getDescription() const;
	double getPrice() const;
	bool getAvailability() const;
	Node* getNext() const;
	void setName(string n);
	void setDescription(string d);
	void setPrice(double p);
	void setAvailability(bool a);
	void setNext(Node* ptr);
private:
	string name;
	string description;
	double price;
	bool availability;
	Node* pNext;
};