#include <iostream>
#include <string>


int main() {
	setlocale(LC_ALL, "Ru");
	std::string str;

	std::cout << "Введите имя: ";
	std::cin >> str;

	std::cout << "Здравствуйте, Виталий!" << std::endl;
}