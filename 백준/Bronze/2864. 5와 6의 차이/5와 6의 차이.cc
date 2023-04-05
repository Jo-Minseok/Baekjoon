#include <iostream>
#include <string>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	string a, b;
	string a_six, a_five, b_six, b_five;
	cin >> a >> b;
	for (int i = 0; i < a.length(); i++) {
		if (a[i] == '5') {
			a[i] = '6';
		}
	}
	for (int i = 0; i < b.length(); i++) {
		if (b[i] == '5') {
			b[i] = '6';
		}
	}
	a_six = a;
	b_six = b;
	for (int i = 0; i < a.length(); i++) {
		if (a[i] == '6') {
			a[i] = '5';
		}
	}
	for (int i = 0; i < b.length(); i++) {
		if (b[i] == '6') {
			b[i] = '5';
		}
	}
	a_five = a;
	b_five = b;
	cout << stoi(a_five) + stoi(b_five) << " " << stoi(a_six) + stoi(b_six);
}