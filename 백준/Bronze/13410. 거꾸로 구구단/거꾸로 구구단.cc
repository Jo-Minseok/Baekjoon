#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int num1, num2;
	cin >> num1 >> num2;
	vector<string> list;
	for (int i = 1; i <= num2; i++) {
		string result = to_string(num1 * i);
		reverse(result.begin(), result.end());
		list.push_back(result);
	}
	int max = 0;
	for (auto i : list) {
		if (stoi(i) > max) {
			max = stoi(i);
		}
	}
	cout << max;
}