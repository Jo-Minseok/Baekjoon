#include <iostream>
#include <map>
#include <string>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int command_count;
	cin >> command_count;
	string command;
	int result = 0;
	map<string, int> list;
	for (int i = 0; i < command_count; i++) {
		cin >> command;
		if (command == "ENTER") {
			list.clear();
		}
		else {
			list[command]++;
			if (list[command] == 1) {
				result++;
			}
		}
	}
	cout << result;
}