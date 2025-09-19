#include <iostream>
#include <string>

void reverse(std::string& name) {
	int end = name.size() - 1;
	for (int i { 0 }; i < name.size() / 2; ++i, --end) {
		std::swap(name[i], name[end]);
	}
}

int main() {
	std::string name { "Edgar" };
	reverse(name);
	std::cout << name;
}
