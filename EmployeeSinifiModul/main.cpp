#include "Employee.h"

int main() {
	Employee employee;
	
	employee.setName("Orkhan");
	employee.setAge(20);
	employee.setId(001);
	employee.setSalary(1500);	

	cout << employee.getSalary()<<endl;
	
	employee.raiseSalary(1500);
	
	cout << employee.getSalary()<<endl;
	
	
		
	return 0;
}
