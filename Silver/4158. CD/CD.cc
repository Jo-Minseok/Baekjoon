#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int sang, sun, num;
	while (true) {
		int result = 0;
		vector<int> list;
		cin >> sang >> sun;
		if (!sang && !sun) {
			break;
		}
		for (int i = 0; i < sang; i++) {
			cin >> num;
			list.push_back(num);
		}
		for (int i = 0; i < sun; i++) {
			cin >> num;
			if (binary_search(list.begin(), list.end(), num)) {
				result++;
			}
		}
		cout << result << "\n";
	}
}