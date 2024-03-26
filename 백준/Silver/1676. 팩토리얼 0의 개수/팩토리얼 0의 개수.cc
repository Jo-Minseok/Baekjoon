#include <iostream>
using namespace std;
int main() {
	int result = 0;
	int num;
	cin >> num;
	for (int i = 1; i <= num; i++) {
		int tmp = i;
		while (true) {
			if (tmp % 5 == 0) {
				result++;
				tmp /= 5;
			}
			else {
				break;
			}
		}
	}
	cout << result;
}