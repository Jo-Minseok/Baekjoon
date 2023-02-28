#include <iostream>
using namespace std;
int main() {
	string s;
	int length;
	int count = 0;
	cin >> length;
	cin >> s;
	for (int i = 0; i < length; i++) {
		if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u') {
			count++;
		}
	}
	cout << count;
}