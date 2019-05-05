#include <iostream>

using namespace std;

int main() {
	int a = 1;
	
	int *ptr = &a;
	
	cout << "Location number of pointer: " << &a << endl;
	cout << "Location number of pointer: " << ptr << endl;
	
	cout << "Value of pointer: " << *ptr << endl;
	
	*ptr = 2; //has changed value of pointer
	
	cout << "New value of pointer: " << *ptr << endl;
	
	
}
