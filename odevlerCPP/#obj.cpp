#include "obj.h"
obj::obj(){
  araSinavNot = 50;
  finalNot    = 60;
}
double obj::ortalamaHesapla(){
  ortalamaNot = 0.5*araSinavNot + 0.5*finalNot;
  return ortalamaNot;
}
