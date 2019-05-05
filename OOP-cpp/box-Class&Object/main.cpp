#include <iostream>

using namespace std;

class Kutu{
	public:
		void setUzunluk(double uzun){
			uzunluk = uzun;
		}
		void setGenislik(double genis){
			genislik = genis;
		}
		void setYukseklik(double yuksek){
			yukseklik = yuksek;
		}		
		double getVolume(void){
			return uzunluk*genislik*yukseklik;
		}
		
		//Overloading +
		Kutu operator + (const Kutu& k){
			Kutu kutu;
			kutu.genislik = this -> genislik + k.genislik;
			kutu.uzunluk = this -> uzunluk + k.uzunluk;
			kutu.yukseklik = this -> yukseklik + k.yukseklik;
			return kutu;
		}
			
	private:
		double uzunluk;
		double genislik;
		double yukseklik;
};

int main() {
	Kutu kutu1;
	Kutu kutu2;
	Kutu kutu3;
	double hacim = 0.0;
	
	//kutu1'in ozellikleri
	kutu1.setYukseklik(5.0);
	kutu1.setUzunluk(6.0);
	kutu1.setGenislik(7.0);
	
	//kutu2'nin ozellikleri
	kutu2.setYukseklik(10.0);
	kutu2.setUzunluk(12.0);
	kutu2.setGenislik(14.0);	
	
	//kutu1 icin hacim
	hacim = kutu1.getVolume();
	cout << "Kutu1'in hacim: " << hacim << endl;
	//kutu2 icin hacim
	hacim = kutu2.getVolume();
	cout << "Kutu2'nin hacim: " << hacim << endl;
	
	kutu3 = kutu1 + kutu2;

	//kutu3 icin hacim
	hacim = kutu3.getVolume();
	cout << "Kutu3'un hacmi: " << hacim << endl;
	

	return 0;
}
