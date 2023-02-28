#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int command_count,num;
	string command;
	vector<int> list;
	vector<int>::iterator it;
	cin >> command_count;
	for (int i = 0; i < command_count; i++) {
		cin >> command;
		if (command == "add") {
			cin >> num;
			if (find(list.begin(), list.end(), num) == list.end()) {
				list.push_back(num);
			}
		}
		else if (command == "remove") {
			cin >> num;
			if (find(list.begin(), list.end(), num) != list.end()) {
				list.erase(remove(list.begin(),list.end(),num));
			}
		}
		else if (command == "check") {
			cin >> num;
			if (find(list.begin(), list.end(), num) != list.end()) {
				cout << 1 << "\n";
			}
			else {
				cout << 0 << "\n";
			}
		}
		else if (command == "toggle") {
			cin >> num;
			if (find(list.begin(), list.end(), num) == list.end()) {
				list.push_back(num);
			}
			else {
				list.erase(remove(list.begin(), list.end(), num));
			}
		}
		else if (command == "all") {
			list.clear();
			for (int i = 1; i <= 20; i++) {
				list.push_back(i);
			}

		}
		else if (command == "empty") {
			list.clear();
		}
	}
}