#include <iostream>
#include <algorithm>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int count;
	cin >> count;
	int* arr = new int[count];
	for (int i = 0; i < count; i++) {
		cin >> arr[i];
	}
	sort(arr,arr+count);
	for (int i = 0; i < count; i++) {
		cout << arr[i] << "\n";
	}
	return 0;
}