#include <iostream>
#include <map>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int test_case, result = 0;
	cin >> test_case;
	map<string, int> list;
	string name, enter;
	for (int i = 0; i < test_case; i++) {
		cin >> name >> enter;
		if (enter == "-") {
			if (list[name] == 0) {
				result++;
			}
			else {
				list[name]--;
			}
		}
		else {
			list[name]++;
		}
	}
	for (auto i = list.begin(); i != list.end(); i++) {
		result += i->second;
	}
	cout << result;
}