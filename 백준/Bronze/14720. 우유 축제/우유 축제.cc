#include <iostream>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int test_case;
	cin >> test_case;
	int index = 0, result = 0, num;
	for (int i = 0; i < test_case; i++) {
		cin >> num;
		if (index == num) {
			index++;
			if (index == 3) {
				index = 0;
			}
			result++;
		}
	}
	cout << result;
}