#include <iostream>
using namespace std;
int main() {
	int count;
	cin >> count;
	for (int i = 0; i < count+2; i++) {
		cout << "@";
	}
	cout << "\n";
	for (int j = 0; j < count; j++) {
		cout << "@";
		for (int i = 0; i < count; i++) {
			cout << " ";
		}
		cout << "@";
		cout << "\n";
	}

	for (int i = 0; i < count + 2; i++) {
		cout << "@";
	}
	cout << "\n";
}