#include <iostream>

using namespace std;

int main() {
	double baseSalary;
	int workYear;
	double totalSale;
	double bonus;
	double addBonus;
	double payCheck;
	
	cout << "Enter the base salary of worker: ";
	cin >> baseSalary;
	
	cout << "Enter the work year of worker:";
	cin >> workYear;
	
	if(workYear <= 5){
		bonus = workYear * 10;
	}else if(workYear > 5){
		bonus = workYear * 20;		
	}
	
	cout << "Enter the total sale of worker:";
	cin >> totalSale;
	
	if (totalSale > 5000 && totalSale < 10000){
		addBonus = (totalSale * 3)/100;
	}else if(totalSale>=10000){
		addBonus = (totalSale * 6)/100;
	}
	
	payCheck = bonus + addBonus + baseSalary;
	
	cout << "Total salary is : " << payCheck << endl;
	
}
