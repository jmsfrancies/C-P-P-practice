#include<iostream>
/*
This is a hvac calculator to find the cubic feet per minute from an electric heater.
*/
using namespace std;

int main(){
	int watt,cfm,btu,tempdifference;
	std::cout<<"What is the wattage: ";
	std::cin>>watt;
	std::cout<<"What is the temperature difference: ";
	std::cin>>tempdifference;
	btu = (watt * 3.41);
	cfm = btu/(tempdifference*1.08);
	printf("Total Cubic Feet Per Minute is: %.3d\n", cfm);
	


return 0;
}
