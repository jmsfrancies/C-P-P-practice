#include<iostream>
#include<string>
using namespace std;

int main(){
	std::string food, reason;
	std::cout<<"What is your favorite food: "<<endl;
	std::getline(std::cin, food);
	std::cout<<"Why do you like "<<food<<" ?"<<endl;
	std::getline(std::cin, reason);
	std::cout<<"You like "<<food<<" because "<<reason<<" that's good enough for me!"<<endl;  
}
