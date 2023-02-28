#include <iostream>
using namespace std;
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int a, b, ball = 1;
	int count;
	cin >> count;
	for (int i = 0; i < count; i++) {
		cin >> a >> b;
		if (ball == a) {
			ball = b;
		}
		else if (ball == b) {
			ball = a;
		}
	}
	cout << ball;
}