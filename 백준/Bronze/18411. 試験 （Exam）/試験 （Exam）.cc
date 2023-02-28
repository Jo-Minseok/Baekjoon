#include <iostream>
using namespace std;
int main() {
	int num[3],count=0;
	int max = 0, mid=0, max_index = 0;
	for (int i = 0; i < 3; i++) {
		cin >> num[i];
		if (max < num[i]) {
			max = num[i];
			max_index = i;
		}
	}
	for (int i = 0; i < 3; i++) {
		if (max_index == i) {
			continue;
		}
		if (num[i] <= max && num[i] > mid) {
			mid = num[i];
		}
	}
	cout << max + mid;
}