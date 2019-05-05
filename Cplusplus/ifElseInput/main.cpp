#include <iostream>

using namespace std;

int main() {
	string password = "1234";
	
	string input; 
	
	cout << "Please enter the password: ";
	
	cin >> input;
	
	if(password == input){
		cout << "Your password has been CORRECT!";
	}
	else{
		cout << "Your password has been INVALID!";
	}
}
