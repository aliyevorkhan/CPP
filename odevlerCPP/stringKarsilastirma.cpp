#include <iostream>

using namespace std;

int main()
{
    int harfSayi = 0;
    int sayac    = 0;
    double puan  = 0;

    cout<<"Kac harfli kelimeler gireceksiniz?: "<<endl;
    cin>>harfSayi;

    char kelime1[harfSayi];
    char kelime2[harfSayi];

    cout<<"Lutfen 1. kelimeyi giriniz: "<<endl;
    for(int i=0; i<harfSayi; i++){
        cin>>kelime1[i];
    }
    cout<<"Lutfen 2. kelimeyi giriniz: "<<endl;
    for(int j=0; j<harfSayi; j++){
        cin>>kelime2[j];
    }

    for(int k = 0; k<harfSayi; k++){
        if(kelime1[k] == kelime2[k]){
            sayac += 1;
            cout<<k+1<<". harf eslesti" <<endl;
        }
        else if(kelime1[k] != kelime2[k]){
            cout<<k+1<<". harf eslesmedi#" <<endl;
        }
    }

    puan = (sayac*100) / harfSayi ;

    cout<<"Benzerlik puani (%100 uzerinden): " << "%" <<showpoint<< puan<<endl;
    return 0;
}
