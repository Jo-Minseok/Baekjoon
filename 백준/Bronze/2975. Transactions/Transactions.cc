#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
int main() {
	int count, target;
	char mode;
	while (true) {
		scanf("%d %c %d", &count, &mode, &target);
		if (count == 0 && mode == 'W' && target == 0) {
			break;
		}
		if (mode == 'W') {
			if (count - target >= -200) {
				cout << count - target << "\n";
			}
			else {
				cout << "Not allowed\n";
			}
		}
		else {
			cout << count + target << "\n";
		}
	}
}