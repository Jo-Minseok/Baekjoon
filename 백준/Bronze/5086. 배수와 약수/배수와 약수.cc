#include <iostream>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int num1, num2;
	while (true) {
		cin >> num1 >> num2;
		if (num1 == 0 && num2 == 0) {
			break;
		}
		if (num1 > num2) {
			if (num1 % num2 == 0) {
				cout << "multiple\n";
			}
			else {
				cout << "neither\n";
			}
		}
		else if (num1 < num2) {
			if (num2 % num1 == 0) {
				cout << "factor\n";
			}
			else {
				cout << "neither\n";
			}
		}
	}
}