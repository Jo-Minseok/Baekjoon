#include <iostream>
using namespace std;
int main() {
	int count;
	double a, b;
	cin >> count;
	for (int i = 0; i < count; i++) {
		cin >> a >> b;
		printf("The height of the triangle is %.2f units\n", a*2/b);
	}
}