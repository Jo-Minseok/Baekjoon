#include <iostream>
#include <algorithm>
using namespace std;
int main() {
	int count;
	cin >> count;
	int* arr = new int[count];
	int index = 0;
	for (int i = 0; i < count; i++) {
		cin >> arr[i];
		if (arr[i] == -1) {
			index = i;
		}
	}
	sort(arr, arr + index);
	sort(arr + index + 1, arr + count);
	cout << arr[0] + arr[index + 1];
}