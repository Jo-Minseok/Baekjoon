#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int arr[30][30] = { 0 };
	int x, y;
	cin >> x >> y;
	for (int i = 0; i < x; i++) {
		for (int j = 0; j <= i; j++) {
			if (j == 0) {
				arr[i][j] = 1;
			}
			else {
				arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
			}
			if (j == i) {
				arr[i][j] = 1;
			}
		}
	}
	cout << arr[x-1][y-1];
}