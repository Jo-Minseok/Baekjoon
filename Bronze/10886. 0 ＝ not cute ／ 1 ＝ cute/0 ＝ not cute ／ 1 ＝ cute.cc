#include <iostream>
using namespace std;
int main() {
	int count;
	cin >> count;
	int yes = 0, no = 0;
	int opinion;
	for (int i = 0; i < count; i++) {
		cin >> opinion;
		if (opinion) {
			yes++;
		}
		else {
			no++;
		}
	}
	cout << (yes > no ? "Junhee is cute!" : "Junhee is not cute!");
}