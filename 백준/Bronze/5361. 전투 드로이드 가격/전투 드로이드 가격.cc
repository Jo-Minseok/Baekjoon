#include <iostream>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int count;
	cin >> count;
	double result = 0;
	double arr[5] = { 0 };
	for (int i = 0; i < count; i++) {
		result = 0;
		for (int j = 0; j < 5; j++) {
			cin >> arr[j];
			switch (j) {
			case 0:
				result += arr[j] * 350.34;
				break;
			case 1:
				result += arr[j] * 230.90;
				break;
			case 2:
				result += arr[j] * 190.55;
				break;
			case 3:
				result += arr[j] * 125.30;
				break;
			case 4:
				result += arr[j] * 180.90;
				break;
			}
		}
		printf("$%.2f\n", result);
	}
}