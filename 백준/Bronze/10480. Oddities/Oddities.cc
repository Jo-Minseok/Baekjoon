#include <iostream>
using namespace std;
int main() {
	int count;
	cin >> count;
	int num;
	for (int i = 0; i < count; i++) {
		cin >> num;
		if (num % 2 == 0) {
			cout << num << " is even\n";
		}
		else {
			cout << num << " is odd\n";
		}
	}
}