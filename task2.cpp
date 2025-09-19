#include <iostream>

void swap(int& num1, int& num2) {
	int tmp = num1;
	num1 = num2; 
	num2 = tmp;
}

int main() {
	int num1 { 10 };
	int num2 { 20 };
	std::cout << "Before " << num1 << " " << num2 << std::endl;
	swap(num1, num2);
	std::cout << "After " << num1 << " " << num2;
}
