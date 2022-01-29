#include <iostream>

class Actor {
public:
	int uzunluk;
	Actor operator+(Actor &a) {        //a referansa aþýrý yükleme yapýldý.  + iþlemi overload edildi. 
		Actor ac;
		ac.uzunluk = this->uzunluk + a.uzunluk;
		return ac;
	}	
};

int main(void) {

	Actor sonuc;
	Actor a1;
	Actor a2;

	a1.uzunluk = 50;
	a2.uzunluk = 100;


	sonuc = a1 + a2;

	std::cout << sonuc.uzunluk << std::endl;


}