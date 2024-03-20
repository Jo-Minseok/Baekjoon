#include <iostream>
#include <map>
#include <vector>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int human_count, limit_count, gender, grade, result = 0;
	cin >> human_count >> limit_count;
	map<int, pair<int, int>>list;
	while (human_count--) {
		cin >> gender >> grade;
		switch (gender)
		{
		case 0:
			list[grade - 1].first++;
			break;
		case 1:
			list[grade - 1].second++;
			break;
		default:
			break;
		}
	}
	vector<pair<int, pair<int, int>>>list2(list.begin(), list.end());
	for (auto i = list2.begin(); i != list2.end(); i++) {
		result += i->second.first / limit_count + i->second.second / limit_count;
		if (i->second.first % limit_count != 0) {
			result++;
		}
		if (i->second.second % limit_count != 0) {
			result++;
		}
	}
	cout << result;
}