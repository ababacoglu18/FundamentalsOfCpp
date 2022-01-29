#include <iostream>

class Silah {
public:	
	std::string ad;
	int mermiKapasite;

	virtual std::string bilgi() = 0;      //bilgi metodu soyutlanarak farklý classlara eriþim saðlayabilir. 

};

class AK47 : public Silah {
public:
	bool durbun;

	std::string bilgi() {
		return "Ak47 durbun takilabilir.";
	}
};

class Pistol : public Silah {
public:
	bool lazer;
	std::string bilgi() {
		return "Pistol lazer takilabilir.";
	}

};

class G3 : public Silah {
	std::string bilgi() {
		bool OmuzDayama;
		return "G3  Omuz Aparati takilabilir.";
	}

};

int main(void){
	
	AK47 ak47;
	ak47.ad = "AK47";

	Pistol pistol;
	pistol.ad = "Pistol";

	G3 g3;
	g3.ad = "G3.";

	Silah* liste[3];
	liste[0] = &ak47;
	liste[1] = &pistol;
	liste[2] = &g3;

	int silah;

	std::cout << "1 Ak47, 2 Pistol, 3 G3.";

	std::cin >> silah;

	std::cout << liste[silah-1]->bilgi();


	//Silah silah1; diye bir deðiþken oluþturulamaz çünkü Silah sýnýfý soyut bir sýnýftýr. 


	}