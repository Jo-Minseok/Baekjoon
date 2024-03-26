#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;
bool comp(pair<long long, int> a, pair<long long, int> b) {
	if (a.second > b.second) {
		return true;
	}
	else if (a.second == b.second) {
		return a.first < b.first;
	}
	else {
		return false;
	}
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	map<long long, int>list;
	int test_case;
	cin >> test_case;
	long long num;
	for (int i = 0; i < test_case; i++) {
		cin >> num;
		list[num]++;
	}
	vector<pair<long long, int>> result(list.begin(), list.end());
	sort(result.begin(), result.end(),comp);
	cout << result[0].first;
}