#include <iostream>
using namespace std;
int main() {
	int S, A;
	cin >> S >> A;
	if (S >= 2 && A >= 2) {
		if (S / 2 > A / 2) {
			cout << A / 2;
		}
		else {
			cout << S / 2;
		}
	}
	else {
		cout << 0;
	}
}