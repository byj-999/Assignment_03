#include <iostream>
using namespace std;

#include "Invoice.h"

//Implementation of the constructor with four arguments inside
Invoice::Invoice (string num ,string des ,int purc ,int ite)
{
	setNumber (num);
	setDescription (des);
	setPurchased (purc);
	setItem (ite);
}

//Implementing the write of number
void Invoice::setNumber (string n) {
	number = n;
}

//Return the number value with the get function
string Invoice::getNumber () {
	return number;
}

//Implementing the write of description
void Invoice::setDescription (string d) {
	 description = d;
}

//Return the number value with the get function
string Invoice::getDescription () {
	return description;
}

//Implementing the write of purchased
void Invoice::setPurchased (int p) {
	purchased = p;
}

//Return the purchased value with the get function
int Invoice::getPurchased () {
	return purchased;
}

//Implementing the write of item
void Invoice::setItem (int i) {
	item = i;
}

//Return the price value with the get function
int Invoice::getItem () {
	return item;
}
