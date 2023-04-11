#include <iostream>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int num;
	while (true) {
		cin >> num;
		if (num == 0) {
			break;
		}
		while (true) {
			int tmp = 0;
			while (true) {
				tmp += num % 10;
				num /= 10;
				if (num == 0) {
					break;
				}
			}
			num = tmp;
			if (num / 10 == 0) {
				break;
			}
		}
		cout << num << "\n";
	}
}