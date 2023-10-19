#include<iostream>

using namespace std;
/*
This program calculates percentage changes
Use the highest percentage for percentage_1 and
the lowest percentage for percentage_2
the algorithm in question is: 
(((percentage_1 - percentage_2)/percentage_1)*100)
*/

int main(){
	float a,b,c;


	std::cout<<"What is the previous percentage: ";
	std::cin>>a;
	std::cout<<"What is the current percentage: ";
	std::cin>>b;
	c = ((a-b)/b)*100;
	printf("The Perentage change is: %.3f",c);



return 0;
}
