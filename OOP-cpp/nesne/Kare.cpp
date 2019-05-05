class Kare{
	
	public:
		Kare(int kenarDegeri){
			kenar = kenarDegeri;
		}
		Kare(){
			kenar = 1;
		}
		
		int alanBul(){
			return kenar*kenar;
		}
		
		int cevreBul(){
			return 4*kenar;
		}
		int kenarGetir(){
			return kenar;
		}
		
		void kenarDegistir(int yeniKenar){
			kenar = yeniKenar;
		}
		
	private:
		int kenar;		
		
};
