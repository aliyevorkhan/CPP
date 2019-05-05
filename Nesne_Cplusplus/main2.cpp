#include <iostream>

using namespace std;

class Insan{
	public:		
		void setKilo(int k){
			kilo = k;
		}
		
		double getKilo(void){
			return kilo;
		}
		
		void setBoy(int b){
			boy = b;
		}
		
		double getBoy(void){
			return boy;
		}
	
		double getIndex(void){
			return (kilo/(boy*boy))*10000;
		}
		
		
	private:
		double boy;
		double kilo;
		    
};


int main() {
	Insan insan;
	
	insan.setKilo(70); //kilonuzu giriniz
	insan.setBoy(171); //boyunuzu giriniz
	
	if(insan.getIndex()>=25 && insan.getIndex() <30){
		cout << "Fazla kilolu"<<endl;
	}else if(insan.getIndex()>=30 && insan.getIndex() <40){
		cout << "obez"<<endl;
	}else if(insan.getIndex()>40){
		cout << "morbid obez"<<endl;
	}else {
		cout << "Normal" << endl;
	}
	
	return 0;
}
