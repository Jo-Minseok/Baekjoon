#include <iostream>
#include <cmath>
using namespace std;
int main() {
	unsigned long long num;
	cin >> num;
	bool check = false;
	for (int i = 0; i < 31; i++) {
		if (num == pow(2, i)) {
			check = true;
		}
	}
	if (check) {
		cout << 1;
	}
	else {
		cout << 0;
	}
}