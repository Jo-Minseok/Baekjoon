#include <iostream>
using namespace std;
int main() {
	int left, center, right;
	cin >> left >> center >> right;
	int avg = (left + center + right) / 3;
	int result = 0;
	if (center < avg) {
		result += avg - center;
		right -= avg - center;
		result += (avg - left) * 2;
		right -= avg - left;
	}
	else {
		result += avg - left;
		center -= avg - left;
		result += avg - center;
		right -= avg - center;
	}
	cout << result;
}