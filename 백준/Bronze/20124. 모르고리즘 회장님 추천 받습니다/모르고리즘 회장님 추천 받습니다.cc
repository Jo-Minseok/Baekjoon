#include <iostream>
#include <map>
#include <algorithm>
#include <vector>
using namespace std;

void init() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
}

bool comp(pair<string, int> a, pair<string, int>b) {
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
	init();

	int human_count,score;
	string name;
	map<string, int> mp;

	cin >> human_count;
	while (human_count--) {
		cin >> name >> score;
		mp[name] = score;
	}
	vector<pair<string, int>> v(mp.begin(),mp.end());
	sort(v.begin(), v.end(),comp);

	cout << v[0].first;
}