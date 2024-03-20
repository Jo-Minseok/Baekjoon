#include <iostream>
#include <algorithm>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int count_test;
	cin >> count_test;
	int* arr = new int[count_test];
	for (int i = 0; i < count_test; i++) {
		cin >> arr[i];
	}
	sort(arr, arr + count_test);
	for (int i = 0; i < count_test; i++) {
		if (arr[i] == arr[i + 1]) {
			continue;
		}
		else {
			cout << arr[i] << " ";
		}
	}
}