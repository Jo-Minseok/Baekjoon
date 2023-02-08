#include <iostream>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int num,result =0,tmp = 0,sum = 0;
	cin >> num;
	for (int i = 1; i <= num; i++) {
		sum = 0;
		tmp = i;
		while (true) {
			sum += tmp % 10;
			tmp /= 10;
			if (tmp == 0) {
				break;
			}
		}
		if (i % sum == 0) {
			result++;
		}
	}
	cout << result;
}