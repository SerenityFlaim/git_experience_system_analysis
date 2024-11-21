#include<iostream>

//our main function
int main() {
	//prompting for user's name
	std::string name;
	std::cout << "Enter your name -> ";
	std::cin >> name;

	//forming output
	std::cout << std::endl << "Hello world from " << name << "!\n";
	return 0;
}