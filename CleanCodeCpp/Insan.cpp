#include "Insan.h"

Insan :: Insan(string ad = "belirtilmedi", string soyad = "belirtilmedi", int yas = 0, double kilo = 0.0, double boy = 0.0){
    this->ad = ad;
    this->soyad = soyad;
    this->yas = yas;
    this->kilo = kilo;
    this->boy = boy; 
}
Insan :: Insan(){
    this->ad = "NULL";
    this->soyad = "NULL";
    this->yas = 0;
    this->kilo = 0.0;
    this->boy = 0.0;
}
Insan :: ~Insan(){
    cout << "Obje silindi" << endl;
}
void Insan ::setAd(string ad)
{
    this->ad = ad;
}

void Insan ::setSoyad(string soyad)
{
    this->soyad = soyad;
}

void Insan ::setYas(int yas)
{
    this->yas = yas;
}

void Insan ::setKilo(double kilo)
{
    this->kilo = kilo;
}
void Insan ::setBoy(double boy)
{
    this->boy = boy;
}

string Insan ::getAd()
{
    return ad;
}

string Insan ::getSoyad()
{
    return soyad;
}

int Insan ::getYas()
{
    return yas;
}

double Insan ::getKilo()
{
    return kilo;
}

double Insan ::getBoy()
{
    return boy;
}