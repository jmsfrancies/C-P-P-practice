/*This is a basic gross to net salary calculator*/
/*Pragma is using the O3 fastest optimization*/
#pragma GCC optimize("Ofast")
/*Libraries required to run the program*/
#include<stdio.h>
#include<iostream>
#include<locale.h>

using namespace std;

/*primary function that ends each net calculation with the bills function*/
int main(){
	float salary,monthly, net,afterbills;
	setlocale(LC_NUMERIC,"");
	std::cout<<"What is your yearly salary:";
	std::cin>>salary;
	if(salary < 33000){
		net = salary * 0.8;
		monthly = salary / 12;
		printf("You're net is $%'.2f\n", net);
		printf("You're monthly net is $%'.2f\n", monthly);
	}
	else if(salary > 33000 and salary <= 60000){
		net = salary * 0.726;
		monthly = salary / 12;
		printf("You're net is $%'.2f\n", net);
		printf("You're monthly net is $%'.2f\n", monthly);
	}
	else if(salary > 60000 and salary <= 95000){
		net = salary * 0.72;
		monthly = salary / 12;
		printf("You're net is $%'.2f\n", net);
		printf("You're monthly net is $%'.2f\n", monthly);
	}
	if(salary > 95000){
		net = salary * 0.65;
		monthly = salary / 12;
		printf("You're net is $%'.2f\n", net);
		printf("You're monthly net is $%'.2f\n", monthly);
	}

return 0;
}
