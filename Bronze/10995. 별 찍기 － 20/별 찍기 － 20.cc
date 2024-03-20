#include <iostream>
using namespace std;
int main() {
	int count;
	cin >> count;
	for (int i = 0; i < count; i++) {
		if (i % 2 == 0) {
			for (int j = 0; j < count; j++) {
				cout << "* ";
			}
			
		}
		else {
			for (int j = 0; j < count; j++) {
				cout << " *";
			}
		}
		cout << "\n";
	}
}