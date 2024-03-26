#include <iostream>
#include <map>
#include <string>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int count;
	string num;
	cin >> count;
	while (count--) {
		map<char, int> list;
		cin >> num;
		int result = 0;
		for (auto i : num) {
			list[i]++;
		}
		for (auto i : list) {
			result++;
		}
		cout << result << "\n";
	}
}