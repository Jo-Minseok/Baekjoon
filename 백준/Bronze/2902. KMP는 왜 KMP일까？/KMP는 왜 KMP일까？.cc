#include <iostream>
using namespace std;
int main() {
	string a;
	cin >> a;
	string b;
	b += a[0];

	for (int i = 0; i < a.length(); i++) {
		if (a[i] == '-') {
			b += a[i + 1];
		}
	}
	cout << b;
}