#include <iostream>
#include <map>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

bool comp(pair<string, int> a, pair<string, int>b) {
	return a.second > b.second;
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int test_case,friend_count,strength;
	string name;
	cin >> test_case;
	for (int i = 0; i < test_case; i++) {
		cin >> friend_count;
		map<string, int> list;
		for (int j = 0; j < friend_count; j++) {
			cin >> name >> strength;
			list.insert({ name,strength });
		}
		vector<pair<string, int>> result(list.begin(), list.end());
		sort(result.begin(), result.end(), comp);
		for (auto it = result.begin(); it != result.end(); it++) {
			cout << it->first;
			if (it == result.end() - 1) {
				cout << "\n";
			}
			else {
				cout << ", ";
			}
		}
	}
}