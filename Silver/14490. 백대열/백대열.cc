#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

int gcd(int a, int b) {
	if (!b) {
		return a;
	}
	return gcd(b, a % b);
}

int main() {
	ios_base::sync_with_stdio(false);
	cout.tie(nullptr);
	int num1, num2;
	scanf("%d:%d", &num1, &num2);
	int result =gcd(num1, num2);
	cout << num1 / result << ":" << num2 / result;
}