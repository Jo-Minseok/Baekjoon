#include <iostream>
using namespace std;
int main() {
	int index = 0;
	int n0, n1, n2, n3,n4;
	while (true) {
		cin >> n0;
		if (n0 == 0) {
			break;
		}
		n1 = 3 * n0;
		cout << ++index << ". ";
		if (n1 % 2 == 0) {
			n2 = n1 / 2;
			cout << "even ";
		}
		else {
			n2 = (n1 + 1) / 2;
			cout << "odd ";
		}
		n3 = 3 * n2;
		n4 = n3 / 9;
		cout << n4 << "\n";
	}
}