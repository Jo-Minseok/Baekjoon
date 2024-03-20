#include <iostream>
#include <string>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	string text;
	bool check = true;
	cin >> text;
	int start = 0;
	int end = text.length()-1;
	int mid = text.length() / 2;

	while (end > start) {
		if (text[start++] != text[end--]) {
			check = false;
			break;
		}
	}
	cout << (check ? 1 : 0);
}