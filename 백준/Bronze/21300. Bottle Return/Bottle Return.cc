#include <iostream>

using namespace std;

int main() {
	int result = 0;
	int num_arr[6];
	for (int i = 0; i < 6; i++) {
		cin >> num_arr[i];
		result += num_arr[i];
	}
	cout << result * 5;
}