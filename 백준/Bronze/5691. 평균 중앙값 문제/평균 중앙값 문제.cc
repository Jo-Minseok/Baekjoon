#include <iostream>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int num1, num2,min;
	int result[3] = { 0 };
	while (true) {
		cin >> num1 >> num2;
		if (num1 == 0 && num2 == 0) {
			break;
		}
		else {
			result[0] = 2 * num1 - num2;
			result[1] = 2 * num2 - num1;
			result[2] = (num2 + num1) / 2;
			min = result[0];
			for (int i = 0; i < 3; i++) {
				if (min > result[i]) {
					min = result[i];
				}
			}
		}
		printf("%d\n", min);
		
	}
}