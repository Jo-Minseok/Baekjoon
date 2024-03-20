#include <iostream>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	
	int num1, num2, num3;
	while (true) {
		cin >> num1 >> num2 >> num3;
		if (num1 == 0 && num2 == 0 && num3 == 0) {
			break;
		}

		if (num2 - num1 + num2 == num3) {
			cout << "AP " << num2 - num1 + num3 << "\n";
		}
		else {
			cout << "GP " << num2 / num1 * num3 << "\n";
		}
	}
}