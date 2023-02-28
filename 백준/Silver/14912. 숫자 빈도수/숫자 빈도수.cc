#include <iostream>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int limit, find;
	int tmp;
	int count = 0;
	cin >> limit >> find;
	for (int i = 1; i < limit+1; i++) {
		tmp = i;
		while (true) {
			if (tmp <= 0) {
				break;
			}
			if (tmp % 10 == find) {
				count++;
			}
			tmp /= 10;
		}
	}
	cout << count;
}