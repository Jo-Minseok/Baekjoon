#include <iostream>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int test_case,num;
	cin >> test_case;
	for (int i = 0; i < test_case; i++) {
		cin >> num;
		for (int j = 0; j < num; j++) {
			for (int k = 0; k < num; k++) {
				if (j == 0 || k == 0 || j == num - 1 || k == num - 1) {
					cout << "#";
				}
				else {
					cout << "J";
				}
			}
			cout << "\n";
		}
		cout << "\n";
	}
}