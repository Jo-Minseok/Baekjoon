#include <iostream>
using namespace std;
int main() {
	int num[4], count = 0, const_depth = 0;
	for (int i = 0; i < 4; i++) {
		cin >> num[i];
	}
	for (int i = 0; i < 3; i++) {
		if (num[i] < num[i + 1]) {
			count++;
		}
		else if (num[i] > num[i+1]) {
			count--;
		}
		else if (num[i] == num[i + 1]) {
			const_depth++;
		}
	}
	if (count == 3) {
		cout << "Fish Rising";
	}
	else if (count == -3) {
		cout << "Fish Diving";
	}
	else if (const_depth == 3) {
		cout << "Fish At Constant Depth";
	}
	else {
		cout << "No Fish";
	}
}