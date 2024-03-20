#include <iostream>
using namespace std;
int main() {
	unsigned long long n;
	cin >> n;
	int index =1;
	int i = 0;
	for (i = 1; i <= n; i++, index ++) {
		cout << index << " ";
		if (i % 6 == 0) {
			cout << "Go! ";
			n -= 6;
			i = 0;
		}
	}
	if (i % 7 != 0 && i!=1) {
		cout << "Go!";
	}
}