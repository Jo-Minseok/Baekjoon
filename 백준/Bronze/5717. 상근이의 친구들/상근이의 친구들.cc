#include <iostream>
using namespace std;

int main() {
	int num, num2;
	while (true) {
		cin >> num >> num2;
		if (num == 0 && num2 == 0) {
			break;
		}
		else {
			cout << num + num2 << endl;
		}
	}
}