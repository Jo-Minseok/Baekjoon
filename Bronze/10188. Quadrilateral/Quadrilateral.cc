#include <iostream>
using namespace std;
int main() {
	int count,length1, length2;
	cin >> count;
	for (int i = 0; i < count; i++) {
		cin >> length1 >> length2;
		for (int j = 0; j < length2; j++) {
			for (int k = 0; k < length1; k++) {
				cout << "X";
			}
			cout << "\n";
		}
		cout << "\n";
	}
}