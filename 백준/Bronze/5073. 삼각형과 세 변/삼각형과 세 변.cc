#include <iostream>
#include <algorithm>
using namespace std;
int main() {
	int len[3] = { 0 };
	while (true) {
		for (int i = 0; i < 3; i++) {
			cin >> len[i];
		}
		sort(len, len + 3);

		if (len[0] == 0 && len[1] == 0 && len[2] == 0) {
			break;
		}

		if (len[0] + len[1] > len[2]) {
			if (len[0] == len[1] && len[1] == len[2]) {
				cout << "Equilateral\n";
			}
			else if (len[0] != len[1] && len[0] != len[2] && len[1] != len[2]) {
				cout << "Scalene\n";
			}
			else {
				cout << "Isosceles\n";
			}
		}
		else {
			cout << "Invalid\n";
		}
	}
}