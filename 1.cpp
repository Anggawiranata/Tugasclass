#include <iostream>
#include <string>
using namespace std;
	class sepatu{
		public:
		void fantopel(string fantopel);
		string kualitas, bahan, ukuran;
	};
	int main(){
	sepatu drkevin, vanz, eagle;
	
	drkevin.kualitas = "Kualitas sangat baik ";
	vanz.kualitas = "Kualitas standar ";
	eagle.kualitas = "Kualitas kurang baik ";
	
	drkevin.bahan = "Bahan dari kulit buaya ";
	vanz.bahan = "Bahan dari kain  ";
	eagle.bahan = "Bahan dari kulit sapi ";
	
	drkevin.ukuran = "Ukuran 40  - 42 ";
	vanz.ukuran = "Ukuran 40  - 41  ";
	eagle.ukuran = "Ukuran 38 - 40 ";
	
	cout<<"sepatu drkevin "<< (drkevin.kualitas) << (drkevin.bahan) << (drkevin.ukuran);
	drkevin.fantopel("Sepatu yang lumayan bagus ");
	cout<<"sepatu vanz "<< (vanz.kualitas) << (vanz.bahan) << (vanz.ukuran);
	vanz.fantopel("Sepatu kualitas standar ");
	cout<<"sepatu eagle "<< (drkevin.kualitas) << (vanz.bahan) << (eagle.ukuran);
	eagle.fantopel("Sepatu yang sangat-sangat bagus "); 
}
	
	
void sepatu::fantopel(string fantopel){
	cout<<"Sepatu khusus fantopel "<<fantopel<<"\n";
}

