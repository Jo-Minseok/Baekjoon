#include <iostream>
#include <algorithm>
#include <map>
#include <vector>
using namespace std;

bool comp(pair<int, int>a, pair<int, int>b) {
	return a.second > b.second;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int test_case,area_army_count;
	long long num;
	cin >> test_case;
	for (int i = 0; i < test_case; i++) {
		cin >> area_army_count;
		map<long long,int> list;
		for (int j = 0; j < area_army_count; j++) {
			cin >> num;
			list[num]++;
		}
		vector<pair<long long, int>> list2(list.begin(), list.end());
		sort(list2.begin(), list2.end(), comp);
		auto it = list2.begin();
		if (it->second > (area_army_count / 2)) {
			cout << it->first << "\n";
		}
		else {
			cout << "SYJKGW\n";
		}
	}
}