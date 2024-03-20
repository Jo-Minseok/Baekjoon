#include <iostream>
#include <string>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int test_case;
	string text, change;
	cin >> test_case;
	cin.ignore();
	while (test_case--) {
		getline(cin, text);
		cin >> change;
		cin.ignore();
		for (char a : text) {
			if (isalpha(a)) {
				cout << change[a - 'A'];
			}
			else {
				cout << a;
			}
		}
		cout << "\n";
	}
}