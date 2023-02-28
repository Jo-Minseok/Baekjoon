#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int count,result = 0;
	cin >> count;
	int* arr = new int[count];
	for (int i = 0; i < count; i++) {
		cin >> arr[i];
	}
	sort(arr, arr + count);
	cout << 2*(arr[count-1] - arr[0]);
}