#include <iostream>
using namespace std;
int main() {
	while (true) {
		int num;
		cin >> num;
		if (num == 0) {
			break;
		}
		int result = 0;
		for (int i = 1; i <= num; i++) {
			result += i;
		}
		cout << result << "\n";
	}
}