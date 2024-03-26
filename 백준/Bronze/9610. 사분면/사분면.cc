#include <iostream>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int test_case;
	cin >> test_case;
	int x, y;
	int result[5] = { 0 };
	for (int i = 0; i < test_case; i++) {
		cin >> x >> y;
		if (x == 0 || y == 0) {
			result[4]++;
		}
		else if (x > 0 && y > 0) {
			result[0]++;
		}
		else if (x < 0 && y > 0) {
			result[1]++;
		}
		else if (x < 0 && y < 0) {
			result[2]++;
		}
		else if (x > 0 && y < 0) {
			result[3]++;
		}
	}
	for (int i = 0; i < 5; i++) {
		if (i == 4) {
			cout << "AXIS: " << result[i];
		}
		else {
			cout << "Q" << i + 1 << ": " << result[i] << "\n";
		}
	}
}