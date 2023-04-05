#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;

bool comp(pair<int, int>a, pair<int, int>b) {
	return a.second > b.second;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	map<int, int> list;
	int num,sum =0;
	for (int i = 0; i < 10; i++) {
		cin >> num;
		list[num]++;
		sum += num;
	}
	vector < pair<int, int>> list2(list.begin(),list.end());
	sort(list2.begin(), list2.end(), comp);
	cout << sum / 10 << "\n" << list2.begin()->first;
}