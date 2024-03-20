#include <iostream>
#include <algorithm>
using namespace std;
int main() {
	int result = 0;
	int human_count,limit;
	int i, j;
	cin >> human_count >> limit;
	int* arr = new int[human_count];
	for (int i = 0; i < human_count; i++) {
		cin >> arr[i];
	}
	sort(arr, arr + human_count);
	for (i = 0, j=human_count-1; i < human_count / 2; i++,j--) {
		if (arr[i] + arr[j] >= limit) {
			result++;
		}
	}
	cout << result;
}