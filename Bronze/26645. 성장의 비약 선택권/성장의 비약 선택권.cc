#include <iostream>
using namespace std;
int main() {
	int level;
	cin >> level;
	if (level <= 205) {
		cout << 1;
	}
	else if (level <= 217) {
		cout << 2;
	}
	else if (level <= 228) {
		cout << 3;
	}
	else {
		cout << 4;
	}
}