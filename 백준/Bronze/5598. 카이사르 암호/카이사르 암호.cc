#include <iostream>
#include <string>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	string text;
	cin >> text;
	for (int i = 0; i < text.length(); i++) {
		if (isalpha(text[i] - 3)) {
			cout << (char)(text[i] - 3);
		}
		else {
			cout << (char)(text[i] - 'A' + 'X');
		}
	}
}