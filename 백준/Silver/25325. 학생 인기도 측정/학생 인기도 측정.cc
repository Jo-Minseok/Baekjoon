#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <algorithm>
#include <sstream>
using namespace std;
bool comp(pair<string, int> a, pair<string, int> b) {
	if (a.second > b.second) {
		return true;
	}
	else if (a.second == b.second) {
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
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int student_count;
	map<string, int> list;
	string name_list,name;
	cin >> student_count;
	cin.ignore();
	getline(cin, name_list);
	stringstream ss(name_list);
	while (ss >> name) {
		list.insert({ name, 0 });
	}
	for (int i = 0; i < student_count; i++) {
		getline(cin,name_list);
		stringstream aa(name_list);
		while (aa >> name) {
			list[name]++;
		}
	}
	vector<pair<string, int>>list2(list.begin(),list.end());
	sort(list2.begin(), list2.end(), comp);
	for (auto i = list2.begin(); i!=list2.end(); i++) {
		cout << i->first << " " << i->second << "\n";
	}
}