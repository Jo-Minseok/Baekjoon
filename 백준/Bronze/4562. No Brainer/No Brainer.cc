#include <iostream>
using namespace std;
int main() {
	int num;
	cin >> num;
	int x, y;
	for (int i = 0; i < num; i++) {
		cin >> x >> y;
		if (x >= y) {
			cout << "MMM BRAINS\n";
		}
		else {
			cout << "NO BRAINS\n";
		}
	}
}