#include <iostream>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int count;
	cin >> count;
	for (int i = 0; i < count; i++) {
		int data;
		bool check = true;
		cin >> data;
		int* arr = new int[data];
		for (int j = 0; j < data; j++) {
			cin >> arr[j];
		}
		cout << "Denominations: ";
		int current;
		for (int j = 0; j < data; j++) {
			cout << arr[j] << " ";
			if (j == 0) {
				current = arr[0];
			}
			else {
				if (current * 2 > arr[j]) {
					check = false;
				}
			}
			current = arr[j];
		}
		if (check) {
			cout << "\nGood coin denominations!\n\n";
		}
		else {
			cout << "\nBad coin denominations!\n\n";
		}
	}
}