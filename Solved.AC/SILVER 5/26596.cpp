#include <iostream>
#include <map>
#include <cmath>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int test_case;
	bool check = false;
	cin >> test_case;
	string name;
	map<string, int> list;
	int capacity;
	for (int i = 0; i < test_case; i++) {
		cin >> name >> capacity;
		list[name] += capacity;
	}
	for (auto i = list.begin(); i != list.end(); i++) {
		for (auto j = list.begin(); j != list.end(); j++) {
			if ((int)(i->second * 1.618) == j->second && i->first != j->first) {
				check = true;
				break;
			}
		}
	}
	if (check) {
		cout << "Delicious!";
	}
	else {
		cout << "Not Delicious...";
	}
}