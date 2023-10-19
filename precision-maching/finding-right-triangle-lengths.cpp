//
//Modules to include are iostream and cmath.
//
#include<iostream>
#include<cmath>
//
//
//This program assists the user in determining different lengths of each
//side of a right triangle based on the user's input of the other two side's lengths.
//
//
using namespace std;
// function for the adjacent side's length.
float adjacent(){
	float c,b;
	float a;
	std::cout<<"What is the hypotenuse side's length: ";
	std::cin>>c;
	std::cout<<"What is the opposite side's length: ";
	std::cin>>b;
	a = sqrt((c*c) - (b*b));
	printf("The adjacent is: %.3f\n", a);
return 0;
}
// function for the hypotenuse side's length.
float hypotenuse(){
	float a,b;
	float c;
	std::cout<<"What is the adjacent side's length: ";
	std::cin>>a;
	std::cout<<"What is the opposite side's length: ";
	std::cin>>b;
	c = sqrt((a*a) + (b*b)),0.001;
	printf("The Hypotenuse is: %.3f\n", c);
return 0;
}
// function for the opposite side's length.
float opposite(){
	float c,a;
	float b;
	std::cout<<"What is the hypotenuse side's length: ";
	std::cin>>c;
	std::cout<<"What is the adjacent side's length: ";
	std::cin>>a;
	b = sqrt((c*c) - (a*a));
	printf("The opposite is: %.3f\n", b);
return 0;

}
// function call that requires user input to determine which side the user wants to measure.
// the hypotenuse is 1, the opposite is 2, and the adjacent is 3.
int main(){
	int userinput;
	std::cout<<"Press 1 for hypotenuse, 2 for opposite, and 3 for adjacent: ";
	std::cin>>userinput;
	if (userinput == 2){
		opposite();
	}
	if (userinput == 1){
		hypotenuse();
	}
	if (userinput ==3) {
		adjacent();		
	}
return 0;
}
