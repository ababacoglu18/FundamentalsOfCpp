 #include <iostream>
using namespace std;

int main() {

	int a = 10;

	if (a > 10 && a > 11) {

		cout << "1: dogru";

	}
	else {
		cout << "1: yanlis"<< endl;  // Mantik operatoru (0 V 0) != 1; !!!
	}

	if (a == 10 || a == 11) {
		cout << "2: dogru"<< endl;
	}


	//Sarta bagli degisken tanimlama

	bool DetVariable = a == 10;
	cout << DetVariable<< endl; //a 10'a esitse DetVariable'in degerini true dondurur. 


	//Ozel sarta bagli ise
	bool DetVariable2 = a == 11 ? true : false; //DetVariable'nin degeri 11 e esit mi? esitse true false degerinden ikisinden birini yaz.
	cout << DetVariable2 << endl;
	//Baska degerler de atanabilir dogruysa iki noktadan oncesini okuyor.
	char DetVariable3 = a == 10 ? 'a' : 'b';
	cout << DetVariable3<<endl;
	


}
