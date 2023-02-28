#include <iostream>
using namespace std;

int main() {
	int num[10] = { 9,7,8,0,9,2,1,4,1,8 };
	int count = 0, sum = 0;
	int tmp;
	for (int i = 0; i < 10; i++) {
		if (count == 0) {
			sum += num[i] * 1;
			count = 1;
		}
		else if (count == 1) {
			sum += num[i] * 3;
			count = 0;
		}
	}
	for (int i = 0; i < 3; i++) {
		cin >> tmp;
		if (count == 0) {
			sum += tmp*1;
			count = 1;
		}
		else if (count == 1) {
			sum += tmp * 3;
			count = 0;
		}
	}
	cout << "The 1-3-sum is " << sum;
}