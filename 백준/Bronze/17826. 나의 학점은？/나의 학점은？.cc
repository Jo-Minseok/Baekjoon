#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int arr[50] = { 0 }, score, index = 0;;
	for (int i = 0; i < 50; i++) {
		cin >> arr[i];
	}
	cin >> score;

	for (int i = 49; i >= 0; i--) {
		if (score == arr[i]) {
			index = i;
			break;
		}
	}
	if (index >= 0 && index <= 4) {
		cout << "A+";
	}
	else if (index >= 5 && index <= 14) {
		cout << "A0";
	}
	else if (index >= 15 && index <= 29) {
		cout << "B+";
	}
	else if (index >= 30 && index <= 34) {
		cout << "B0";
	}
	else if (index >= 35 && index <= 44) {
		cout << "C+";
	}
	else if (index >= 45 && index <= 47) {
		cout << "C0";
	}
	else if (index >= 48 && index <= 49) {
		cout << "F";
	}
}