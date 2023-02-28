#include <iostream>
using namespace std;
int main() {
	int count;
	cin >> count;
	int result = 0;
	int* arr = new int[count];
	for (int i = 0; i < count; i++) {
		cin >> arr[i];
		if (arr[i] != i + 1) {
			result++;
		}
	}
	cout << result;
}