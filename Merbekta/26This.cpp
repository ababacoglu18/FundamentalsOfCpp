/* #include<iostream>
class Actor {
public:
	int location;
	bool isRender;

};
	
class Mermi {
public:
	std::string ad;
	int hasar;
};

class Light : public Actor {									//Downcast ramde eri�ilen noktan�n tamam�n� kullanma olay�.			
public:
	int renk;
	bool active;
};

class Silah {
public:
	int location;
	int kapasite;
	int sonuc;
	Silah(int location) {

		//location = location;						 //Yaz�lmas� gerekiyordu fakat derleyici bunu anlayamaz
													// 10 = 10 anlam�na gelir. Bunun i�in hangisinin fonksiyon i�indeki oldu�unu belirtmemiz gerekir. 
		this->location = location;				   //�eklinde parametre olan ve parametre yaz�lacak olan location'�n belirtilmesi gerekir. 
		std::cout << location<<std::endl;		  // This is Object.
	}

	int Topla(int sayi, int sayi2) {

		this->sonuc = sayi + sayi2;
	
		return this->sonuc;
	}
};

int main(void){
	Silah silah1(10);

	std::cout<<silah1.Topla(3, 5);
	}
	*/