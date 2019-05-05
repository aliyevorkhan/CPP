#include <iostream>
#include <fstream>
#include <Windows.h>
int t;
using namespace std;

struct Tarih{
	int yil;
	int ay;
	int gun;
	int saat;
	int dakika;
	int saniye;
};
struct Kisi{
	string ad;
	string soyad;
	string kullaniciAdi;
	string eposta;
	int dogumYili;
};
struct Belge{
	string belgeAdi;
	int boyut;
	int sayfaSayi;
	Kisi sahip;
	Tarih olusTarih;
};

void degiskenler(int &belgeSayisi, int &kapasite, int &gGecikme, int &yGecikme, int &kGonderilen){

    string temp;
    ifstream dosya;
    string dosyaAdi = "a.txt";
    dosya.open(dosyaAdi.c_str());

    while(getline(dosya, temp)){
        belgeSayisi++;
    }

    kGonderilen = belgeSayisi;

    cout<<"Kapasite: ";
    cin >> kapasite;
    cout<<"\nGonderme gecikmesi: ";
    cin >> gGecikme;
    cout<<"\nYazdirma gecimesi: ";
    cin >> yGecikme;

    cout <<"Girilen degerler:"<<endl;
    cout <<"Belge sayisi: "<<belgeSayisi << endl;
    cout <<"Kapasite: "<<kapasite << endl;
    cout <<"Gonderme gecikmesi: "<<gGecikme << endl;
    cout <<"Yazma gecikmesi: "<<yGecikme << endl;
}
void belgeOkuma(Belge *belgeler, int &belgeSayisi){
    ifstream dosya;
    dosya.open("a.txt");
    for(int i=0; i < belgeSayisi; i++){
    dosya >> belgeler[i].belgeAdi;
    dosya >> belgeler[i].boyut;
    dosya >> belgeler[i].sayfaSayi;
    dosya >> belgeler[i].sahip.ad;
    dosya >> belgeler[i].sahip.soyad;
    dosya >> belgeler[i].sahip.kullaniciAdi;
    dosya >> belgeler[i].sahip.eposta;
    dosya >> belgeler[i].sahip.dogumYili;
    dosya >> belgeler[i].olusTarih.yil;
    dosya >> belgeler[i].olusTarih.ay;
    dosya >> belgeler[i].olusTarih.gun;
    dosya >> belgeler[i].olusTarih.saat;
    dosya >> belgeler[i].olusTarih.dakika;
    dosya >> belgeler[i].olusTarih.saniye;
	}
}

void hucreYazdir(bool *hucreler, int &kapasite, int &t){
	cout << "\n-----------------------------------------------------------------------------------------\n"
         << endl;
    //cout << "kuyruk t=" << t << ": ";
    for (int i = 0; i < kapasite; i++){
        cout << "+";
        cout << hucreler[i];
    }
}
void hucreYazdir2(bool *hucreler, int &kapasite){
    for (int i = 0; i < kapasite; i++)
    {
        hucreler[i] = 0;
    }
}


void kuyrugaYaz(int &belgeSayisi, int &kapasite, int &yazmaSirasi, int &okumaKafasi, int &yazmaKafasi, Belge *belgeler, Belge *kuyruk, bool *hucreler, int &kGonderilen, int &kYazdirilan)
{
    int basarili = 0;
    for (int j = 0; j < kapasite; j++)
    {
        int dif = ((yazmaSirasi + j) % kapasite);
        if (hucreler[dif] == 0)
        {
            yazmaSirasi = dif;
            basarili = 1;
            break;
        }
    }
    if (basarili == 0)
    {

        cout << "KUYRUK DOLU" << endl;
        return;
    }
    kuyruk[yazmaSirasi] = belgeler[okumaKafasi];
    hucreler[yazmaSirasi] = 1;
    cout << belgeler[okumaKafasi].belgeAdi << " yaziciya gonderildi" << endl;
    okumaKafasi++;
    kGonderilen--;
    kYazdirilan++;
}


void yazdir(int &belgeSayi, int &kapasite, int &yazmaSirasi, int &okumaKafasi, int &yazmaKafasi, int &kYazdirilan, Belge *belgeler, Belge *kuyruk, bool *hucreler)
{
    string geciciBelgeAdi = kuyruk[yazmaKafasi].belgeAdi;
        if (kuyruk[yazmaKafasi].sayfaSayi == 1)
        {
            hucreler[yazmaKafasi] = 0;

            cout << geciciBelgeAdi << " belgesinin yazdirilmasi bitirildi" << endl;

			yazmaKafasi = ((yazmaKafasi + 1) % kapasite);
            kYazdirilan--;
        }
        else
        {

            cout << geciciBelgeAdi << " belgesinin sayfasi yazdirildi" << endl;
            kuyruk[yazmaKafasi].sayfaSayi -= 1;
        }
}

int main(){
    int belgeSayisi = 0;
    int kapasite = 0;
    int gGecikme = 0;
    int yGecikme = 0;
    int okumaKafasi = 0;
    int yazmaKafasi = 0;
    int kGonderilen = 0;
    int kYazdirilan = 0;
    int yazmaSirasi = 0;

    degiskenler(belgeSayisi, kapasite, gGecikme, yGecikme, kGonderilen);
    Belge belgeler[belgeSayisi];
    Belge kuyruk[kapasite];
    bool hucreler[kapasite];

    hucreYazdir2(hucreler, kapasite);

    belgeOkuma(belgeler, belgeSayisi);

	bool gecici = true;

    do
    {
    	if (gecici== true)
            cout << "\nt=" << t << ": ";
         	gecici = false;
        if (t % gGecikme == 0)
            if (kGonderilen > 0)
            {
                kuyrugaYaz(belgeSayisi, kapasite, yazmaSirasi, okumaKafasi, yazmaKafasi, belgeler, kuyruk, hucreler, kGonderilen, kYazdirilan);
                gecici = true;
            }

        if (t % yGecikme == 0)
        {
            yazdir(belgeSayisi, kapasite, yazmaSirasi, okumaKafasi, yazmaKafasi, kYazdirilan, belgeler, kuyruk, hucreler);
            gecici = true;
        }
    	hucreYazdir(hucreler, kapasite, t);

        t++;

    } while (kYazdirilan > 0);
    //--------------------------------------------------------------------------


    return 0;
}
