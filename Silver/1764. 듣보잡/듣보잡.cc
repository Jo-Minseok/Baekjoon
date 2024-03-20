#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int N, M;
	vector<string> namelist;
	vector<string> resultlist;
	string name;
	int result = 0;
	cin >> N >> M;
	for (int i = 0; i < N; i++) {
		cin >> name;
		namelist.push_back(name);
	}
	sort(namelist.begin(), namelist.end());
	for (int i = 0; i < M; i++) {
		cin >> name;
		if (binary_search(namelist.begin(), namelist.end(), name)) {
			resultlist.push_back(name);
		}
	}
	sort(resultlist.begin(), resultlist.end());
	cout << resultlist.size() << "\n";
	for (int i = 0; i < resultlist.size();i++) {
		cout << resultlist[i] << "\n";
	}
}