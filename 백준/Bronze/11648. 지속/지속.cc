#include <iostream>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int result = 0, num = 0,next_num = 1;
	cin >> num;
	while (true) {
		next_num = 1;
		if (num / 10 == 0) {
			break;
		}
		else {
			while (true) {
				if (num / 10 == 0) {
					next_num *= num % 10;
					break;
				}
				else {
					next_num *= num % 10;
					num /= 10;
				}
			}
			num = next_num;
			result++;
		}
	}
	cout << result;
}