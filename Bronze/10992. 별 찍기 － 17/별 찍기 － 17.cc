#include <iostream>
using namespace std;
int main() {
	int num;
	cin >> num;
	int space = 1;
	if (num == 1) {
		cout << "*";
		return 0;
	}
	for (int i = num; i >0; i--) {
		if (i == 1) {
			for (int j = 0; j < space+2; j++) {
				cout << "*";
			}
			return 0;
		}
		for (int j = 0; j < i-1; j++) {
			cout << " ";
		}
		if (i == num) {
			cout << "*\n";
			continue;
		}
		cout << "*";
		for (int j = 0; j < space; j++) {
			cout << " ";
		}
		space += 2;
		cout << "*\n";
	}
}