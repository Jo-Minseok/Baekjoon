#include <iostream>
#include <cmath>
using namespace std;
int main() {
	int count;
	cin >> count;
	double cookie, eat;
	for (int i = 0; i < count; i++) {
		cin >> cookie >> eat;
		printf("%d\n", (int)ceil(cookie/eat));
	}
}