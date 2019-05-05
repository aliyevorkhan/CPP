#include <iostream>
#define AK 0.5
#define FK 0.5
using namespace std;

class Ogrenci{
        public:
            //constructor parametre atamadan
            Ogrenci(){
                ortalamaHesaplandi = false;
                cout << "Nesne yaratildi" << endl;;
            }
            //constructor parametre atayarak
            Ogrenci(string a, string s, int i, double as, double f){
                ortalamaHesaplandi = false;
                ad = a;
                soyad = s;
                id = i;
                araSinavNot = as;
                finalNot = f;
            }
            //setters
            void setAd(string a){
                ad = a;
            }
            void setSoyad(string s){
                soyad = s;
            }
            void setId(int i){
                id = i;
            }
            void setArasinavNot(double asn){
                araSinavNot = asn;
            }
            void setFinalNot(double fn){
                finalNot = fn;
            }
            void setOrtalama(double o){
                ortalama = o;
            }
            void setHarfNot(string hn){
                harfNot = hn;
            }
            //getters
            string getAd(){
                return ad;
            }
            string getSoyad(){
                return soyad;
            }
            int getId(){
                return id;
            }
            double getAraSinavNot(){
                return araSinavNot;
            }
            double getFinalNot(){
                return finalNot;
            }
            double getOrtalama(){
                return ortalama;
            }
            string getHarfNot(){
                return harfNot;
            }
            //metodlar
            double OrtalamaHesapla(); // class disinda tanimlandi
            string HarfNotHesapla();// class disinda tanimlandi

            void tamYazdir(){
                cout << endl << endl;
                cout<<"AD: " <<ad <<endl;
                cout<<"SOYAD: " <<soyad<<endl;
                cout<<"ID: " <<id <<endl;
                cout<<"ARASINAV NOT: " <<araSinavNot<<endl;
                cout<<"FINAL NOT: " <<finalNot <<endl;
                cout<<"ORTALAMA: " <<ortalama<<endl;
                cout<<"HARFLI NOT: " <<harfNot <<endl;
            }
            void kisaYazdir();
        private:
            string ad;
            string soyad;
            int id;
            double araSinavNot;
            double finalNot;
            double ortalama;
            string harfNot;

            bool ortalamaHesaplandi;
};
//class icinde tanimlanan kismin yaptigi isler
double Ogrenci::OrtalamaHesapla(){
    ortalamaHesaplandi = true;
    ortalama = AK * araSinavNot + FK * finalNot;
    return ortalama;
}
string Ogrenci::HarfNotHesapla(){
  if(!ortalamaHesaplandi) harfNot = "E";
  if(ortalama<40) harfNot = "FF";
  else if(ortalama<45) harfNot = "DC";
  else if(ortalama<55) harfNot = "CC";
  else if(ortalama<65) harfNot = "CB";
  else if(ortalama<75) harfNot= "BB";
  else if(ortalama<85) harfNot = "BA";
  else if(ortalama<=100) harfNot = "AA";
  else harfNot = "E";

  return harfNot;

}
void Ogrenci::kisaYazdir(){
    cout << endl << endl;
    cout<<"AD: " <<ad <<endl;
    cout<<"SOYAD: " <<soyad<<endl;
    cout<<"ID: " <<id <<endl;
    cout<<"ARASINAV NOT: " <<araSinavNot<<endl;
    cout<<"FINAL NOT: " <<finalNot <<endl;
}
int main()
{
    Ogrenci ogr1; // ayrica constructor calisiyor
    //setlemeler
    ogr1.setAd("Gamze");
    ogr1.setSoyad("Ozturk");
    ogr1.setId(123);
    ogr1.setArasinavNot(95.5);
    ogr1.setFinalNot(96.6);
    //metod
    ogr1.OrtalamaHesapla();
    ogr1.HarfNotHesapla();
    //metod
    ogr1.tamYazdir();


    Ogrenci ogr2 ("Orkhan", "Aliyev" , 321, 100.0, 10.5);//parametreli constuctor
    ogr2.kisaYazdir();//metod


    return 0;
}
