#include <iostream>

using namespace std;

//ana sinif

class Sekil{
	public:
		Sekil(int a = 0, int b = 0){
			genislik = a;
			yukseklik = b;
		}
		virtual int alan(){
			cout << "Ana sinif alani: " << endl;
			return 0;
		}
		
	protected:
		int genislik;
		int yukseklik;
};




//miras alan sinif
class Dikdortken: public Sekil{
	public:
		Dikdortken( int a = 0, int b = 0):Sekil(a, b) { }
      
     	 int alan () { 
        	cout << "Dikdortken sinif alani: " <<endl;
         	return (genislik * yukseklik); 
      }
};


class Ucgen: public Sekil {
   public:
      Ucgen( int a = 0, int b = 0):Sekil(a, b) { }
      
      int alan () { 
         cout << "Ucgen sinif alani: " <<endl;
         return (genislik * yukseklik / 2); 
      }
};
int main() {
	Sekil *sekil;
	Dikdortken dik(10,7);
	Ucgen uc(10,5);
	
	//dikdortkenin adresini hafizada tutuyor
	sekil = &dik;
	//dikdortkenin alanini cagiriyor
	sekil -> alan();
	
	//ucgenin adresini hafizada tutuyor
	sekil = &uc;
	//ucgenin alanini cagiriyor
	sekil -> alan();
	
	
	return 0;
}
