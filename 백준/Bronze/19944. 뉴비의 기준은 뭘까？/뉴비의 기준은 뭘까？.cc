#include <iostream>
using namespace std;
int main() {
	int input, oldbie;
	cin >> oldbie >> input;
	if (input == 1 || input == 2) {
		cout << "NEWBIE!";
	}
	else if (input <= oldbie) {
		cout << "OLDBIE!";
	}
	else {
		cout << "TLE!";
	}
}