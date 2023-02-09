#include <iostream>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int test_case;
	string text;
	cin >> test_case;
	for (int i = 1; i <= test_case; i++) {
		cin >> text;
		for (int j = 0; j < text.length(); j++) {
			if (text[j] == 'Z') {
				text[j] = 'A';
			}
			else {
				text[j]++;
			}
		}
		cout << "String #" << i << "\n" << text << "\n\n";
	}
}