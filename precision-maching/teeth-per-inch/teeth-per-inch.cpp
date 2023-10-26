#include<stdio.h>
#include<iostream>
#include<cmath>
/*
*Libraries that are required to run the program
*/
using namespace std;
/*
*
*Function that can provide the teeth per inch based on the thickness of the material
*
*/
int main(){
	float material_thickness, numerator,denominator;
	int tpi,decision;
	std::cout<<"Press 1 for metric and 2 for imperial: ";
	std::cin>>decision;
	/*Decision if the material thickness is in metric/decimal.*/
	if (decision==1){
		std::cout<<"What is the material thickness: ";
		std::cin>>material_thickness;
		tpi = round(3/material_thickness);
		printf("The tpi wth the material thickness of %.3f is: %.2d\n",material_thickness,tpi);
	}
	/*Condition if the fraction has to be converted to decimal/metric.*/
	if (decision==2){
		std::cout<<"What is the top number: ";
		std::cin>>numerator;
		std::cout<<"What is the bottom number: ";
		std::cin>>denominator;
		material_thickness = (numerator/denominator);
		tpi = round(3/material_thickness);
		printf("The tpi wth the material thickness of %.3f is: %.2d\n",material_thickness,tpi);
	}

return 0;
}
