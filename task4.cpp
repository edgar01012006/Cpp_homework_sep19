#include <iostream>
#include <vector>

int sum_of_vector(const std::vector<int>& myVector, int size) {
	int sum = 0;
	for (int i = 0; i < size; ++i) {
		sum += myVector[i];
	}
	return sum;
}

int main() {
	int size {};
	std::cout << "Enter the size of the vector\n";
	std::cin >> size;
	std::vector<int> myVector (size);
	for (int i { 0 }; i < size; ++i) {
		std::cin >> myVector[i];
	}

	/*
	for (int i : myVector) {
		std::cout << i << ' ';
	}
	*/

	std::cout << "Sum = " << sum_of_vector(myVector, size) << std::endl;
	std::cout << "Average = " << sum_of_vector(myVector, size) / size << std::endl;
}
