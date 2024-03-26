#include <iostream>
using namespace std;
int main() {
	int num;
	int result = 0;
	while (cin >> num) {
		if (num > 0) {
			result++;
		}
	}
	cout << result;
}