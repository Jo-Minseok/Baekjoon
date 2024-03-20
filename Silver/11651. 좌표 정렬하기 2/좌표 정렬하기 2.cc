#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool cmp(pair<int, int> u, pair<int,int> t) {
	if (u.second < t.second) {
		return true;
	}
	else if (u.second == t.second) {
		if (u.first < t.first) {
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
	int count;
	cin >> count;
	vector<pair<int, int>>pos;
	int x_tmp, y_tmp;
	for (int i = 0; i < count; i++) {
		cin >> x_tmp >> y_tmp;
		pos.push_back(make_pair(x_tmp, y_tmp));
	}
	sort(pos.begin(), pos.end(),cmp);
	for (auto loop : pos){
		cout << loop.first << " " << loop.second << "\n";
	}
	
}