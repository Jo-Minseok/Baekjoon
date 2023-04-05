#include <iostream>
#include <limits.h>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int length, width, inven;
	cin >> length >> width >> inven;
	int** arr = new int*[length];
	int leasttime = INT32_MAX,result_height = 0;
	for (int i = 0; i < length; i++) {
		arr[i] = new int[width];
		for (int j = 0; j < width; j++) {
			cin >> arr[i][j];
		}
	}
	for (int h = 0; h <= 256; h++) {
		int remove = 0;
		int build = 0;
		for (int i = 0; i < length; i++) {
			for (int j = 0; j < width; j++) {
				int height = arr[i][j] - h;
				if (height > 0) {
					remove += height;
				}
				else if(height < 0) {
					build -= height;
				}
			}
		}
		if (remove + inven >= build) {
			int tmp = remove * 2 + build;
			if (tmp <= leasttime) {
				leasttime = tmp;
				result_height = h;
			}
		}
	}
	cout << leasttime <<" " << result_height;
}