#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int test_case;
	string text1, text2;
	cin >> test_case;
	while (test_case--) {
		cin >> text1 >> text2;
		cout << "Distances: ";
		for (int i = 0; i < text1.length();i++) {
			if (text1[i] <= text2[i]) {
				cout << text2[i] - text1[i] << " ";
			}
			else {
				cout << text2[i] + 26 - text1[i] << " ";
			}
		}
		cout << "\n";
	}
}