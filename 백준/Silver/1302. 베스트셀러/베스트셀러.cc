#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <string>
using namespace std;

bool comp(pair<string, int>a, pair<string, int>b) {
	if (a.second > b.second) {
		return true;
	}
	else if(a.second == b.second){
		if (a.first < b.first) {
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
	map<string, int> list;
	int test_case;
	cin >> test_case;
	string name;
	for (int i = 0; i < test_case; i++) {
		cin >> name;
		list[name]++;
	}
	vector<pair<string, int>> result(list.begin(),list.end());
	sort(result.begin(), result.end(),comp);
	cout << result[0].first;
}