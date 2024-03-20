#include <iostream>
using namespace std;
int main() {
	string number;
	cin >> number;
	int count = 0;
	for (int i = 0; i < 3; i++) {
		if (number[i] == '5') {
			count++;
		}
		else {
			break;
		}
	}
	if (count == 3) {
		cout << "YES";
	}
	else {
		cout << "NO";
	}
}