// Program that stores and prints the user's first and last name

#include <string>
#include <iostream>
using namespace std;

// main function has a limit on the character length
int main() {
	char firstname[20];
	char lastname[20];
	//first user input request for the first name
	std::cout << "What is your first name: ";
	std::cin >> firstname;
	//second user input request, but for the last name
	std::cout << "What is your last name: ";
	std:cin >> lastname;
	printf("Hello %s %s!\n",firstname.c_str(),lastname.c_str());

}
