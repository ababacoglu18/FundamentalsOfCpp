#include <iostream>
#include <any>


class Actor{
public:
	int location;
	bool isRender;

};

class Mermi {
public:
	std::string ad;
	int hasar;
};

class Light : public Actor {
public:
	int renk;
	bool active;
};

class Mesh : public Actor {
public:
	int genislik;
	int yukseklik;
};

void hareketEt(Actor *actor) {
		actor->location = 10 ;
		std::cout <<"Hareket Et Void...  =" << actor->location << std::endl;
}


int main(void) {
	Light light1;
	light1.location = 10;

	Mermi mermi1;
	mermi1.ad = "Zirh Delici.";
	mermi1.hasar = 100;

	Actor* actorPtr;
	actorPtr = (Actor*) &mermi1;
	std::cout<<"actorPtr->Mermi->Actor Cast Failed... :" << actorPtr->location << std::endl;             //ilk 4 byte sorunu. 


	Actor* actorLightPtr;
	actorLightPtr = (Actor*) &light1;
	std::cout<<"actorLightPtr Cast... =" << actorLightPtr->location << std::endl;                 //Unreal Engine'de s�k�a kullan�r�z.
																	//Class'tan olu�mu� class'tan veri �ekilirken s�k�nt� ya�an�yor. 
	hareketEt(actorLightPtr);

	Actor* actorLighttoActorPtr;
	actorLighttoActorPtr = (Actor*) &light1;
	std::cout << "light1 to Light and Actor... ";	

	hareketEt(&light1);												//Akt�r b.a isteyen fonksiyona ���k bellek adresi verildi
																	//Bir s�k�nt� ��kmad� ��nk� light actorden kal�t�lm�� bir class.
}