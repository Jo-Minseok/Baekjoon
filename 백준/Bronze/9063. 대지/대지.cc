#include <iostream>
#include <cmath>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int test_count;
	cin >> test_count;
	int min_x, max_x, min_y, max_y;
	int x, y;
	for (int i = 0; i < test_count; i++) {
		cin >> x >> y;
		if (i == 0) {
			min_x = max_x = x;
			min_y = max_y = y;
		}
		else {
			if (min_x > x) {
				min_x = x;
			}
			if (max_x < x) {
				max_x = x;
			}
			if (min_y > y) {
				min_y = y;
			}
			if (max_y < y) {
				max_y = y;
			}
		}
	}
	cout << abs(max_x - min_x) * abs(max_y - min_y);
}