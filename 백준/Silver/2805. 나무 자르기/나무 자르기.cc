#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int wood_count, length;
	cin >> wood_count >> length;
	vector<int>list(wood_count);
	for (int i = 0; i < wood_count; i++) {
		cin >> list[i];
	}
	int start = 0,result = 0;
	int end = *max_element(list.begin(), list.end());
	while (start <= end) {
		long long total = 0;
		int mid = (start + end) / 2;
		for (int i = 0; i < wood_count; i++) {
			if (list[i] > mid) {
				total += list[i] - mid;
			}
		}
		if (total < length) {
			end = mid - 1;
		}
		else {
			result = mid;
			start = mid + 1;
		}
	}
	cout << result;
}