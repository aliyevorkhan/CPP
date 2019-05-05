#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <iostream>

using namespace std;
 
class Employee
{
	public:
		void setName(string newName);
		string getName();
		
		void setAge(int newAge);
		int getAge();
		
		void setId(int newId);
		int getId();
		
		void setSalary(int newSalary);
		int getSalary();
				
		void raiseSalary(int raiseAmount);
		
		
	private:
		string name;
		int age;
		int id;	
		int salary;	
};

#endif
