#include <iostream>
using namespace std;
int main() {
	long double p1, q1, p2, q2;
	cin >> p1 >> q1 >> p2 >> q2;
	long double area = p1 * p2 / q1 / q2 / 2;
	if (area - (long long)area != 0) {
		cout << 0;
	}
	else {
		cout << 1;
	}
}