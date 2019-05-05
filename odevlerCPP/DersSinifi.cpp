#include <iostream>
using namespace std;

class Ders
{
  private:
    int ogrSayi;
    int odevSayi;
    double **notlar;
    double *odevOrtalama;
    double *ogrOrtalama;

  public:
    Ders(int ogrSayi = 4, int odevSayi = 3)
    {
        this->ogrSayi = ogrSayi;
        this->odevSayi = odevSayi;
        odevOrtalama = new double[odevSayi];
        ogrOrtalama = new double[ogrSayi];
        notlar = new double *[ogrSayi];

        for (int i = 0; i < ogrSayi; i++)
        {
            notlar[i] = new double[odevSayi];
        }
    }
    ~Ders(){
        delete ogrOrtalama;
        delete odevOrtalama;
        for(int i =0; i<ogrSayi; i++){
            delete notlar[i];
        }
        delete notlar;
    }

    void notlarOku()
    {
        for (int i = 0; i < ogrSayi; i++)
        {
            cout << i + 1 << ". ogrencinin" << endl;
            for (int j = 0; j < odevSayi; j++)
            {
                cout << j + 1 << ". notu" << endl;
                cin >> notlar[i][j];
            }
        }
    }

    void ogrOrtalamaBul()
    {
        double toplam = 0;
        for (int i = 0; i < ogrSayi; i++)
        {
            toplam = 0;
            for (int j = 0; j < odevSayi; j++)
            {
                toplam += notlar[i][j];
            }
            ogrOrtalama[i] = toplam / odevSayi;
            cout << i + 1 << ". ogrencinin ortalamasi" << ogrOrtalama[i] << endl;
        }
    }

    void odevOrtalamaBul()
    {
        double toplam = 0;
        for (int j = 0; j < odevSayi; j++)
        {
                toplam= 0;
            for (int i = 0; i < ogrSayi; i++)
            {
                toplam += notlar[i][j];
            }
            odevOrtalama[j] = toplam/ogrSayi;

            cout << j + 1 << ". odevin ortalamasi" << odevOrtalama[j] << endl;
        }
    }

    double* ogrenciNotlarPtr(int i){
        return notlar[i];
    }
};

int main()
{
    Ders nyp;
    nyp.notlarOku();
    nyp.ogrOrtalamaBul();
    nyp.odevOrtalamaBul();

    double *ogrNot;
    ogrNot = nyp.ogrenciNotlarPtr(3);
    cout<< ogrNot[2]<<endl;
}
