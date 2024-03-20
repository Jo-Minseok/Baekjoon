#include <iostream>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int test_case;
	string text;
	cin >> test_case;
	int result = 0;
	for (int i = 0; i < test_case; i++) {
		result = 0;
		bool arr[26] = { false };
		cin >> text;
		for (int j = 0; j < text.length(); j++) {
			arr[text[j] - 'A'] = true;
		}
		for (int j = 0; j < 26; j++) {
			if (!arr[j]) {
				result += j + 65;
			}
		}
		cout << result << "\n";
	}
}