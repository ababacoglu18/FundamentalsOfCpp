/* //     i sil
#include<iostream>
using namespace std;

int main(void) {

	int sayi1 = 10;

	int* sayi1Ptr; //sayi1Ptr int bir degerin pointeridir.
	sayi1Ptr = &sayi1; //sayi1 in pointeri ile sayi1Ptr'nin ramde ayrilan alani aynidir, ayni referans sayiyi kullanirlar.
			
				cout <<"sayi1 in ramde tutulan yeri: " << &sayi1 <<endl<< "sayi 1 degeri: " << sayi1 << endl<< endl;  //ilk deger ram yerini 2. si sayi 1 degerini verir.
 	
			*sayi1Ptr = 500; //sayi1Ptr(* konunca pointer deger sayi degerine doner.)

		cout <<"Pointerla adres degistikten sonra sayi1 degeri: " << sayi1 << endl<< endl; //artik sayi 1 500'dur.

			int sayi1Ref = sayi1;
		//  int sayi2Ref = sayi1; denilerek istediðin kadar degisken olusturabilirsin fakat tum parentlar sayi 1 in 10 degerine baglidir.

				sayi1Ref = 700;

					cout << "Sayi 1'yerine sayi1Ref ile  yazilan gecici deger. (Ekstra ramde yer acildi.)  " << sayi1Ref << endl << "Sayi1 in gercek ram'de tutulan degeri  " << sayi1 << endl;
	
}
*/