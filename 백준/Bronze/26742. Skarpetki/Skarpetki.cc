#include <iostream>
using namespace std;
int main() {
	string a;
	int black = 0;
	int white = 0;
	cin >> a;
	for (int i = 0; i < a.length(); i++) {
		if (a[i] == 'B') {
			black++;
		}
		else {
			white++;
		}
	}
	int result = black / 2 + white / 2;
	cout << result;
}