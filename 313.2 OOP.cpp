#include "Stack.h"
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
	string name;
	int max_size;
	int element;
	cin >> name >> max_size;
	Stack stack1(name, max_size);
	cin >> name >> max_size;
	Stack stack2(name, max_size);
	while (true) {
		cin >> element;
		if (!stack1.add_element(element))
			break;
		if (!stack2.add_element(element))
			break;
	}
	cout << stack1.get_name() << " " << stack1.get_max_size() << "\n";
	cout << stack2.get_name() << " " << stack2.get_max_size() << "\n";
	cout << setw(15) << left << stack1.get_name() << setw(15) << left <<stack2.get_name() << "\n";
	while (stack1.get_size() + stack2.get_size()) {
		if (stack1.get_element(element))
			cout << setw(15) << right << element;
		if (stack2.get_element(element))
			cout << setw(15) << right << element;
		if (stack1.get_size() + stack2.get_size())
			cout << "\n";
	}
	return 0;

}
