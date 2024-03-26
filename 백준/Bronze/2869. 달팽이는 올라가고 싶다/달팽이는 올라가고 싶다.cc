#include <iostream>
using namespace std;
int main() {
	int up, down, height;
	cin >> up >> down >> height;
	if (up > height) {
		cout << 1;
	}
	else {
		int day = (height - up) / (up - down);
		if ((height - up) % (up - down) != 0) {
			day++;
		}
		cout << day+1;
	}
}