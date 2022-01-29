#include <iostream>
using namespace std;
//PassByPointer
void degistir(int* sayi1) {

	*sayi1 = 500; 
	cout << &sayi1 << endl;
}

int main(void) {
	int sayi1 = 10;

	int* sayi1Ptr = &sayi1;

	degistir(sayi1Ptr);


	cout << sayi1;

}
