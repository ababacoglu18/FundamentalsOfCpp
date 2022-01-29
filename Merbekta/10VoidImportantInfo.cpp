#include <iostream>


int topla(int a, int b);

int main() {


	int sonuc = topla(10, 20);
	std::cout << sonuc << std::endl;

}

int topla(int a, int b) {  //Main'e bagli fonksiyonlarin main fonksiyonunun üzerinde olmak zorundadir. 
	 return a + b;          //Eger asagida olmasini istiyorsan; 
	                       //fonksiyonunun dondurecegi degerlerin referansini ustte verip asagida fonksiyon islemini yapabilirsin.

}