#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cout.tie(nullptr);
	cin.tie(nullptr);
	int test_case = 0;
	int note_1_count, note_2_count, num;
	cin >> test_case;
	for (int i = 0; i < test_case; i++) {
		cin >> note_1_count;
		vector<int>note_list;
		for (int j = 0; j < note_1_count; j++) {
			cin >> num;
			note_list.push_back(num);
		}
		sort(note_list.begin(), note_list.end());
		cin >> note_2_count;
		for (int k = 0; k < note_2_count; k++) {
			cin >> num;
			if (binary_search(note_list.begin(),note_list.end(),num)) {
				cout << 1 << "\n";
			}
			else {
				cout << 0 << "\n";
			}
		}
	}
}