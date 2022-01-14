#include<iostream>
using namespace std;

int main(void) {

	int list[10];
	list[0] = 1;
	list[1] = 2;
	list[2] = 3;

	int* listP = list + 1; // list + 1 degerine yeni bir pointer tanimla. (Kesinlikle liste 11 elemanli olmaz.)

	cout << *listP<< endl ; //Pointer ile liste 1 artirildi 2. elemani pointer adresle okuyacak
	cout << list[1];        //Ayni deger direkt liste verisinden okunacak.


}




