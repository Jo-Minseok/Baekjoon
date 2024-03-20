#include <iostream>
using namespace std;
int main() {
	int num1, num2, num3;
	while (true) {
		cin >> num1 >> num2 >> num3;
		if (num1 == 0 && num2 == 0 && num3 == 0) {
			break;
		}
		else {
			if (num1 == 0) {
				num1 = num3 / num2;
			}
			else if (num2 == 0) {
				num2 = num3 / num1;
			}
			else if (num3 == 0) {
				num3 = num1 * num2;
			}
		}
		cout << num1 << " " << num2 << " " << num3 << "\n";
	}
}