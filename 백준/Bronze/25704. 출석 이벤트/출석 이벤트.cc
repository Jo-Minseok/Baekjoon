#include <iostream>
using namespace std;
int main() {
	int daily_check_cc, index = 0;
	double price;
	cin >> daily_check_cc >> price;
	int result[4] = { price - 500, price - price * 0.1, price - 2000, price - price * 0.25 };
	if (daily_check_cc / 20 > 0) {
		index = 4;
	}
	else if (daily_check_cc / 15 > 0) {
		index = 3;
	}
	else if (daily_check_cc / 10 > 0) {
		index = 2;
	}
	else if (daily_check_cc / 5 > 0) {
		index = 1;
	}
	else {
		cout << price << endl;
		return 0;
	}
	int min = result[0];
	for (int i = 0; i < index; i++) {
		if (min > result[i]) {
			min = result[i];
		}
	}
	if (min < 0) {
		cout << 0 << endl;
	}
	else {
		cout << min << endl;
	}
}