#include <iostream>
using namespace std;
int main() {
	string a;
	cin >> a;
	int i = 0;
	while (true) {
		if (i >= a.length()) {
			break;
		}

		cout << a[i];
		i += a[i] - 'A' + 1;	}
}