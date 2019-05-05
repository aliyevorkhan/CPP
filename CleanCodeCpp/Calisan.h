#ifndef CALISAN_H
#define CALISAN_H

#include "Insan.h"
#include <iostream>

using namespace std;
class Calisan : public Insan
{
public:
  void setId(int id);
  void setMaas(int maas);
  void setPozisyon(string pozisyon);
  void setDepartman(string departman);
  int getId();
  int getMaas();
  string getPozisyon();
  string getDepartman();

  void zamYap(int oran);
  void zamYap(double oran);

protected:
  int id;
  int maas;
  string pozisyon;
  string departman;
};
#endif