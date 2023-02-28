#include <iostream>
#include <cmath>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int num1, num2;
	double result, result2;
	cin >> num1 >> num2;
	int b = num1 * 2;
	int c = num2;
	int a = 1;
	result = (- 1 * b + sqrt(pow(b, 2) - 4 * a * c)) / (2 * a);
	result2 = (-1 * b - sqrt(pow(b, 2) - 4 * a * c)) / (2 * a);
	if (result == result2) {
		cout << (int)result;
	}
	else {
		if (result < result2) {
			cout << (int)result << " " << (int)result2;
		}
		else {
			cout << (int)result2 << " " << (int)result;
		}
	}
}