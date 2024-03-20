#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

bool cmp(pair<int, int> first, pair<int, int>second) {
	if (first.second < second.second) {
		return true;
	}
	else {
		return false;
	}
}

bool cmp2(pair<int, int>first, pair<int, int>second) {
	if (first.first < second.first) {
		return true;
	}
	else {
		return false;
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int result = 0;
	pair<int, int> list[8];
	for (int i = 0; i < 8; i++) {
		cin >> list[i].second;
		list[i].first = i + 1;
	}
	sort(list, list+8, cmp);
	for (int i = 3; i < 8; i++) {
		result += list[i].second;
	}
	sort(list + 3, list + 8, cmp2);
	cout << result << "\n";
	for (int i = 3; i < 8; i++) {
		cout << list[i].first << " ";
	}
}