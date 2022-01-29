  #include <iostream>
	 #include<cmath>
			using namespace std;
    
	
	int main() 
	{
	
	int a;
	float pi;
	pi = 3.14f;
	std::cout << "a icin bir deger gir." << endl;
	std::cin >> a;

	for (int i=0; i <= a; i++) {
		std::cout << " sinus degeri  " << i << "   " << sin(i*pi/180) << "\n";

		

		
	}



}
