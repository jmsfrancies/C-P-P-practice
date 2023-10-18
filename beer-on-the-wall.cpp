// Ninety Nine Bottles of beer on the wall in C++

#include <iostream>
#include <unistd.h>
// Using namespace standard
using namespace std;

//Requiring my main function to search for integers  
int main() {
	// definite loop counting down to zero
	for (int i = 99; i != 0; --i) {
	std::cout << i <<" bottles of beer on the wall," << i <<" bottles of beer.\nTake one down and pass it around " << i << " bottles of beer on the wall.\n" << endl;
	sleep(1);	
	}
std::cout << "Last one down, no more to pass around! No more bottles of beer on the wall." << endl;
return 0;
}
