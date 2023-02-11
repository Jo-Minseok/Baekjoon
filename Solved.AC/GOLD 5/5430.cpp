#include <iostream>
#include <string>
#include <deque>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int test_case, arr_count;
	cin >> test_case;

	for (int i = 0; i < test_case;
		i++) {
		string function, arr;
		bool error = false;
		bool reverse = false;
		deque<int>list;
		string num_tmp = "";
		cin >> function >> arr_count >> arr;
		for (int j = 0; j < arr.length(); j++) {
			if (isdigit(arr[j])) {
				num_tmp += arr[j];
			}
			else {
				if (!num_tmp.empty()) {
					list.push_back(stoi(num_tmp));
					num_tmp = "";
				}
			}
		}

		for (int k = 0; k < function.length(); k++) {
			if (function[k] == 'R') {
				if (reverse) {
					reverse = false;
				}
				else {
					reverse = true;
				}
			}
			else if (function[k] == 'D') {
				if (list.empty()) {
					cout << "error\n";
					error = true;
					break;
				}
				else {
					if (reverse) {
						list.pop_back();
					}
					else {
						list.pop_front();
					}
				}
			}
		}

		if (!error) {
			cout << "[";
		}
		if (reverse && !list.empty()) {
			for (auto it = list.rbegin(); it != list.rend(); it++) {
				if (it == list.rend() - 1) {
					cout << *it;
				}
				else {
					cout << *it << ",";
				}
			}
		}
		else if (!reverse && !list.empty()) {
			for (auto it = list.begin(); it != list.end(); it++) {
				if (it == list.end() - 1) {
					cout << *it;
				}
				else {
					cout << *it << ",";
				}
			}
		}
		if (!error) {
			cout << "]\n";
		}
	}
}