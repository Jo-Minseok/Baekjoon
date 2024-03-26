#include <iostream>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	string text;
	string rem = "CAMBRIDGE";
	cin >> text;
	for (int i = 0; i < text.length(); i++) {
		if (rem.find(text[i])==string::npos) {
			cout << text[i];
		}
	}
}