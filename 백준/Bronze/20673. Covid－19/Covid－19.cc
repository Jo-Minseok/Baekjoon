#include <iostream>
using namespace std;
int main() {
	int corona;
	int admission;
	cin >> corona >> admission;
	if (corona <= 50 && admission <= 10) {
		cout << "White";
	}
	else if (admission > 30) {
		cout << "Red";
	}
	else {
		cout << "Yellow";
	}
}