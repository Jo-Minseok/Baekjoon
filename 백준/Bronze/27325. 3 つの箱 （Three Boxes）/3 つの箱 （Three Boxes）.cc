#include <iostream>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int test_case;
	string command;
	cin >> test_case >> command;
	int place = 1, result = 0;
	for (int i = 0; i < test_case; i++) {
		if (command[i] == 'L') {
			if (place != 1) {
				place--;
			}
		}
		else if (command[i] == 'R') {
			if (place != 3) {
				place++;
			}
		}
		if (place == 3) {
			result++;
		}
	}
	cout << result;
}