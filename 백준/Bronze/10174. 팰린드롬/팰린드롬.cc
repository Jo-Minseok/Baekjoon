#include <iostream>
#include <string>
using namespace std;
int main() {
	int count;
	string text;
	cin >> count;
	cin.ignore();
	while (count--) {
		bool check = true;
		getline(cin, text);
		for (int i = 0, j = text.length() - 1; i < j; i++, j--) {
			if (tolower(text[i]) != tolower(text[j])) {
				check = false;
				break;
			}
		}
		if (check) {
			cout << "Yes\n";
		}
		else {
			cout << "No\n";
		}
	}
}