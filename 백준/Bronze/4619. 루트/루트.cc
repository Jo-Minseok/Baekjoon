#include <iostream>
#include <cmath>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int num, pow_num;
	while (true) {
		cin >> num >> pow_num;
		if (num == 0 && pow_num == 0) {
			break;
		}
		int tmp = 1;
		int minu = abs(num - 1);
		for (int i = 1;; i++) {
			if (minu < abs(num - pow(i, pow_num))) {
				break;
			}
			minu = abs(num - pow(i, pow_num));
			tmp = i;
		}
		cout << tmp << "\n";
	}
}