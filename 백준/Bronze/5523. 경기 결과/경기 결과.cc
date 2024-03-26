#include <iostream>
using namespace std;
int main() {
	int count;
	cin >> count;
	int num1, num2;
	int a = 0, b = 0;
	for (int i = 0; i < count; i++) {
		cin >> num1 >> num2;
		if (num1 > num2) {
			a++;
		}
		else if (num1 < num2) {
			b++;
		}
	}
	cout << a << " " << b;
}