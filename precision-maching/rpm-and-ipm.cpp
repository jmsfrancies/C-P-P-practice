#include<iostream>

using namespace std;


int main(){
	int rpm,cs,n;
	float diameter,ipm,fpt;
	/*User input for cutting speed, number of teeth, diameter of the tool,
	and the chip load per tooth. */
	std::cout<<"What is the cutting speed: ";
	std::cin>>cs;
	std::cout<<"What are the number of teeth on the bit:";
	std::cin>>n;
	std::cout<<"What is the diameter of the tool: ";
	std::cin>>diameter;
	std::cout<<"What is the Chip load per tooth:";
	std::cin>>fpt;
	/*Calculations for feed rate and revolutions per minute*/
	rpm = ((3.82*cs)/diameter);
	ipm = (fpt * n * rpm);
	printf("The revolutions per minute are: %.3d\n",rpm);
	printf("The inches per minute are: %.3f\n",ipm);


return 0;
}
