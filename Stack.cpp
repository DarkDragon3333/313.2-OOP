#include <string>
#include "Stack.h"
Stack::Stack(string name, int max_size) {
	this->name = name;
	this->max_size = max_size;
	this->elements = new int[max_size];
	this->size = 0;
}
bool Stack::add_element(int element) {
	if (this->size == this->max_size) {
		return false;
	}
	this->elements[this->size] = element;
	this->size++;
	return true;
}
bool Stack::get_element(int& element) {
	if (this->size > 0) {
		element = this->elements[this->size - 1];
		this->size--;
		return true;
	}
	else {
		return false;
	}
}
string Stack::get_name() {
	return this->name;
}
int Stack::get_max_size() {
	return this->max_size;
}
int Stack::get_size() {
	return this->size;
}
Stack::~Stack() {
	delete[] this->elements;
}
