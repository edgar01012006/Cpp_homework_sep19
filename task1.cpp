#include <iostream>

int main() 
{
	std::string name;
	int age {};
	std::cout << "Enter your name\n";
	std::cin >> name;
	std::cout << "Enter your age\n";
	std::cin >> age;
	std::cout << "Hello " << name << " you are " << age << " years old\n";
}

