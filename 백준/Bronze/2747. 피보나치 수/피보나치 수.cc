#include <iostream>
using namespace std;

int fib_iter(int n) {
	int i, tmp, current, last;
	if (n < 2) {
		return n;
	}
	else {
		last = 0;
		current = 1;
		for (i = 2; i <= n; i++) {
			tmp = current;
			current += last;
			last = tmp;
		}
		return current;
	}
}

int main() {
	int num;
	cin >> num;
	cout << fib_iter(num);
}