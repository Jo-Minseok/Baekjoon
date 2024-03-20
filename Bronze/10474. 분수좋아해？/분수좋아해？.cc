#include <iostream>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int num1, num2, num3;
	while (true) {
		cin >> num1 >> num2;
		if (num1 == 0 && num2 == 0) {
			break;
		}
		num3 = num1 / num2;
		cout << num3 << " " << num1 % num2 << " / " << num2 << "\n";
	}
}