#include <iostream>
#include <algorithm>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int num;
	cin >> num;
	int kg5=0, kg3 = 0;
	kg5 = num / 5;
	kg3 = num % 5;
	if (kg3 == 0) {
		cout << kg5;
		return 0;
	}
	if (kg3 % 3 == 0) {
		cout << kg5 + kg3 / 3;
		return 0;
	}
	while (true) {
		if (kg5 > 0) {
			kg5--;
			kg3 += 5;
			if (kg3 % 3 == 0) {
				kg3 /= 3;
				break;
			}
		}
		if (kg5 == 0 && kg3 % 3 != 0) {
			cout << -1;
			return 0;
		}
	}
	cout << kg5 + kg3;
}