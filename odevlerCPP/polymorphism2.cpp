#include <iostream>
using namespace std;
class dortgen
{
  public:
    virtual int alan(int taban, int yukseklik)
    {
        return taban * yukseklik;
    }
    int cevre(int taban, int yukseklik)
    {
        return 2 * (taban + yukseklik);
    }
};
class ucgen : public dortgen
{
  public:
    int alan(int taban, int yukseklik)
    {
        return (taban * yukseklik) / 2;
    }
};
int main()
{
    int a=1;
    dortgen *ptr;                    // ptr temel sınıfa ait bir pointer
    ucgen nesne1;                    //nesne1'de türemiş sınıfa ait bir nesne
    ptr = &nesne1;                   // Temel sınıfa ait bir pointera türemiş sınıfın adresini atayabiliriz
    cout << ptr->alan(3, 4) << endl; // Ekranda hangi şeklin alanı hesaplandı ?

    dortgen d;
    if(a) ptr = &d;
    cout<<ptr->alan(3,4)<<endl;                           
                                     // alan() fonksiyonu virtual tanımlandığı için türemiş sınıfın fonksiyonu çağrıldı.
                                     // alan() fonk. virtual olmasaydı, dortgen sınıfının alan() fonk. çağrılırdı - DENE!
    return 0;
}
