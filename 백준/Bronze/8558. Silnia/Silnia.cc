#include <iostream>
using namespace std;
int main() {
	int mul=1;
	int count = 0;
	cin >> count;
	for (int i = count; i > 0; i--) {
		mul *= i;
	}
	cout << mul % 10;
}