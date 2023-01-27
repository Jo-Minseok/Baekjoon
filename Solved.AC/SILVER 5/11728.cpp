#include <iostream>
#include <algorithm>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int a, b;
	cin >> a >> b;
	int* arr = new int[a + b];
	for (int i = 0; i < a+b; i++) {
		cin >> arr[i];
	}
	sort(arr, arr + a + b);
	for (int i = 0; i < a + b; i++) {
		cout << arr[i] << " ";
	}
}