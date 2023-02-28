#include <iostream>
using namespace std;
int main() {
	int num;
	cin >> num;
	if (num % 8 >= 1 && num % 8<= 5) {
		cout << num % 8;
	}
	else if (num % 8 == 6) {
		cout << "4";
	}
	else if (num % 8 == 7) {
		cout << "3";
	}
	else if (num % 8 == 0) {
		cout << "2";
	}
}