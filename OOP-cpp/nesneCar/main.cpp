#include <iostream>
#include "Araba.cpp"

using namespace std;

int main() {
	Araba araba("BMW", 250);
	cout << "Arabanin modeli: " << araba.getModel()<<endl;
	cout << "Arabanin max hizi: " << araba.getHiz()<<endl;
	
	
	araba.setHiz(300);
	araba.setModel("Mercedes");
	cout<< "Arabanin yeni modeli : " << araba.getModel()<<endl;
	cout << "Arabanin yeni hizi: " << araba.getHiz()<<endl;
	
	Araba kulustur("Ferrari", 500);
	cout << "Kulusturun degerleri: " << kulustur.getHiz()<<" " << kulustur.getModel() <<endl;
	
	
}
