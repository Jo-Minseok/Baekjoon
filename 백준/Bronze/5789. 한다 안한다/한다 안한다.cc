#include <iostream>
using namespace std;
int main() {
	int num;
	string a;
	bool check = false;
	cin >> num;
	for (int i = 0; i < num; i++) {
		check = false;
		cin >> a;
		if (a[a.length() / 2] == a[a.length() / 2 - 1]) {
			check = true;
		}
		if (check) {
			cout << "Do-it\n";
		}
		else {
			cout << "Do-it-Not\n";
		}
	}
}