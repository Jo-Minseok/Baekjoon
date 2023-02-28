#include <iostream>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int n, k;
	int num1=1,num2=1,num3=1;
	cin >> n >> k;
	if (k < 0) {
		cout << 0;
	}
	else if (k > n) {
		cout << 0;
	}
	else {
		for (int i = n; i > 0; i--) {
			num1 *= i;
		}
		for (int i = k; i > 0; i--) {
			num2 *= i;
		}
		for (int i = n-k; i > 0; i--) {
			num3 *= i;
		}
		cout << num1 / (num2 * num3);
	}
}