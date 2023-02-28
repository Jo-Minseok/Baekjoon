#include <iostream>
using namespace std;
int main() {
	int square_length;
	int h,y,max;
	cin >> square_length >> h >> y;
	int arr[4];
	arr[0] = (square_length - h) * (square_length - y);
	arr[1] = (square_length - h) * y;
	arr[2] = h * (square_length - y);
	arr[3] = h * y;
	max = arr[0];
	for (int i = 0; i < 4; i++) {
		if (max < arr[i]) {
			max = arr[i];
		}
	}
	cout << max * 4;
}