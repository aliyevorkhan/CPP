#include <iostream>

using namespace std;


    const int halfDollar = 50;
    const int quarter = 25;
    const int dime = 10;
    const int nickel = 5;
    const int penny = 1;

int main()
{   int girilenPara;
    int cikanPara;

    cout << "cevirici icin parayi girin"<<endl;
    cin >> girilenPara;
    cout << endl;

    cikanPara = girilenPara / halfDollar;
    cout << cikanPara << "half dollar"<< endl;

    girilenPara = girilenPara % halfDollar;

    cikanPara = girilenPara / quarter;
    cout << cikanPara << "quarter"<< endl;

    girilenPara = girilenPara % quarter;

    cikanPara = girilenPara / dime;
    cout << cikanPara << "dime"<< endl;

    girilenPara = girilenPara % dime;

    cikanPara = girilenPara / nickel;
    cout << cikanPara << "nickel"<< endl;

    girilenPara = girilenPara % nickel;

    cikanPara = cikanPara / penny;
    cout << cikanPara << "penny"<< endl;

    return 0;
}
