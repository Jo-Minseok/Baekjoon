#include <iostream>
int main() {
	int a;
	std::cin >> a;
	int v = a / 5;
	for (int i = 0; i < v; i++) {
		std::cout << "V";
	}
	int i = a % 5;
	for (int j = 0; j < i; j++) {
		std::cout << "I";
	}
}