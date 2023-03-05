#include <iostream>
#include <map>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;
bool comp(pair<int, pair<string, string>>a, pair<int, pair<string, string>>b) {
	if (a.second.first < b.second.first) {
		return true;
	}
	else if (a.second.first == b.second.first) {
		if (a.second.second > b.second.second) {
			return true;
		}
		else {
			return false;
		}
	}
	else {
		return false;
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int test_case;
	string mentor, mentee;
	map<int, pair<string, string>>list;
	cin >> test_case;
	for (int i = 0; i < test_case; i++) {
		cin >> mentor >> mentee;
		list.insert({ i,{mentor,mentee} });
	}
	vector<pair<int, pair<string, string>>>list2(list.begin(), list.end());
	sort(list2.begin(), list2.end(), comp);
	for (auto it = list2.begin(); it != list2.end(); it++) {
		cout << it->second.first << " " << it->second.second << "\n";
	}
}