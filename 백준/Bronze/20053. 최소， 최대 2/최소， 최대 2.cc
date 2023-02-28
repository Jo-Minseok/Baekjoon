#include <iostream>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int count;
	cin >> count;
	int num_count;
	int num = 0;
	int min, max;
	for (int i = 0; i < count; i++) {
		cin >> num_count;
		int* arr = new int[num_count];
		for (int j = 0; j < num_count; j++) {
			cin >> arr[j];
		}
		min = max = arr[0];
		for (int j = 0; j < num_count; j++) {
			if (min > arr[j]) {
				min = arr[j];
			}
			if (max < arr[j]) {
				max = arr[j];
			}
		}
		cout << min << " " << max << "\n";
	}
}