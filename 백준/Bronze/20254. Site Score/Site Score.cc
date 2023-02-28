#include <iostream>

using namespace std;

int main() {
	int result = 0;
	int num[4] = { 0 };
	for (int i = 0; i < 4; i++) {
		cin >> num[i];
	}
	result = num[0] * 56 + num[1] * 24 + num[2] * 14 + num[3] * 6;
	cout << result;
}