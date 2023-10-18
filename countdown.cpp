// Countdown until blast-off in C++

#include <iostream>
#include <unistd.h>
// Using namespace standard
using namespace std;

//Requiring my main function to search for integers  
int main() {
	std::cout << "Ready In!" << endl;
	// definite loop counting down to zero
	for (int i = 10; i != 0; --i) {
	std::cout << i << endl;
	sleep(1);	
	}
std::cout << "Blast Off!" << endl;
return 0;
}
