#include<iostream>

//наша основная функция
int main() {
	//запрашивание имени пользователя
	std::string name;
	std::cout << "Enter your name -> ";
	std::cin >> name;

	//формирование вывода
	std::cout << std::endl << "Hello world from " << name << "!\n";
	return 0;
}
