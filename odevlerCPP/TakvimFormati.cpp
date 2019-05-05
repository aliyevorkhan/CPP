/*
	@author Orkhan Aliyev
	@contact orxanaliyev19@gmail.com
	@id 338396
*/

#include <iostream>
#include <iomanip>
using namespace std;
int main() {
	
	int gun;

	cout << "Ayin ilk gunu haftanin hangi gunune denk geliyor?"<< endl;
	cout << "Pazartesi: 1"<<endl;
	cout<<"Sali:"<<setw(7)<<"2"<<endl;
	cout<<"Carsamba:"<<setw(3)<<"3"<< endl;
	cout<< "Persembe:"<< setw (3)<<"4"<< endl;
	cout<<"Cuma:"<<setw(7)<<"5"<<endl;
	cout<<"Cumartesi: 6"<< endl;
	cout <<"Pazar:"<<setw(6)<<"7"<<endl;
						
	cin>>gun;
	
	if(gun == 1){
			cout << "  PT  SA  CA  PE  CU  CT  PZ"<<endl;
		for(int i=1; i<32; i++){
			cout<<setw(4)<< i;
			if(i==7){
				cout<<endl;
			}
			if(i==14){
				cout<<endl;
			}
			if(i==21){
				cout<<endl;
			}
			if(i==28){
				cout<<endl;
			}
	}
}
	else if(gun == 2){
		cout << "  PT  SA  CA  PE  CU  CT  PZ"<<endl;
		cout<<setw(8)<<"1";
		for(int i=2; i<7; i++){
			cout<<setw(4)<< i;
		}
		cout<<endl;
		for(int i=7; i<14; i++){
			cout<<setw(4)<< i;
		}
		cout<<endl;
		for(int i=14; i<21; i++){
			cout<<setw(4)<< i;
		}
		cout<<endl;
		for(int i=21; i<28; i++){
			cout<<setw(4)<< i;
		}
		cout<<endl;
		for(int i=28; i<32; i++){
			cout<<setw(4)<< i;
		}
	}
	else if(gun == 3){
		cout << "  PT  SA  CA  PE  CU  CT  PZ"<<endl;
		cout<<setw(12)<<"1";
		for(int i=2; i<6; i++){
			cout<<setw(4)<< i;
		}
		cout<<endl;
		for(int i=6; i<13; i++){
			cout<<setw(4)<< i;
		}
		cout<<endl;
		for(int i=13; i<20; i++){
			cout<<setw(4)<< i;
		}
		cout<<endl;
		for(int i=20; i<27; i++){
			cout<<setw(4)<< i;
		}
		cout<<endl;
		for(int i=27; i<32; i++){
			cout<<setw(4)<< i;
		}
	}
	else if(gun == 4){
		cout << "  PT  SA  CA  PE  CU  CT  PZ"<<endl;
		cout<<setw(16)<<"1";
		for(int i=2; i<5; i++){
			cout<<setw(4)<< i;
		}
		cout<<endl;
		for(int i=5; i<12; i++){
			cout<<setw(4)<< i;
		}
		cout<<endl;
		for(int i=12; i<19; i++){
			cout<<setw(4)<< i;
		}
		cout<<endl;
		for(int i=19; i<26; i++){
			cout<<setw(4)<< i;
		}
		cout<<endl;
		for(int i=26; i<32; i++){
			cout<<setw(4)<< i;
		}
	}
	else if(gun == 5){
		cout << "  PT  SA  CA  PE  CU  CT  PZ"<<endl;
		cout<<setw(20)<<"1";
		for(int i=2; i<4; i++){
			cout<<setw(4)<< i;
		}
		cout<<endl;
		for(int i=4; i<11; i++){
			cout<<setw(4)<< i;
		}
		cout<<endl;
		for(int i=11; i<18; i++){
			cout<<setw(4)<< i;
		}
		cout<<endl;
		for(int i=18; i<25; i++){
			cout<<setw(4)<< i;
		}
		cout<<endl;
		for(int i=25; i<32; i++){
			cout<<setw(4)<< i;
		}
	}
	else if(gun == 6){	
		cout << "  PT  SA  CA  PE  CU  CT  PZ"<<endl;
		cout<<setw(24)<<"1";
		for(int i=2; i<3; i++){
			cout<<setw(4)<< i;
		}
		cout<<endl;
		for(int i=3; i<10; i++){
			cout<<setw(4)<< i;
		}
		cout<<endl;
		for(int i=10; i<17; i++){
			cout<<setw(4)<< i;
		}
		cout<<endl;
		for(int i=17; i<24; i++){
			cout<<setw(4)<< i;
		}
		cout<<endl;
		for(int i=24; i<31; i++){
			cout<<setw(4)<< i;
		}
		cout<<endl;
		for(int i=31; i<32; i++){
			cout<<setw(4)<< i;
		}
		
	}
	else if(gun == 7){
		cout <<setw(20)<<setfill('#')<<"SIZIN SECIMINIZ: "<< gun<<endl;
		cout<<setfill(' ')<<endl;
		cout << "  PT  SA  CA  PE  CU  CT  PZ"<<endl;
		cout<<setw(28)<<"1";
		cout<<endl;
		for(int i=2; i<9; i++){
			cout<<setw(4)<< i;
		}
		cout<<endl;
		for(int i=9; i<16; i++){
			cout<<setw(4)<< i;
		}
		cout<<endl;
		for(int i=16; i<23; i++){
			cout<<setw(4)<< i;
		}
		cout<<endl;
		for(int i=23; i<30; i++){
			cout<<setw(4)<< i;
		}
		cout<<endl;
		for(int i=30; i<32; i++){
			cout<<setw(4)<< i;
		}
	}
	else{
		cout.fill('*');
		cout<<left;
		cout<<setw(30)<<"*"<<endl;
		cout<<setw(30)<<"*"<<endl;
		cout<<setw(30)<<"SECIMINIZ YANLIS!"<<endl;
		cout<<setw(30)<<"*"<<endl;
		cout<<setw(30)<<"*"<<endl;
		}
}

/*
	@author Orkhan Aliyev
	@contact orxanaliyev19@gmail.com
	@id 338396
*/
