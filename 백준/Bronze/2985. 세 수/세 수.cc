#include <iostream>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int num1, num2, num3;
	cin >> num1 >> num2 >> num3;
	if (num1 + num2 == num3) {
		cout << num1 << "+" << num2 << "=" << num3;
	}
	else if (num1 - num2 == num3) {
		cout << num1 << "-" << num2 << "=" << num3;
	}
	else if (num1 * num2 == num3) {
		cout << num1 << "*" << num2 << "=" << num3;
	}
	else if (num1 / num2 == num3) {
		cout << num1 << "/" << num2 << "=" << num3;
	}
	else if (num1 == num2 + num3) {
		cout << num1 << "=" << num2 << "+" << num3;
	}
	else if (num1 == num2 - num3) {
		cout << num1 << "=" << num2 << "-" << num3;
	}
	else if (num1 == num2*num3) {
		cout << num1 << "=" << num2 << "*" << num3;
	}
	else if (num1 == num2 / num3) {
		cout << num1 << "=" << num2 << "/" << num3;
	}
}