#include <iostream>
using namespace std;
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int num[5][4];
	int sum[5] = { 0 };
	int index = 0,big=0;
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 4; j++) {
			cin >> num[i][j];
			sum[i] += num[i][j];
		}
	}
	big = sum[0];
	for (int i = 0; i < 5; i++) {
		if (big < sum[i]) {
			index = i;
			big = sum[i];
		}
	}
	cout << index+1 << " " << big;
}