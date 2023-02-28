#include <iostream>
using namespace std;
int main() {
	unsigned long long r, c, n;
	int count = 0;
	cin >> r >> c >> n;
	if (r % n == 0) {
		r = r / n;
	}
	else {
		r = r / n + 1;
	}
	if (c % n == 0) {
		c = c / n;
	}
	else {
		c = c / n + 1;
	}
	cout << c * r;
}