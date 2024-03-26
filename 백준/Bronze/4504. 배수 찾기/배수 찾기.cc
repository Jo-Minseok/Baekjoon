#include <iostream>
using namespace std;
int main() {
	int num,num1;
	cin >> num;
	while (true) {
		cin >> num1;
		if (num1 == 0) {
			break;
		}
		cout << num1 << " is ";
		if (num1 % num != 0) {
			cout << "NOT ";
		}
		cout << "a multiple of " << num << ".\n";
	}
}