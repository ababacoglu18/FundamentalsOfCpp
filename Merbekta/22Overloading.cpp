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

		std::cout <<"youtube.com/" << y.url << "oynatiliyor." << std::endl;    //play t�r� hem youtube t�r�ndeki veriyi 
																			  //Hem Facebook t�r�ndeki veriyi oynatabilir mi?
																			 //=Overloading...
	}																		// Bir �eyin a��r� y�klenmesi, birden �ok veri t�r�n� ifade etmesi.

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
	a.Play(f);   //�mle�le �zerine gelirsen a��r� y�kleme yazar.
	a.Play(10);
	





}

*/