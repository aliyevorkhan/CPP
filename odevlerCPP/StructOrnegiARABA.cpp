#include <iostream>
using namespace std;

struct Araba {
	string model;
	string renk;
	string vites;
	bool sporMu;
	int maxHiz;
};

void arabaYazdir(Araba araba) {
	cout << "Arabanin modeli: " << araba.model << endl;
	cout << "Arabanin rengi: " << araba.renk<< endl;
	cout << "Arabanin vitesi: " << araba.vites << endl;
	cout << "Araba spor mu?: " << araba.sporMu << endl;
	cout << "Arabanin max hizi: " << araba.maxHiz;
}

void hizKontrolu(Araba a1, Araba a2){
	
	if(a1.maxHiz > a2.maxHiz){
		cout<< a1.model + " arabasinin hizi " + a2.model + " arabasina gore daha cok" << endl;
	}
	else if(a1.maxHiz < a2.maxHiz){
		cout<< a2.model + " arabasinin hizi " + a1.model + " arabasina gore daha cok" << endl;
	}
	else{
		cout << a1.model + " ve " + a2.model + " arabalarinin hizlari esit" << endl;
	}
}

void boslukBirak(){
	cout << endl;
	cout << endl;
	cout << endl;
}

int main()
{
//Araba turunden araba1 ve araba2 olusturuluyor
	struct Araba araba1, araba2;

//araba1 icin tanimlamalar	
	araba1.model = "BMW";
	araba1.renk = "Kirmizi";
	araba1.vites = "Otomatik";
	araba1.sporMu = true;
	araba1.maxHiz = 320;

//araba2 icin tanimlamalar
	araba2.model = "Mercedes";
	araba2.renk = "Beyaz";
	araba2.vites = "Manuel";
	araba2.sporMu = false;
	araba2.maxHiz = 220;

  	cout<<"Araba1 icin ozellikler: " <<endl;
	arabaYazdir(araba1);
	
	boslukBirak();
	
	cout<<"Araba2 icin ozellikler: " <<endl;
	arabaYazdir(araba2);
	
	boslukBirak();
	
	cout << "Hiz kontrolu: " <<endl;	
	hizKontrolu(araba1, araba2);
	
}
