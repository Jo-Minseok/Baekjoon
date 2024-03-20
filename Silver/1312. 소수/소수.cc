#include <iostream>
#include <cmath>
using namespace std;
int main() {
	int a, b, N;
	int result;
	cin >> a >> b >> N;
	if (a == b) {
		cout << 0;
		return 0;
	}
	for (int i = 0; i < N; i++) {
		a %= b;
		a *= 10;
		result = a / b;
	}
	cout << result;
}