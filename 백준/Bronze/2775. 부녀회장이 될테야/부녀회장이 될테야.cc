#include <iostream>
using namespace std;
int arr[15][14];

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int test_case,k,n;
	cin >> test_case;
	for (int i = 0; i < 15; i++) {
		for (int j = 0; j < 14; j++) {
			if (i == 0) {
				arr[i][j] = j+1;
			}
			else if (j == 0) {
				arr[i][j] = 1;
			}
			else {
				arr[i][j] = arr[i][j - 1] + arr[i - 1][j];
			}
		}
	}
	for (int i = 0; i < test_case; i++) {
		cin >> k >> n;
		cout << arr[k][n-1] << "\n";
	}
}