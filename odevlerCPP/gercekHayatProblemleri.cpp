/*
  ORKHAN ALIYEV 
  338396
*/
#include <iostream>
using namespace std;

struct Insan{
  string ad;
  string soyad;
  double enerji;
  double boy;
  double kilo;
  int yas;

  void yemekYe(double kap){
    kilo = kilo+(kilo*kap)/1000;
    enerji = enerji + (enerji * kap)/100;
  }

  void uyu(double saat){
    kilo = kilo - (kilo * saat)/10000;
    boy = boy + (boy * saat)/10000;
  }

  void sporYap(double saat){
    kilo = kilo - (kilo * saat)/1000;

  }
};

struct Calisan{
  Insan insan;
  double maas;
  double itibar;
  string sirketPozisyonu;
  
  void calis(double saat){
    itibar = itibar + (itibar * saat)/100;
    insan.enerji = insan.enerji - (insan.enerji * saat)/100;
  }

  void molaVer(double saat){
    itibar = itibar - (itibar * saat)/100;
    insan.enerji = insan.enerji + (insan.enerji * saat)/100;
  }

};

void yazdir(Calisan calisan){
    cout<<"Ozellikler" <<endl;
    cout<<endl;
    cout<<"ad: " << calisan.insan.ad<<endl;
    cout<<"soyad: " << calisan.insan.soyad<<endl;;
    cout<<"enerji:" << calisan.insan.enerji<<endl;;
    cout<<"boy: " << calisan.insan.boy<<endl;;
    cout<<"kilo: " << calisan.insan.kilo<<endl;;
    cout<<"yas: " << calisan.insan.yas<<endl;;
    cout<<"maas: " << calisan.maas<<endl;;
    cout<<"itibar: " << calisan.itibar<<endl;;
    cout<<"sirketPozisyonu: " << calisan.sirketPozisyonu<<endl;;
}


int main() {
  int islemNo;

  Calisan calisanInsan1;
  calisanInsan1.insan.ad = "Orkhan";
  calisanInsan1.insan.soyad = "Aliyev";
  calisanInsan1.insan.enerji = 50;
  calisanInsan1.insan.boy = 178.1;
  calisanInsan1.insan.kilo = 82.3;
  calisanInsan1.insan.yas = 22;
  calisanInsan1.maas = 3200.0;
  calisanInsan1.itibar = 10;
  calisanInsan1.sirketPozisyonu = "Gelistirici";

  yazdir(calisanInsan1);

while(true){
  cout <<endl;
  cout << "yemek yesin: 1"<<endl;
  cout << "uyusun: 2"<<endl;
  cout << "spor yapsin: 3"<<endl;
  cout << "calissin: 4"<<endl;
  cout << "mola versin: 5"<<endl;
  cout << "Bir islem seciniz: ";
  cin>> islemNo;
  cout <<endl;
 

  if(islemNo == 1){
      calisanInsan1.insan.yemekYe(1);
  }
  else if(islemNo == 2){
      calisanInsan1.insan.uyu(8);
  }
  else if(islemNo == 3){
      calisanInsan1.insan.sporYap(2);
  }
  else if(islemNo == 4){
      calisanInsan1.calis(10);
  }
  else if(islemNo == 5){
      calisanInsan1.molaVer(1);
}
  yazdir(calisanInsan1);
   
}

/*
  Daha da gelistirile bilir, farkli Ozellikler eklenebilir
  Degerler kullanici tarafindan girilebilir
  Oyun haline getirilebilir
*/

}

/*
  ORKHAN ALIYEV 
  338396
*/
