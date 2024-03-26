#include <iostream>
using namespace std;
int main() {
	int day, hour, min;
	int sec;
	cin >> day >> hour >> min;
	if (day > 11) {
		cout << (day * 24 * 60 + hour * 60 + min) - (11 * 60 * 24 + 11 * 60 + 11);
	}
	else if(day == 11) {
		if (hour >= 11) {
			if (min >= 11) {
				cout << (hour * 60 + min) - (11 * 60 + 11);
			}
			else {
				cout << -1;
			}
		}
		else {
			cout << -1;
		}
	}
	else {
		cout << -1;
	}
}