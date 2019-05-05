#include <iostream>

using namespace std;

class Ogrenci{
    public:
        ///farkli turden constructorlar;
        Ogrenci():araSinavNot(0),finalNot(0){
            cout << "Parametresiz yapici fonksiyon"<<endl;
            sayac ++;
        }
        Ogrenci(double a, double f):araSinavNot(a),finalNot(f){
            cout<< "Parametreli yapici fonksiyon"<<endl;
            sayac ++;
        }
///./////////////////////////////////////////////////////////////.///
        ~Ogrenci(){///yikici fonk
            cout << "yikici fonksiyon"<<endl;
        }

        void setAraSinavNot(double asn){
            this -> araSinavNot = asn;
        }
        void setFinalNot(double fn){
            this ->finalNot =fn;
        }

        double getAraSinavNot(){
            return this -> araSinavNot;
        }

        double getFinalNot(){
            return this -> finalNot;
        }

        friend void OgrenciYazdir(Ogrenci ogrenci);

        double Ortalama(){
            this ->ortalama = 0.5 * this ->araSinavNot + 0.5 * this ->finalNot;
            toplam += this -> ortalama;
            return this ->ortalama;
        }

        static void turetildiMi(){
            if(sayac == 0){
                cout << "Obje turetilmedi"<<endl;
            }
            else{
                cout << "Obje turetildi"<<endl;
            }
        }
        static double toplam;
        static int sayac;

    private:
        double araSinavNot;
        double finalNot;
        double ortalama;
};

    void OgrenciYazdir(Ogrenci ogrenci){
        cout << "arasinav: "<<ogrenci.araSinavNot<<endl;
        cout << "final: "<<ogrenci.finalNot<<endl;
        cout << "ortalama: "<<ogrenci.ortalama<<endl;

    }
    int Ogrenci::sayac = 0;
    double Ogrenci::toplam = 0;
int main()
{
    Ogrenci::turetildiMi();

    Ogrenci ogr1[5] = {Ogrenci(10,20), Ogrenci(55,43)}; ///5 kez nesne olusturdu, ilk 2 parametreli 3 parametresiz yapici fonksiyon calisti

    Ogrenci::turetildiMi();

    Ogrenci ogr2(50, 60); /// 1 kez nesne olusturuldu parametreli yapici fonk calisti

    Ogrenci *ogrPtr; ///bellekte bir yeri gostemyen cansiz nesne olusturuldu bu yuzden yapici fonklar calismaz

    ogrPtr = new Ogrenci(70,90); /// bir ust satirdaki pointer kullanilarak nesne olusturuluyor ve Parametreli yapici fonk calisti;

    Ogrenci *ogrPtr1 = new Ogrenci[20];

        ///cout << ogr1[1].Ortalama()<<endl;

        ///cout << ogrPtr ->Ortalama() << endl;

        ///cout << (*ogr1).Ortalama()<<endl;

        ///cout << (*(ogr1 + 1)).Ortalama()<< endl;


        cout << "Ogrenci sayisi: " <<Ogrenci::sayac<<endl;


    delete ogrPtr; /// pointer ile olusturulmus nesne yikici fonk cagrilip siliniyor



    //OgrenciYazdir(ogr2);



    return 0;
}
