#include <iostream>

using namespace std;

void changeValue(int *ptr){
	*ptr = 20;
	cout << "The value in function: " << *ptr << endl;
	
}

int main() {
	int b = 5;
	cout << "the value of b: " << b << endl;
	changeValue(&b);
	cout << "The new value of  variable of b: " << b << endl;
	
}
