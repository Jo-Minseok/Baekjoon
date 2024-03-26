#include <iostream>
#include <cmath>
using namespace std;
int main() {
	int a, b, c;
	cin >> a >> b >> c;
	if (pow(a, 2) == (pow(b, 2) + pow(c, 2)) || pow(b, 2) == (pow(a, 2) + pow(c, 2)) || pow(c, 2) == (pow(b, 2) + pow(a, 2))) {
		cout << 1;
	}
	else if (a == b && b == c) {
		cout << 2;
	}
	else {
		cout << 0;
	}
}