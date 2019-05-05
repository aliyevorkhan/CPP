#include <iostream>

using namespace std;

class Insan{
	public:
		string adi;
		int yas;
		int boy;
		int kilo;
		
	    void yemekYe(int yemekMiktari){
			kilo = kilo + yemekMiktari;
   		}
	    void sporYap(int sporSaati){
			kilo = kilo - sporSaati;
		}
        
};



class Isci: public Insan{
	public:
		int maas;
		int isSaati;
		
		void zamYap(int zamMiktari){
			maas = maas + zamMiktari;
		}
};

class Muhendis: public Isci{
	public:
		int projeSayi;
		
		void projeEkle(int yeniProjeSayi){
			projeSayi = projeSayi + yeniProjeSayi;
		}
};

int main() {
	Insan in1;
	Isci is1;
	Muhendis muh1;
	
	//Insan'i ozellestir
	in1.adi= "Ali";
	in1.boy = 170;
	in1.kilo = 65;
	in1.yas = 18;
	cout << "Insanin adi: " << in1.adi<< endl;
	cout << "Insanin boyu: " << in1.boy << endl;
	cout << "Insanin kilosu: " << in1.kilo << endl;
	cout << "Insanin yasi: " << in1.yas << endl;			
	
	in1.yemekYe(5);
	cout << "Insanin yemek yedikten sonraki kilosu: " << in1.kilo << endl;
	
	in1.sporYap(2);
	cout << "Insanin spor yaptiktan sonraki kilosu: " << in1.kilo << endl;	
	
	//Isci'ni ozellestir
	is1.adi = "Veli";
	is1.maas = 2500;
	cout << "Iscinin adi: " << is1.adi << endl; 
	cout << "Iscinin maasi: $" << is1.maas << endl;
	
	is1.zamYap(250);
	cout << "Iscinin zamdan sonraki maasi: $" << is1.maas << endl;
	
	//Muhendis'i ozellestir
	muh1.adi = "Ahmet";
	muh1.projeSayi = 5;
	cout << "Muhendisin adi: " << muh1.adi << endl;	
	cout << "Muhendisin proje sayisi: " << muh1.projeSayi << endl;
	
	muh1.projeEkle(2);
	cout << "Muhendisin guncel proje sayisi: " << muh1.projeSayi << endl;
	
	return 0;
}
