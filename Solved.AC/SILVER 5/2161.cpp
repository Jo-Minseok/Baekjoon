#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int num;
	vector<int> list;
	cin >> num;
	for (int i = 1; i <= num; i++) {
		list.push_back(i);
	}
	while (true) {
		cout << list.front() << " ";
		list.erase(remove(list.begin(), list.end(), list.front()));
		if (list.empty()) {
			break;
		}
		list.push_back(list.front());
		list.erase(remove(list.begin(), list.end(), list.front()));
	}
}