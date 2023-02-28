#include <iostream>
#include <deque>
using namespace std;

int main() {
	int test_case, document, index,strength;
	cin >> test_case;
	for (int i = 1; i <= test_case; i++) {
		int result = 0;
		deque<pair<int, int>> list;
		cin >> document >> index;
		for (int j = 0; j < document; j++) {
			cin >> strength;
			list.push_back({ j,strength });
		}
		while (true) {
			int max = list[0].second;
			for (auto it = list.begin(); it != list.end(); it++) {
				if (max < it->second) {
					max = it->second;
				}
			}
			if (max != list[0].second) {
				list.push_back(list.front());
				list.pop_front();
			}
			else {
				if (list[0].first == index) {
					break;
				}
				else {
					list.pop_front();
					result++;
				}
			}
		}
		cout << result+1 << "\n";
	}
}