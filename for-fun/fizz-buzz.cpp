#include<iostream>
//
//
//This is the fizz buzz code test.
//
//
using namespace std;


int main(){
	for (int i = 0; i != 101 ; ++i ){
		if (i % 3 != 0 and i % 5 !=0){
		std::cout<<i<<endl;
	}
		if (i % 3 == 0 and i % 5 != 0){
		std::cout<<"Fizz"<<endl;
	}
		if (i % 3 != 0 and i % 5 == 0){
		std::cout<<"Buzz"<<endl;	
	}
		if (i % 3 == 0 and i % 5 == 0 and i != 0){
		std::cout<<"Fizz Buzz"<<endl;	
	}



}
return 0;
}
