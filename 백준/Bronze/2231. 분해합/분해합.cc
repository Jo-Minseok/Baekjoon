#include <iostream>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int num;
	cin >> num;
	int j;
	int result = 0, sum,tmp;
	for (int i = 0; i < num; i++) {
		tmp = sum = i;
		while (tmp > 0) {
			sum += tmp % 10;
			tmp /= 10;
		}
		if (sum == num) {
			cout << i;
			return 0;
		}
	}
	cout << 0;
}