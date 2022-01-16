  // #include<iostream>


/*void topla(int a, int b) {
	a = 100;
	b = 200;
}

int main(void) {

	int a = 10;
	int b = 20;

	topla(a, b);

	std::cout << a;


}

/*Fonksiyon icinde ne kadar a ve b yi 100 ve 200 versen de a icin ramde yeni bir adres olusturuldugundan 
  ve bu topla fonksiyonuyla sýnýrlý oldugundan (a ve b degeri topla fonk.) disinda hicbir zaman 100 ve 200 olmaz. 
  Bu degeri kalici olarak degistirebilmek icin ram adresine gidip pointerla a ve b nin degerini degistirmelisin. 
  Yukardaki fonksiyonu izlemek icin /* yorum kismini kaldirip asagidaki main ve void'i ayni sekilde  yorum satiri olarak kapat.
  */


		//Pointer bir degiskenin bellek adresini tutan baska bir degiskendir.
		//

/*
#include <iostream>
void selam(int a, int b) {

}


int main(void) {

	int a = 10;
	int b = 20;

	int* ap = &a;
	
	std::cout << "Pointers (ap) from a\n" << ap << std::endl;
	std::cout << &a << std::endl;  //ap ve a degiskeni ayni ram adresinde tutulur.
	std::cout << *ap << std::endl ; //ap degeri a ile aynidir = 10



	                //!!!!!!!!!!!!!!!!!!!Pointer (*), Reference(&)!!!!!!!!!!!!!!!!!!!!
					


					

									std::cout << "\n------------------------\n";

	int& ar = a; // Referans geçici bellek adresidir (Degiskenin takma adidir.) 
	             // a'nin basina ne gelirse ar'in basina da o gelir. 

	std::cout<<"References. (ar) from a \n" << ar<<std::endl<<std::endl;

	a = 500;
	std::cout << "a & ar'nin yeni degeri \n" << a << "\t" << ar<< std::endl;
	
	int& ar2 = a ; //Istedigin kadar degiskeni olusturabilirsin. 
	ar = 300;
	std::cout << "a & ar'nin yeni degeri \n" << a << "\t" << ar << std::endl << "Ram Adresleri. (a) (ar) (ar2)\n" << &a <<"\t" << &ar <<"\t" << &ar2 << std::endl;
			
									std::cout << "\n------------------------\n";

	int* ap2 = &b;              //Pointerlar defalarca degiskenlerden atanabilir.
	     ap2 = ap;
		 ap2 = &a;

		 std::cout << "ap2 pointer'in degeri " << *ap2;

									 std::cout << "\n------------------------\n";
       
									 
	int& ar3 = a;			// ar3'un basina ne gelirse a'nin da basina gelsin.
	ar3 = b;
	std::cout << "ar3 referans degeri " << ar3  <<"\t" << a << "   (b'nin degeri'ni alip a yi da degistirdi.) ";
	 
							//Referanslara bir adres atandiktan sonra yeni bir adres atilamaz !!!

									std::cout << "\n------------------------\n";


		int* ap4 = NULL;					//!!! NULL (Benim pointer'im ram'de hicbir seye isaret etmiyor.
		std::cout <<"NULL Pointer. \n " << ap4;

		// int& ar4 = NULL;	               //NULL Deger REFERANSA ATANAMAZ. CONST DEGILDIR. REFERANSLAR YER BILDIRMEK ZORUNDADIR.
		                                   //Pointer NULL istendigi zaman deger atanip baslatilabilir.
		                                   //Referansta int& = ar; gibi bir secenek yoktur.
										   

									std::cout << "\n------------------------\n";                  */

								/*	object->function(); //Pointer'da fonksiyona erisim
									object.function();  //Referansta erisim.. */

// }
