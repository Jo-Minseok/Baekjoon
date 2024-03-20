#include <iostream>
#include <algorithm>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int test_count;
	cin >> test_count;
	int* arr = new int[test_count];
	for (int i = 0; i < test_count; i++) {
		cin >> arr[i];
	}
	sort(arr, arr + test_count);
	for (int i = 0; i < test_count; i++) {
		cout << arr[i] << "\n";
	}
}