#ifndef INSAN_H
#define INSAN_H

#include <iostream>

using namespace std;

class Insan
{
  public:
    Insan();
    Insan(string ad, string soyad, int yas, double kilo, double boy);
    ~Insan();
    void setAd(string ad);
    string getAd();

    void setSoyad(string soyad);
    string getSoyad();

    void setYas(int yas);
    int getYas();

    void setKilo(double kilo);
    double getKilo();

    void setBoy(double boy);
    double getBoy();

  protected:
    string ad;
    string soyad;
    int yas;
    double kilo;
    double boy;
};
#endif