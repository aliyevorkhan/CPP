#include <iostream>
#include "Insan.h"
#include "Calisan.h"
using namespace std;

int main()
{
    Insan insan;

    Calisan calisan;
    calisan.setMaas(100);
    cout << calisan.getMaas() << endl;
    calisan.zamYap(50);
    cout << calisan.getMaas() << endl;
    calisan.zamYap(10.0);
    cout << calisan.getMaas() << endl;

    return 0;
}