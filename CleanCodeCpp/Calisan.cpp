#include "Calisan.h"

void Calisan ::setId(int id)
{
    this->id = id;
}

void Calisan ::setMaas(int maas)
{
    this->maas = maas;
}

void Calisan ::setPozisyon(string pozisyon)
{
    this->pozisyon = pozisyon;
}
void Calisan ::setDepartman(string departman)
{
    this->departman = departman;
}

int Calisan ::getId()
{
    return id;
}

int Calisan ::getMaas()
{
    return maas;
}

string Calisan ::getPozisyon()
{
    return pozisyon;
}

string Calisan ::getDepartman()
{
    return departman;
}

void Calisan ::zamYap(int oran)
{
    maas += (maas * oran) / 100;
}
void Calisan ::zamYap(double oran)
{
    maas += (maas * oran) / 100;
    (double)maas;
}