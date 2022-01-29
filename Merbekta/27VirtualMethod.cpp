/*#include <iostream>
#include <any>


class Silah {
public:
	int location;
	int kapasite;

	virtual void ates() {         
		std::cout << "Bambambam. \n";
	}
};

class Ak47 : public Silah {										
public:
	void ates() {
		Silah::ates(); //Override edilen ates fonksiyonu yine çaðýrýlabilir.  ÖNEMLÝ.
		std::cout << "Gumgumgum. \n";
	}
};



int main(void)	{	
	Ak47 ak47;

	Silah *silahPtr;
	silahPtr = &ak47;

	ak47.Silah::ates();			 //Override edilen metod bu þekilde de çaðýrýlabilir. 

	silahPtr->ates();          //virtual void üst farklý classlarda tanýmlanmýþ ayný isimli metodlardan alttakini çaðýrmamýzý saðlar. (Override)
	} */