#include <iostream>
using namespace std;
int main() {
	int count;
	cin >> count;
	int num = 0;
	int max = 0;
	for (int i = 0; i < count; i++) {
		cin >> num;
		if (num > max) {
			max = num;
		}
	}
	cout << max;
}