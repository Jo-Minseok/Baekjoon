#include <iostream>
using namespace std;

int main() {
	int result = 0;
	int score[4] = { 0 }, history, geography;
	for (int i = 0; i < 4; i++) {
		cin >> score[i];
		result += score[i];
	}
	cin >> history >> geography;
	int min = 0;
	min = score[0];
	for (int i = 0; i < 4; i++) {
		if (min > score[i]) {
			min = score[i];
		}
	}
	result -= min;
	if (history > geography) {
		result += history;
	}
	else {
		result += geography;
	}
	cout << result;
}