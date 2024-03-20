#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool comp(pair<string, double> a, pair<string, double> b) {
	return a.second > b.second;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int human_count;
	double height;
	string name;
	while (true) {
		vector<pair<string, double>> list;
		cin >> human_count;
		if (human_count == 0) {
			break;
		}
		while (human_count--) {
			cin >> name >> height;
			list.push_back({ name,height });
		}
		sort(list.begin(), list.end(), comp);
		double max = list[0].second;
		for (auto i : list) {
			if (i.second == max) {
				cout << i.first << " ";
			}
		}
		cout << "\n";
	}
}