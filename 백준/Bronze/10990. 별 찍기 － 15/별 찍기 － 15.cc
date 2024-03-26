#include <iostream>
using namespace std;
int main() {
	int num;
	cin >> num;
	int space = 1;
	for (int i = num; i >0; i--) {
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