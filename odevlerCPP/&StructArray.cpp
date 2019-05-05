#include <iostream>
#include <fstream>
#include <Windows.h>
#include <string>

using namespace std;


struct Belgeler{
	string belgeAdi;
        int boyut;
        int oncelik;
        int sayfaSayi;
	    struct {
	        int yil;
	        int ay;
            int gun;
            int saat;
            int dakika;
            int saniye;
} Tarih;

    struct {
	    string ad;
        string soyad;
        string kullaniciAdi;
        string eposta;
        int dogumYili;
    } Sahip;
};

void degiskenTanimla(int &belgeSayisi, int &kapasite, int &gGecikme, int &yGecikme, int &kGonderilen){
    string satir;
    fstream dosya;
    string dosyaAdi = "a.txt";
    dosya.open(dosyaAdi);
    while(getline(dosya, satir)){
        belgeSayisi++;
    }
    kGonderilen = belgeSayisi;
}

void belgeOkuma(Belgeler *belgeler, int &belgeSayisi){
    ifstream dosya;
    dosya.open("a.txt");
    for(int i=0; i < belgeSayisi; i++){
        dosya >> belgeler[i].belgeAdi;
        dosya >> belgeler[i].boyut;
        dosya >> belgeler[i].oncelik;
        dosya >> belgeler[i].sayfaSayi;
        dosya >> belgeler[i].Sahip.ad;
        dosya >> belgeler[i].Sahip.soyad;
        dosya >> belgeler[i].Sahip.kullaniciAdi;
        dosya >> belgeler[i].Sahip.eposta;
        dosya >> belgeler[i].Sahip.dogumYili;
        dosya >> belgeler[i].Tarih.yil;
        dosya >> belgeler[i].Tarih.ay;
        dosya >> belgeler[i].Tarih.gun;
        dosya >> belgeler[i].Tarih.saat;
        dosya >> belgeler[i].Tarih.dakika;
        dosya >> belgeler[i].Tarih.saniye;
    }
}

void hucreYazdir(bool *hucreler, int &kapasite){
    for (int i = 0; i < kapasite; i++){
        hucreler[i] = 0;
    }
}

string kuyrugaYaz(Belgeler *belgeler,Belgeler *kuyruk, int &kGonderilen, int &kYazdirilan, int &belgeSayisi, int &kapasite, int &okumaKafasi, bool *hucreler, int &yazmaSirasi) {
    bool doluMu = false;
    for (int i = 0; i<kapasite; i++) {
		if (hucreler[i] == 1) {
            doluMu =  true; continue;
        }
		else {
            doluMu = false; break;
        }
	}
	if (kGonderilen == 0) return "Kuyruga eklenecek eleman yok.";
	if (doluMu == false) {
        if(okumaKafasi >= kapasite) okumaKafasi=0;
		for (int i = okumaKafasi; i<kapasite; i++) {
			if (hucreler[i] == 0) {
				kuyruk[i].belgeAdi = belgeler[yazmaSirasi].belgeAdi;
                kuyruk[i].sayfaSayi = belgeler[yazmaSirasi].sayfaSayi;
                kuyruk[i].oncelik = belgeler[yazmaSirasi].oncelik;
				hucreler[i] = 1;
				kYazdirilan++;
				kGonderilen--;
				okumaKafasi = i;
				yazmaSirasi++;
				return kuyruk[i].belgeAdi;
			}
			else {
                okumaKafasi++;
                continue;
                }
		}
	}
	else {
        return "DOLU.";
    }
}

bool tamam = false;
bool devam = false;

string yazdirma(int &kapasite, int &yazmaKafasi, int &kYazdirilan, Belgeler *kuyruk, bool *hucreler, int &kGonderilen){
    if (kYazdirilan > 0) {
    string temp;
    string temp2;
    for (int i = 0; i<kapasite; i++) {
		if (hucreler[i] == 0) {tamam =  true;}
		else { tamam = false; break; }
	}
    if(yazmaKafasi >= kapasite) yazmaKafasi = 0;
	if (tamam == false) {
      for(int i=0;i<kapasite-1;i++) {
        for(int j=0;j<kapasite-1;j++) {
            if(kuyruk[j].oncelik<kuyruk[j+1].oncelik) {
                Belgeler temp=kuyruk[j]; kuyruk[j]=kuyruk[j+1]; kuyruk[j+1]=temp;
            }
    }

        if (yazmaKafasi > kapasite) yazmaKafasi=0;
		for (int i = yazmaKafasi; i<kapasite; i++) {
			if (hucreler[i] == 1) {
                if (kuyruk[i].sayfaSayi > 1) {
                temp = kuyruk[i].belgeAdi;
                kuyruk[i].sayfaSayi = kuyruk[i].sayfaSayi - 1;
                yazmaKafasi = i-1;
				return temp + " bir sayfa yazdi";
                }
                else {
                    temp2 = kuyruk[i].belgeAdi;
                    hucreler[i] = 0;
                    kuyruk[i].sayfaSayi = 0;
                    kYazdirilan--;
                    yazmaKafasi = i;
                    return temp2 + " tamamen yazdi";
                }
			}
			else {
                yazmaKafasi = 0; continue;
            }
		}
	}
}
    else {
        return "Yazdirilacak belge kalmadi";
    }
}
    else
        {
    devam=true;
    return "Yazdirma tamamlandi";
    }

}


int main()
{
    int belgeSayisi = 0;
    int kapasite = 0;
    int gGecikme = 0;
    int yGecikme = 0;
    int okumaKafasi = 0;
    int yazmaKafasi = 0;
    int kGonderilen = 0;
    int kYazdirilan = 0;
    int yazmaSirasi = 0;

    cout<<"Lutfen Kapasite giriniz: ";
    cin >> kapasite;
    cout<<"Lutfen Gonderme gecikmesini giriniz: ";
    cin >> gGecikme;
    cout<<"Lutfen Yazdirma gecimesini giriniz: ";
    cin >> yGecikme;

    degiskenTanimla(belgeSayisi, kapasite, gGecikme, yGecikme, kGonderilen);//degisken tanimlama fonksiyonu
    Belgeler belgeler[belgeSayisi];
    Belgeler kuyruk[kapasite];
    bool hucreler[kapasite];

    hucreYazdir(hucreler, kapasite);
    belgeOkuma(belgeler, belgeSayisi);

       for(int i=0;i<belgeSayisi-1;i++){
          for(int j=0;j<belgeSayisi-1;j++) {
            if(belgeler[j].oncelik<belgeler[j+1].oncelik) {
                Belgeler temp=belgeler[j]; belgeler[j]=belgeler[j+1]; belgeler[j+1]=temp;
            }
    }
}
    int sure=1;

    while(devam==false) {

    if (sure % gGecikme == 0){
        Sleep(gGecikme * 500);
        string okumaSonucu = kuyrugaYaz(belgeler,kuyruk,kGonderilen,kYazdirilan,belgeSayisi,kapasite,okumaKafasi,hucreler,yazmaSirasi);
        cout << endl <<sure << ".sn " << okumaSonucu << " gonderdi";
    }

    if (sure % yGecikme == 0){
        if((sure % yGecikme) != (sure % gGecikme)) Sleep(gGecikme * 500);
        string yazdirmaSonucu = yazdirma(kapasite, yazmaKafasi, kYazdirilan, kuyruk, hucreler, kGonderilen);
        cout << endl <<sure << ".sn " << yazdirmaSonucu;
    }

    sure++;
    }
    cout << "Program tamamlandi.";
    return 0;
}
