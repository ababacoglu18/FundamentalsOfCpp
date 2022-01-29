#include <iostream>
using namespace std;

int main(void) {

	int list[10];
	list[0] = 1; list[1] = 2; list[2] = 3; list[3] = 4; list[4] = 5; list[5] = 6; list[6] = 7;

	char list2[] = "Merhaba.";


	int a;
	for (int i = 0; i < 10; i++) {

		cout << &list[i] <<"\t" << list2[i] << endl; //&list[i] Ram bellek adresleri verir.
		
	}



}
