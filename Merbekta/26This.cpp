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

class Light : public Actor {									//Downcast ramde eriþilen noktanýn tamamýný kullanma olayý.			
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

		//location = location;						 //Yazýlmasý gerekiyordu fakat derleyici bunu anlayamaz
													// 10 = 10 anlamýna gelir. Bunun için hangisinin fonksiyon içindeki olduðunu belirtmemiz gerekir. 
		this->location = location;				   //þeklinde parametre olan ve parametre yazýlacak olan location'ýn belirtilmesi gerekir. 
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