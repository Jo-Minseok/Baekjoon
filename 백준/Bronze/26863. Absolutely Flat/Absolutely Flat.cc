#include <iostream>
using namespace std;
int main() {
	int arr[4], pad;
	int max = 0;
	bool check = true;
	cin >> arr[0] >> arr[1] >> arr[2] >> arr[3] >> pad;
	for (int i = 0; i < 4; i++) {
		if (max < arr[i]) {
			max = arr[i];
		}
	}
	for (int i = 0; i < 4; i++) {
		if (max == (arr[i] + pad)) {
			arr[i] += pad;
			break;
		}
	}
	for (int i = 0; i < 3; i++) {
		if (arr[i] != arr[i + 1]) {
			check = false;
			break;
		}
	}
	if (check) {
		cout << 1;
	}
	else {
		cout << 0;
	}
	
}