#include <iostream>
#include <cmath>
using namespace std;
int main() {
	int arr[4] = { 0 };
	while (true) {
		for (int i = 0; i < 4; i++) {
			cin >> arr[i];
		}
		if (arr[0] == 0 && arr[1] == 0 && arr[2] == 0 && arr[3] == 0) {
			break;
		}
		else {
			cout << abs(arr[2] - arr[1]) << " " << abs(arr[3] - arr[0]) << "\n";
		}
	}
}