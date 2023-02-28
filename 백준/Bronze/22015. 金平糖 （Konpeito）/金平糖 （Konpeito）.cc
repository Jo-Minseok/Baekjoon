#include <iostream>
#include <cmath>
using namespace std;
int main() {
	int num[3];
	int result, sum = 0,i;
	cin >> num[0] >> num[1] >> num[2];
	result = max(num[0],num[2]);
	for (i = 0; i < 3; i++) {
		sum += result - num[i];
	}
	cout << sum;
}