#ifndef _STACK_H
#define _STACK_H
#include <string>
using namespace std;
class Stack {
private:
	int max_size;
	int* elements;
	string name;
	int size;
public:
	Stack(string name, int max_size);
	bool add_element(int element);
	bool get_element(int& element);
	string get_name();
	int get_max_size();
	int get_size();
	~Stack();
};
#endif