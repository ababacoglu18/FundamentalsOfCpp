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
		Silah::ates(); //Override edilen ates fonksiyonu yine �a��r�labilir.  �NEML�.
		std::cout << "Gumgumgum. \n";
	}
};



int main(void)	{	
	Ak47 ak47;

	Silah *silahPtr;
	silahPtr = &ak47;

	ak47.Silah::ates();			 //Override edilen metod bu �ekilde de �a��r�labilir. 

	silahPtr->ates();          //virtual void �st farkl� classlarda tan�mlanm�� ayn� isimli metodlardan alttakini �a��rmam�z� sa�lar. (Override)
	} */