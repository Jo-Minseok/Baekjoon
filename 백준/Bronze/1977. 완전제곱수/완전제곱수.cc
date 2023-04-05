#include <iostream>
#include <cmath>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int M, N;
	cin >> M >> N;
	int start = (int)sqrt(M);
	int end = (int)sqrt(N);
	int count = 0;
	int sum = 0;
	int small = 0;
	for (int i = start; i <= N; i++) {
		if (pow(i, 2) >= M && pow(i, 2) <= N) {
			if (count == 0) {
				small = i;
			}
			count++;
			sum += pow(i, 2);
		}
	}
	if (count == 0) {
		cout << -1;
		return 0;
	}
	cout << sum << "\n" << pow(small, 2);
}