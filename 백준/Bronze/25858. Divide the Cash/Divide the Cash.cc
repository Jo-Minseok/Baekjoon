#include <iostream>
using namespace std;
int main() {
	int count, money;
	int total = 0;
	cin >> count >> money;
	int* arr = new int[count];
	for (int i = 0; i < count; i++) {
		cin >> arr[i];
		total += arr[i];
	}
	for (int i = 0; i < count; i++) {
		cout << arr[i] * money/total << "\n";
	}
}