#include <iostream>

using namespace std;

class Benzerlik{
    private:
        string str1;
        string str2;
        double benzerlik;
    public:
        Benzerlik(){
            benzerlik = 0;
            str1 = " ";
            str2 = " ";
        }
        Benzerlik(string str1, string str2){
            this ->benzerlik = 0;
            this ->str1 = str1;
            this ->str2 = str2;
        }

        string getStr1(){
            return str1;
        }

        string getStr2(){
            return str2;
        }
        double getBenzerlik(){
            int satDeg = str1.length();
            int sutDeg = str2.length();
            int mat[satDeg][sutDeg];
            for(int i = 0; i<satDeg; i++){
                for(int j = 0; j<sutDeg; j++){
                    mat[i][j] = 0;
                }
            }

            int yerelBenz = 0;
            for(int i = 0; i<satDeg; i++){
                for(int j = 0; j<sutDeg; j++){
                    if((i+ yerelBenz)<satDeg && str1[i+yerelBenz] == str2[j]){
                        yerelBenz ++;
                        mat[i][j]=yerelBenz;
                    }
                    else{
                        yerelBenz = 0;
                    }
                    cout << mat [i][j] << " ";
                }
                cout << endl;
            }
            int max = -100, maxi =0, maxj = 0;
            for(int i = 0; i<satDeg; i++){
                for(int j = 0; j <sutDeg; j++){
                    if(mat[i][j] > max){
                        max = mat[i][j];
                        maxi = i;
                        maxj = j;
                    }
                }
            }

            cout <<"maksimum i degeri = "<<maxi<<endl;
            cout <<"maksimum j degeri = "<<maxj<<endl;
            cout <<"maksimum degeri = "<<max<<endl;

            cout <<"alt string degeri = "<<str2.substr(maxj - max+1, max)<<endl;
            benzerlik = max;
            return benzerlik;
        }

        void setStr1(string str1){
            this -> str1 = str1;
        }
        void setStr2(string str2){
            this -> str2 = str2;
        }

        friend void benzerlikYazdir(Benzerlik b);
};

void benzerlikYazdir(Benzerlik b){
    cout<<b.str1<<"~";
    cout<<b.str2<<"=";
    cout<<b.benzerlik<<endl;
}

int main()
{
    Benzerlik ben("banana", "ananas");

    ben.getBenzerlik();
    benzerlikYazdir(ben);
    return 0;
}
