#include <iostream>
using namespace std;
int main() {
	int count;
	cin >> count;
	double q, p;
	for (int i = 0; i < count; i++) {
		cin >> p >> q;
		printf("f = %.1f\n", (p * q) / (p + q));
	}
}