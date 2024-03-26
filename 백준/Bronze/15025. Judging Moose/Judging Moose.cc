#include <iostream>
using namespace std;
int main() {
	int left, right;
	cin >> left >> right;
	if (left == 0 && right == 0) {
		cout << "Not a moose";
	}
	else if (left == right) {
		cout << "Even " << left * 2;
	}
	else {
		if (left > right) {
			cout << "Odd " << left * 2;
		}
		else {
			cout << "Odd " << right * 2;
		}
	}
}