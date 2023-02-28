#include <iostream>
using namespace std;
int main() {
	int num[3];
	for (int i = 0; i < 3; i++) {
		cin >> num[i];
	}
	if (num[2] == num[0] + num[1]||num[1] == num[0]+num[2]||num[0] == num[1]+num[2]) {
		cout << "1";
	}
	else if (num[2] == num[0] * num[1] || num[1] == num[0] * num[2] || num[0] == num[1] * num[2]) {
		cout << "2";
	}
	else {
		cout << "3";
	}
}