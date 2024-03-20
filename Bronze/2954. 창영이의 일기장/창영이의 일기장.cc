#include <iostream>
#include <string>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	string text;
	getline(cin, text);
	for (int i = 0; i < text.length(); i++) {
		if (text[i] == 'a' || text[i] == 'e' || text[i] == 'i' || text[i] == 'o' || text[i] == 'u') {
			i += 2;
		}
		cout << text[i];
	}
}