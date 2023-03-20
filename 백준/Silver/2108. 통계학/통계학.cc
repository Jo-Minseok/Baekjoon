#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#include <cmath>
using namespace std;

bool comp(pair<int, int> a, pair<int, int>b) {
	if (a.second > b.second) {
		return true;
	}
	else if (a.second == b.second) {
		if (a.first > b.first) {
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
	cin.tie(NULL);
	cout.tie(NULL);

	int line_count;
	double sum = 0;
	cin >> line_count;
	int count_max = 0;
	vector<double> vec(line_count);
	map<double, int> maplist;
	for (int i = 0; i < line_count; i++) {
		cin >> vec[i];
		sum += vec[i];
		maplist[vec[i]]++;
		if (count_max < maplist[vec[i]]) {
			count_max = maplist[vec[i]];
		}
	}
	int avg = round(sum / line_count);
	cout << avg << "\n";

	sort(vec.begin(), vec.end());
	cout << vec[line_count / 2] << "\n";

	int _count = 0;
	vector<pair<int, int>> list(maplist.begin(), maplist.end());
	for (auto it = list.begin(); it != list.end(); it++) {
		if (it->second == count_max) {
			_count++;
		}
	}
	sort(list.begin(), list.end(), comp);
	if (_count == 1) {
		cout << list[0].first << "\n";
	}
	else {
		cout << list[_count - 2].first << "\n";
	}

	cout << abs(vec[0] - vec[line_count-1]);
}