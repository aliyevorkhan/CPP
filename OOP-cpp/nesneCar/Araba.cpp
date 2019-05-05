#include <string>

using namespace std;

class Araba{
	public:
		
		Araba(){ // eger arabanin modeli yoksa
			model = "NULL";
		}
		Araba(string modelDegeri, int hizDegeri){ // araba("modelDegeri", hizDegeri) tarzinda cagrildigi zaman
			model = modelDegeri;
			maxHiz = hizDegeri;
		}
		
		string getModel(){ // private modeli gormek icin
			return model;
		}
		
		void setModel(string yeniModel){ // eski araba modelini yenisine degistirmek
			model = yeniModel;
		}
		
		int getHiz(){
			return maxHiz;
		}
		
		void setHiz(int yeniHiz){
			maxHiz = yeniHiz;
		}
		
	private:
		string model;
		int maxHiz;		
};
