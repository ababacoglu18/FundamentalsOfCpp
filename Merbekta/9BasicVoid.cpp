#include <iostream>


void topla(int a, int b) {

	std::cout<<"Toplam Fonksiyonu" << a + b << std::endl;
}
void divide(int a, int b) {
	std::cout << "Bolum fonksiyonu " << a / b << std::endl;

}

int main(void) {

	int a = 0;
	int b = 0;
	
	for (int i = 1; i <= 10; i++) {
		std::cout << i << '.';  topla(10, i);
		if (i == 10)
			std::cout << std::endl;
	}	
		
	for (int i = 1; i <= 10; i++) {
		std::cout << i << '.';  divide(100, i);
	}
	
}
