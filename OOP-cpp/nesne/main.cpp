#include <iostream>
#include "Kare.cpp"

using namespace std;

int main() {
	Kare ilkKare;
	Kare ikinciKare(6);
	cout << "ilk kare kenar constructurla: " << Kare.kenarGetir()<<endl;
	cout << "ikinci kare kenar metodla: "<< Kare.kenarGetir()<<endl;
	
	ilkKare.kenarDegistir(14);
	
	cout << "ilk Karenin kenarinin boyutu: " << ilkKare.kenarGetir()<< endl;
	cout <<"Karenin alani: " <<ilkKare.alanBul()<<endl;
	cout <<"Karenin cevresi: "<< ilkKare.cevreBul()<<endl;
		
		
	cout << "ikinci Karenin kenarinin boyutu: " << ikinciKare.kenarGetir()<< endl;
	cout <<"Karenin alani: " <<ikinciKare.alanBul()<<endl;
	cout <<"Karenin cevresi: "<< ikinciKare.cevreBul()<<endl;
		

}
