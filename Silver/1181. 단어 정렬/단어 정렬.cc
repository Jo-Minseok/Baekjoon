#include <iostream>
#include <algorithm>
using namespace std;
int cmp(string a, string b) {
	if (a.length() == b.length()) {
		return a < b;
	}
	else {
		return a.length() < b.length();
	}
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int count;
	cin >> count;
	string text[20000];
	for (int i = 0; i < count; i++) {
		cin >> text[i];
	}
	sort(text, text + count, cmp);
	for (int i = 0; i < count; i++) {
		if (text[i] == text[i - 1]) {
			continue;
		}
		cout << text[i] << "\n";
	}
}