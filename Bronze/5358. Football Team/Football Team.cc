#include <iostream>
#include <string>
using namespace std;
int main() {
	string a;
	while (true) {
		getline(cin, a);
		if (a == "") {
			break;
		}
		for (int i = 0; i < a.length(); i++) {
			if (a[i] == 'i') {
				a[i] = 'e';
			}
			else if (a[i] == 'e') {
				a[i] = 'i';
			}
			else if (a[i] == 'I') {
				a[i] = 'E';
			}
			else if (a[i] == 'E') {
				a[i] = 'I';
			}
		}
		cout << a << "\n";
	}
}