#include <iostream>
using namespace std;
int main() {
	int test_count;
	cin >> test_count;
	int r, e, c;
	for (int i = 0; i < test_count; i++) {
		cin >> r >> e >> c;
		if (r < e - c) {
			cout << "advertise\n";
		}
		else if (r > e - c) {
			cout << "do not advertise\n";
		}
		else {
			cout << "does not matter\n";
		}
	}
}