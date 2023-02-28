#include <iostream>
using namespace std;
int main() {
	string a;
	cin >> a;
	char ch;
	bool arr[26] = { false };
	for (int i = 0; i < a.length(); i++) {
		arr[a[i] - 'A'] = true;
	}
	for (int i = 0; i < 26; i++) {
		if (arr[i] == false) {
			ch = i + 'A';
			break;
		}
	}
	cout << ch;
}