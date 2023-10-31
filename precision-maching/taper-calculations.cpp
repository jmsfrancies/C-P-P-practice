/*The calculations to determine the large diameter, small diameter, length, taper per inch,
and taper per inch.*/

#include<stdio.h>
#include<iostream>

using namespace std;
/*determine the large diameter*/
int largediameter(){
	float smalldiameter,lengthoftaper,tpi,largediameter;
	printf("large diameter function\n");
	std::cout<<"What is the small diameter: ";
	std::cin>>smalldiameter;
	std::cout<<"What is the length of taper: ";
	std::cin>>lengthoftaper;
	std::cout<<"What is the taper per inch: ";
	std::cin>>tpi;
	largediameter = (tpi * lengthoftaper) + smalldiameter;
	printf("The large diameter is %.3f\n", largediameter);
return 0;
}
/*determine the small diameter*/
int smalldiameter(){
	float smalldiameter,lengthoftaper,tpi,largediameter;
	printf("small diameter function\n");
	std::cout<<"What is the large diameter: ";
	std::cin>>largediameter;
	std::cout<<"What is the length of taper: ";
	std::cin>>lengthoftaper;
	std::cout<<"What is the taper per inch: ";
	std::cin>>tpi;
	smalldiameter = largediameter - (tpi * lengthoftaper);
	printf("The small diameter is %.3f\n", smalldiameter);
return 0;
}
/*determine the length of the taper*/
int lengthoftaper(){
	float smalldiameter,lengthoftaper,tpi,largediameter;
	printf("length of taper function\n");
	std::cout<<"What is the small diameter: ";
	std::cin>>smalldiameter;
	std::cout<<"What is the large diameter: ";
	std::cin>>largediameter;
	std::cout<<"What is the taper per inch: ";
	std::cin>>tpi;
	lengthoftaper = ((largediameter - smalldiameter) / tpi);
	printf("The length of taper is %.3f\n", lengthoftaper);
return 0;
}
/*determine the taper per inch*/
int tpi(){
	float smalldiameter,lengthoftaper,tpi,largediameter;
	printf("taper per inch function\n");
	std::cout<<"What is the small diameter: ";
	std::cin>>smalldiameter;
	std::cout<<"What is the length of taper: ";
	std::cin>>lengthoftaper;
	std::cout<<"What is the large diameter: ";
	std::cin>>largediameter;
	tpi = (largediameter - smalldiameter)/lengthoftaper;
	printf("The taper per inch is %.3f\n", tpi);
return 0;
}
/*determine the taper per foot*/
int tpf(){
	float smalldiameter,lengthoftaper,tpi,largediameter,tpf;
	printf("taper per foot function\n");
	std::cout<<"What is the small diameter: ";
	std::cin>>smalldiameter;
	std::cout<<"What is the length of taper: ";
	std::cin>>lengthoftaper;
	std::cout<<"What is the large diameter: ";
	std::cin>>largediameter;
	tpi = (largediameter - smalldiameter)/lengthoftaper;
	tpf = tpi * 12;
	printf("The taper per foot is %.3f\n", tpf);
return 0;
}
/*primary function to determine which function to use*/

int main(){
	int choice;
	std::cout<<"Choose 1 for large diameter, 2 for small diameter, 3 for the length of taper,\n4 for the tpi, and 5 for the tpf: ";
	std::cin>>choice;
	while (choice < 1 || choice > 5){
		std::cout<<"Choose 1 for large diameter, 2 for small diameter, 3 for the length of taper,\n4 for the tpi, and 5 for the tpf: ";
		std::cin>>choice;
		if (choice == 1){
			break;	
	}
		if (choice == 2){
			break;	
	}
		if (choice == 3){
			break;	
	}
		if (choice == 4){
			break;	
	}
		if (choice == 5){
			break;	
	}
	}
	
	if (choice == 1){
		largediameter();	
	}
	if (choice == 2){
		smalldiameter();	
	}
	if (choice == 3){
		lengthoftaper();	
	}
	if (choice == 4){
		tpi();	
	}
	if (choice == 5){
		tpf();	
	}
	

return 0;
}
