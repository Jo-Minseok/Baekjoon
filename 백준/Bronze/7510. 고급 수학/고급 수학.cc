#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int test_count;
	int arr[3] = { 0 };
	cin >> test_count;
	for (int i = 1; i <= test_count;i++) {
		for (int j = 0; j < 3; j++) {
			cin >> arr[j];
		}
		sort(arr, arr + 3);
		cout << "Scenario #" << i << ":\n";
		if (pow(arr[0], 2) + pow(arr[1], 2) == pow(arr[2], 2)) {
			cout << "yes\n\n";
		}
		else {
			cout << "no\n\n";
		}
	}
}