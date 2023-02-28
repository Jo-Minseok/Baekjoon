#include <iostream>
using namespace std;
int main() {
	int count, a, d, g,result = 0;
	int max = 0;
	cin >> count;
	for (int i = 0; i < count; i++) {
		cin >> a >> d >> g;
		result = a * (d + g);
		if (a == (d + g)) {
			result *= 2;
		}
		if (max < result) {
			max = result;
		}
	}
	cout << max;
}