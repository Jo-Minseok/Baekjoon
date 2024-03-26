#include <iostream>
using namespace std;
int main() {
	int count;
	cin >> count;
	for (int k = 0; k < count; k++) {
		for (int i = 0; i < count; i++) {
			cout << "@";
		}
		for (int i = 0; i < count; i++) {
			cout << "   ";
		}
		for (int i = 0; i < count; i++) {
			cout << "@";
		}
		cout << "\n";
	}

	for (int k = 0; k < count; k++) {
		for (int i = 0; i < count; i++) {
			cout << "@@@@@";
		}
		cout << "\n";
	}

	for (int k = 0; k < count; k++) {
		for (int i = 0; i < count; i++) {
			cout << "@";
		}
		for (int i = 0; i < count; i++) {
			cout << "   ";
		}
		for (int i = 0; i < count; i++) {
			cout << "@";
		}
		cout << "\n";
	}

	for (int k = 0; k < count; k++) {
		for (int i = 0; i < count; i++) {
			cout << "@@@@@";
		}
		cout << "\n";
	}

	for (int k = 0; k < count; k++) {
		for (int i = 0; i < count; i++) {
			cout << "@";
		}
		for (int i = 0; i < count; i++) {
			cout << "   ";
		}
		for (int i = 0; i < count; i++) {
			cout << "@";
		}
		cout << "\n";
	}
}