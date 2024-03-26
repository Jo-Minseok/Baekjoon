#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main() {
	int test_case;
	cin >> test_case;
	int num;
	for (int i = 0; i < test_case; i++) {
		cin >> num;
		cout << "Pairs for " << num << ":";
		string result;
		for (int j = 1; j <= 11; j++) {
			for (int k = j; k <= 11; k++) {
				if (j != k && j + k == num) {
					result += " " + to_string(j) + " " + to_string(k) + ",";
				}
			}
		}
		if (result.find_last_of(",") != string::npos) {
			result.erase(result.find_last_of(","));
		}
		cout << result << "\n";
	}
}