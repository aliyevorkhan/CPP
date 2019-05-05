#include <iostream>
#include <fstream>
using namespace std;

int main()
{   double puan1, puan2, puan3;
    double ortalama;
    char ogrId;
    ifstream dosya1;
    ofstream dosya2;

    dosya1.open("input.txt", ios::in);
    dosya2.open("output.txt", ios::out);

    while(dosya1 >> ogrId >> puan1 >> puan2 >> puan3){
        ortalama = (puan1 + puan2 +puan3)/3;
        dosya2 <<"Ogrenci no: " << ogrId << endl << "Ortalama: " << ortalama << endl;
    }

}
