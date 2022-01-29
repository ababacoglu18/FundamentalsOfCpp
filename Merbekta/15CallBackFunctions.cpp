 #include <iostream>


typedef  int callback;
typedef void(*ahmet)();


void merhaba() {

	std::cout << "Merhaba"<< std::endl;
}
void bye() {



}

void ara(void(*FonksiyonPtr)() ) {

	FonksiyonPtr();

}

 



int main(void) {

	void(*FonksiyonPtr)() = &merhaba;  //Özel Gösterim
	ara(FonksiyonPtr);

	ahmet ptr = &bye;
	ptr = &merhaba;
	ara(ptr);


	callback a = 10;


}