#include <iostream>

using namespace std;

int main() {
	int sum, min, a, b;
	cin >> sum >> min;
	a = (sum + min) / 2;
	b = (sum - min) / 2;
	if ((sum + min) % 2 != 0 || (sum - min) % 2 != 0) {
		cout << -1 << "\n";
	}
	else {
		if (a >= 0 && b >= 0) {
			if (a >= b) {
				cout << a << " " << b << "\n";
			}
			else {
				cout << b << " " << a << "\n";
			}
		}
		else {
			cout << -1 << "\n";
		}
	}
}