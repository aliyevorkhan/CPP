#include <iostream>
using namespace std;

class Saat{
    public:
    Saat(int saat = 0, int dakika = 0, int saniye = 0){
        this -> saat = saat;
        this -> dakika = dakika;
        this -> saniye = saniye;
    }
    void saatYazdir(){
        cout << saat << " : " << dakika << " : " << saniye << endl;
    }
    void dakikaEkle(int dakika){
      int aDakika = this -> dakika +dakika;
      this -> dakika = aDakika % 60;
      this -> saat += aDakika/60;
      this -> saat = this->saat % 24;
    }
    Saat operator - (const Saat & s){
      Saat s2;
      s2.saat = this->saat - s.saat;
      s2.dakika = this->dakika - s.dakika;
      s2.saniye = this->saniye - s.saniye;
      return s2; 
    }
    Saat operator + (int dakika){
      Saat s2;
      int aDakika = this -> dakika +dakika;
      s2.dakika = aDakika % 60;
      s2.saat = this -> saat + aDakika/60;
      s2.saat = s2.saat % 24;
      s2.saniye = this->saniye;
      return s2;
    }
    void operator ++ (){
      int aDakika = this -> dakika +1;
      this -> dakika = aDakika % 60;
      this -> saat += aDakika/60;
      this -> saat = this->saat % 24;

    }

    void operator += (const Saat & s){
      this -> saniye = this->saniye + s.saniye;
      if(this -> saniye >= 60){
        this -> saniye %= 60;
        this -> dakika++;
      }
      this -> dakika = this->dakika + s.dakika;
      if(this -> dakika >= 60){
        this -> dakika %= 60;
        this -> saat++;
      }
      this -> saat = this->saat + s.saat;
      if(this ->saat>=60){
        this->saat %= 24;
      }
      
    }
    bool operator > (const Saat &s){
      int d1 = this->saniye;
      d1+=this->dakika*60;
      d1+= this->saat *3600;

      int d2 = s.saniye;
      d2+=s.dakika*60;
      d2 += s.saat * 3600;

      return (d1>d2);
    }

    friend ostream &operator << ( ostream &output, const Saat &s ) {
        output << s.saat << ":"
               << s.dakika << ":"
               << s.saniye << endl;
        return output;           
   }
   
   friend istream &operator >> ( istream  &input, Saat &s ) {
        input >> s.saat >> s.dakika >> s.saniye;
        return input;           
   }


    private:
    int saat;
    int dakika;
    int saniye;
};

int main(int argc, char const *argv[])
{
    Saat s1(20, 30);
    Saat s2(21, 30);
    /*
    Saat s3 = s2 - s1;
    Saat s4 = s2 + 30;
    s3.saatYazdir(); 
    s4.saatYazdir();

    s2.saatYazdir();
    ++s2;
    s2.saatYazdir();
    s2 += s1;
*/    for(int i = 0; s2>s1; i++, (++s1)){
      cout<<i<< " = ";
      //s1.saatYazdir();
      cout << s1;
}
    cout<<"Saat(h:m:s)?=>"<<endl;
    cin>>s1;
    cout<<"Girilen saat: " << s1;
    return 0;
}
