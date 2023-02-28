#include <iostream>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int count;
	cin >> count;
	int test_count;
	int result = 0;
	int num;
	for (int i = 0; i < count; i++) {
		result = 0;
		cin >> test_count;
		for (int j = 0; j < test_count; j++) {
			cin >> num;
			result += num;
		}
		cout << result << "\n";
	}
}