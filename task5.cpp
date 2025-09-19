#include <iostream>
#include <vector>

int max_num(const std::vector<int>& myVector, int size) {
	int max { myVector[0] };
	for (int i { 1 }; i < size; ++i) {
		if (max < myVector[i]) {
			max = myVector[i];
		}
	}
	return max;
}

int min_num(const std::vector<int>& myVector, int size) {
	int min { myVector[0] };
	for (int i { 1 }; i < size; ++i) {
		if (min > myVector[i]) {
			min = myVector[i];
		}
	}
	return min;
}

int main() {
	//std::vector<int> myVector{}; 
	int size {};
	std::cout << "Enter the size of the vector\n";
	std::cin >> size;
	std::vector<int> myVector(7);
	//myVector.reserve(size);
	std::cout << "Enter the numbers\n";
	for (int i { 0 }; i < size; ++i) {
		std::cin >> myVector[i];
	}
	
	std::cout << "Max number is " << max_num(myVector, size) << std::endl;
	std::cout << "Min number is " << min_num(myVector, size) << std::endl;
}
