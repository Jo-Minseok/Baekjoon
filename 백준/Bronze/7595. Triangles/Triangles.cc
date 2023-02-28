#include <iostream>
using namespace std;
int main() {
	int count;
	while (true) {
		cin >> count;
		if (count == 0) {
			break;
		}
		else {
			for (int i = 0; i < count; i++) {
				for (int j = 0; j <= i; j++) {
					cout << "*";
				}
				cout << endl;
			}
		}
	}
}