#include <iostream>
using namespace std;
int main() {
	string a;
	cin >> a;
	for (int i = 0; i < a.length(); i++) {
		if (a[i] == 'a') {
			a[i] = '4';
		}
		else if (a[i] == 'e') {
			a[i] = '3';
		}
		else if (a[i] == 'i') {
			a[i] = '1';
		}
		else if (a[i] == 'o') {
			a[i] = '0';
		}
		else if (a[i] == 's') {
			a[i] = '5';
		}
	}
	cout << a;
}