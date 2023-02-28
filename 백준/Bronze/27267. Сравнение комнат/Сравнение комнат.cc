#include <iostream>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int a, b, c, d;
	cin >> a >> b >> c >> d;
	if (a * b > c * d) {
		cout << "M";
	}
	else if (a * b < c * d) {
		cout << "P";
	}
	else {
		cout << "E";
	}
}