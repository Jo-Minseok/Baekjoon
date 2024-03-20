#include <iostream>
using namespace std;
int main() {
	char result, count=0;
	for (int i = 0; i < 6; i++) {
		cin >> result;
		if (result == 'W') {
			count++;
		}
	}
	switch (count) {
	case 5: case 6:
		cout << 1;
		break;
	case 3: case 4:
		cout << 2;
		break;
	case 2: case 1:
		cout << 3;
		break;
	default:
		cout << -1;
	}
}