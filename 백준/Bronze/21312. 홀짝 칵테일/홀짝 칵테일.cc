#include <iostream>
using namespace std;
int main() {
	int result[7] = { 0 };
	int max = 0;
	for (int i = 0; i < 3; i++) {
		cin >> result[i];
	}
	result[3] = result[0] * result[1];
	result[4] = result[0] * result[2];
	result[5] = result[1] * result[2];
	result[6] = result[0] * result[1] * result[2];
	for (int i = 0; i < 7; i++) {
		if (result[i] % 2 != 0) {
			if (max < result[i]) {
				max = result[i];
			}
			else {
				continue;
			}
		}
		else {
			continue;
		}
	}
	if (max == 0) {
		cout << result[6];
	}
	else {
		cout << max;
	}
}