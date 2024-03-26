#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	string num;
	while (true) {
		cin >> num;
		if (num == "0") {
			break;
		}

		while (true) {
			int tmp = 0;
			if (num.length() != 1) {
				for (int i = 0; i < num.length(); i++) {
					tmp += num[i] - '0';
				}
				num = to_string(tmp);
			}
			else {
				cout << num << "\n";
				break;
			}
		}
	}
}