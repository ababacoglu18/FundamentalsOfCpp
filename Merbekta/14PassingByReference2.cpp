#include <iostream>


void TopunRenginiDegistir(int& top) {

	top = 100;

}
int main(void) {

	int top = 0;

	int& topRef = top;

	TopunRenginiDegistir(topRef);  
	std::cout << top;

	//

}