#include <iostream>
#include <map>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

bool comp(pair<string, int>a, pair<string, int>b) {
	return a.first < b.first;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int test_case;
	cin >> test_case;
	string name;
	map<string, int> list;
	for (int i = 0; i < test_case; i++) {
		cin >> name;
		list[name.substr(name.find('.') + 1)]++;
	}
	vector<pair<string, int>> result(list.begin(), list.end());
	sort(result.begin(), result.end(), comp);
	vector<pair<string, int>>::iterator it = result.begin();
	for (; it != result.end(); it++) {
		cout << it->first << " " << it->second << "\n";
	}
}