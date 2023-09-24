#include <iostream>
#include <windows.h>
#include "Greeter.h"

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	std::string name;
	std::cout << "Введить имя: ";
	std::cin >> name;
	Greeter greeter;
	std::cout << "Здравствуйте, " << greeter.greet(name) << "!";
}
