#include <iostream>
using namespace std;
int main() {
	int arr[3];
	int human[3];
	cin >> human[0] >> human[1] >> human[2];
	arr[0] = human[1] * 2 + human[2] * 4;
	arr[1] = human[0] * 2 + human[2] * 2;
	arr[2] = human[1] * 2 + human[0] * 4;
	int min = arr[0];
	for (int i = 0; i < 3; i++) {
		if (min > arr[i]) {
			min = arr[i];
		}
	}
	cout << min;
}