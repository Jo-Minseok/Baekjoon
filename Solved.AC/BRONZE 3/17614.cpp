#include <iostream>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int num;
	int result = 0;
	cin >> num;
	for (int i = 1; i <= num; i++) {
		int tmp = i;
		while (true) {
			if (tmp == 0) {
				break;
			}
			if (tmp % 10 == 3 || tmp % 10 == 6 || tmp % 10 == 9) {
				result++;
			}
			tmp /= 10;
		}
	}
	cout << result;
}