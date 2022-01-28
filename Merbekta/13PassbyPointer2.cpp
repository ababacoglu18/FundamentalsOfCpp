/*#include <iostream>

void karakteriYurut(int karakter, int kacBirim, char yon ) {
	karakter = 10 + 10;
	std::cout << "Karakter " << kacBirim << "  birim  " << yon << "  yonunde hareket etti  " << std::endl;

}

int main(void) {

	int karakter = 10;  //Karakter oldugunu var say.

	karakteriYurut(karakter, 100, 'x');

	std::cout << karakter;  //Deger 10 cikacaktir. Cunku 20 degeri sadece yukaridaki fonksiyon icin gecerlidir  
	                        //karakter viewportta
							//hicbir zaman ileri yurumez.
	                        //Fonksiyonda degistirilen deger ancak pointerla degistirilirse karakter ileri yurur. 
							//Denemek istiyorsan yorum operatorunu kaldirip asagi tarafi kapat. 
}  */
/*  #include <iostream>
void karakteriYurut(int *karakter,int kacBirim,char yon) {
	*karakter = 30;
	std::cout <<"  karakter " << *karakter << " , " << kacBirim << " birim " << yon << "  yonune yurudu.     void function \n";

}

int main(void) {

	int karakter = 10; 
	int* karaterPtr = &karakter;

	karakteriYurut(karaterPtr, 20, 'x');

			std::cout << "  karakter " << karakter  << "                                  main function ";

			

		

} */