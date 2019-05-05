#include "Employee.h"


//adi
void Employee :: setName(string newName){
	name = newName;
}
string Employee :: getName(){
	return name;
}
//yasi
void Employee :: setAge(int newAge){
	age = newAge;
}
int Employee :: getAge(){
	return age;
}
//id si
void Employee :: setId(int newId){
	id = newId;
}
int Employee :: getId(){
	return id;
}
//maasi
void Employee :: setSalary(int newSalary){
	salary = newSalary;
}
int Employee :: getSalary(){
	return salary;
}

//zamli maasi
void Employee :: raiseSalary(int raiseAmount){
	salary = salary + raiseAmount;
}






