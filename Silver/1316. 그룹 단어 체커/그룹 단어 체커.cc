#include <iostream>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int test_case,result = 0;
	bool check;
	cin >> test_case;
	string text;
	for (int i = 0; i < test_case; i++) {
		cin >> text;
		check = true;
		int index[26] = { 0 };
		for (int j = 0; j < text.length(); j++) {
			if (index[text[j]-'a'] == 0) {
				index[text[j] - 'a']++;
			}
			else {
				if (text[j] != text[j - 1]) {
					check = false;
					break;
				}
			}
		}
		if (check) {
			result++;
		}
	}
	cout << result;
}