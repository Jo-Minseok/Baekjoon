#include <iostream>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int min_num, max_num;
	int sum = 0;
	int min;
	cin >> min_num >> max_num;
	for (int i = min_num; i <= max_num; i++) {
		int gcd = 0;
		for (int j = 1; j <= i; j++) {
			if (i % j == 0) {
				gcd++;
			}
		}
		if (gcd == 2) {
			if (sum == 0) {
				min = i;
			}
			sum += i;
		}
	}
	if (sum == 0) {
		cout << -1;
		return 0;
	}
	cout << sum << "\n" << min;
}