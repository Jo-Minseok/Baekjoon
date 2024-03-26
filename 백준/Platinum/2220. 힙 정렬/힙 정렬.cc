#include <iostream>
using namespace std;
int arr[100001];
int main() {
	int num;
	cin >> num;
	arr[1] = 1;
	for (int i = 2; i <= num; i++) {
		arr[i] = i;

		int temp = arr[i-1];
		arr[i - 1] = arr[i];
		arr[i] = temp;

		for (int j = i - 1; j > 1; j /= 2) {
			int temp = arr[j];
			arr[j] = arr[j / 2];
			arr[j / 2] = temp;
		}
	}

	for (int i = 1; i <= num; i++) {
		cout << arr[i] << " ";
	}
}