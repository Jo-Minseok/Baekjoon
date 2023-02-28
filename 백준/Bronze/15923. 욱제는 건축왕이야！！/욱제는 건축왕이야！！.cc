#include <iostream>
#include <cmath>
using namespace std;
int main() {
	int count;
	cin >> count;
	int** arr = new int*[count];
	for (int i = 0; i < count; i++) {
		arr[i] = new int[2];
		cin >> arr[i][0] >> arr[i][1];
	}
	int result = 0;
	for (int i = 0; i < count-1; i++) {
		result += abs(arr[i][0] - arr[i+1][0]) + abs(arr[i][1] - arr[i+1][1]);
	}
	result += abs(arr[0][0] - arr[count - 1][0]) + abs(arr[0][1] - arr[count - 1][1]);
	cout << result;
}