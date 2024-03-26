#include <iostream>
#include <cmath>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int result = 0,N;
	cin >> N;
	for (int i = 1; i <= 500; i++) {
		for (int j = 1; j <= i; j++) {
			if (pow(j, 2) + N == pow(i, 2)) {
				result++;
			}
		}
	}
	cout << result;
}