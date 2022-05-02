#pragma once
#include <iostream>
using namespace std;

ref class Node {
public:
	Node(System::String^ n, System::String^ d, double p, bool a);
	~Node();
	System::String^ getName();
	System::String^ getDescription();
	double getPrice();
	bool getAvailability();
	Node^ getNext();
	void setName(System::String^ n);
	void setDescription(System::String^ d);
	void setPrice(double p);
	void setAvailability(bool a);
	void setNext(Node^ ptr);
private:
	System::String^ name;
	System::String^ description;
	double price;
	bool availability;
	Node^ pNext;
};