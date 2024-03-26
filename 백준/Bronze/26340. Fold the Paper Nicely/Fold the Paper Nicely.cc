#include <iostream>
using namespace std;
int main() {
	int count;
	cin >> count;
	int **arr = new int*[count];
	for (int i = 0; i < count; i++) {
		arr[i] = new int[3];
		for (int j = 0; j < 3; j++) {
			cin >> arr[i][j];
		}
		cout << "Data set: " << arr[i][0] << " " << arr[i][1] << " " << arr[i][2] << "\n";

		for (int j = 0; j < arr[i][2]; j++) {
			if (arr[i][0] > arr[i][1]) {
				arr[i][0] /= 2;
			}
			else {
				arr[i][1] /= 2;
			}
		}
		if (arr[i][0] > arr[i][1]) {
			cout << arr[i][0] << " " << arr[i][1] << "\n\n";
		}
		else {
			cout << arr[i][1] << " " << arr[i][0] << "\n\n";
		}
		
	}
}