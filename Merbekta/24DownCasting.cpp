#include <iostream>
#include <any>


class Actor {
public:
	int location;
	bool isRender;

};

class Mermi {
public:
	std::string ad;
	int hasar;
};

class Light : public Actor {									//Downcast ramde eri�ilen noktan�n tamam�n� kullanma olay�.			
public:
	int renk;
	bool active;         
};

class Mesh : public Actor {
public:
	int genislik;
	int yukseklik;
};

void hareketET(Actor* actor) {

	actor->location = 10;
	std::cout << actor->location<<std::endl;
}

void aktif(Light *light) {

	light->location = 20;

	std::cout << light->location<<std::endl;


}


int main(void) {
	Light light1;
	light1.active = false;
	Actor actor;
		
	Actor* actorPtr = &light1;
	hareketET(actorPtr);

	Light* lightPtr = (Light*) &actor;
	Light* lightPtr2 = (Light*) actorPtr;			//nesnenin orijinaline ihtiyac�m var. 

	aktif(lightPtr2); //�nce Light class a gidip daha sonra Actor'e giderek kullan�lacak de�i�kenlere hepsi dahil edildi. 







}
