#include <iostream>
#include <string>
#include <set>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int test_case;
	int length = 0;
	cin >> test_case;
	string number;
	vector<string> list;
	for (int i = 0; i < test_case; i++) {
		cin >> number;
		reverse(number.begin(), number.end());
		list.push_back(number);
	}
	while (true) {
		set<string>a;
		for (int i = 0; i < test_case; i++) {
			a.insert(list[i].substr(0, length));
		}
		if (a.size() == test_case) {
			break;
		}
		length++;
	}
	cout << length;
}