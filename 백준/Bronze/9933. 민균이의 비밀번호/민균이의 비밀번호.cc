#include <iostream>
#include <string>
#include <algorithm>
#include <map>
#include <vector>
using namespace std;

bool comp(pair<string, int> a, pair<string, int> b) {
	return a.second > b.second;
}

int main() {
	int test_case;
	string text;
	map<string, int> list;
	cin >> test_case;
	for (int i = 0; i < test_case; i++) {
		cin >> text;
		list[text]++;
		reverse(text.begin(), text.end());
		list[text]++;
	}
	vector<pair<string, int>> result(list.begin(), list.end());
	sort(result.begin(), result.end(),comp);
	cout << result[0].first.length() << " " << result[0].first[result[0].first.length() / 2];
}