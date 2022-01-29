#include <iostream>


			struct Youtube {
			
				std::string url;

			};

			struct Facebook {
			
				std::string url;

			};


/*class Player {
public:
	void Play(Youtube y) {

		std::cout <<"youtube.com/" << y.url << "oynatiliyor." << std::endl;    //play türü hem youtube türündeki veriyi 
																			  //Hem Facebook türündeki veriyi oynatabilir mi?
																			 //=Overloading...
	}																		// Bir þeyin aþýrý yüklenmesi, birden çok veri türünü ifade etmesi.

	void Play(Facebook f) {

		std::cout << "facebook.com/" << f.url << "oynatiliyor." << std::endl;    
	}

	void Play(int i) {

		std::cout << "Sayi " << i << "" << std::endl;    
	}


};


int main(void) {

	Youtube y;
	y.url = "Oiy3Dys ";

	Facebook f;
	f.url = "DsdaDAStdS.";



	Player a;
	a.Play(y);
	a.Play(f);   //Ýmleçle üzerine gelirsen aþýrý yükleme yazar.
	a.Play(10);
	





}

*/