#include <iostream>
using namespace std;
int main() {
	int count;
	cin >> count;
	double price;
	for (int i = 0; i < count; i++) {
		cin >> price;
		printf("$%.2f\n", price - price * 0.2);
	}
}