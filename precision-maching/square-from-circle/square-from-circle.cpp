#include<iostream>

using namespace std;

int main(){
 	float a,b;
 	int decision;
 	std::cout<<"Do you need to calculate the circle to square or determine circle size from square (1 or 2): ";
 	std::cin>>decision;
 	if (decision==1){
		std::cout<<"What is the diameter of the circle: "<<endl;
		std::cin>>a;
		b = (a * .7071);
		printf("The square that can be produced from the cylindrical billet is: %.3f\n", b);  
	}
	if (decision==2){
		std::cout<<"What is the length of a square side: ";
		std::cin>>a;
		b = (a / .7071);
		printf("The square that can be produced from the cylindrical billet is: %.3f\n", b);  
	}	

return 0;
}
