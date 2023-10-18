#include<iostream>
#include<cmath>

using namespace std;

int main(){
	int a,b;
	int c;
	std::cout<<"What is the adjacent side's length: "<<endl;
	std::cin>>a;
	std::cout<<"What is the opposite side's length: "<<endl;
	std::cin>>b;
	c = sqrt((a*a) + (b * b));
	std::cout<<"The Hypotenuse is: "<<c<<endl;
	
return 0;
}
