#include <iostream>
using namespace std;
int main() {
	bool check = true;
	int num;
	for (int i = 0; i < 8; i++) {
		cin >> num;
		if (num != 1 && num != 0) {
			check = false;
		}
	}
	cout << (check ? "S" : "F");
}