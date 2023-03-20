#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<long long> list;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int line_count, need;
	long long num;
	cin >> line_count >> need;
	for (int i = 0; i < line_count; i++) {
		cin >> num;
		list.push_back(num);
	}
	long long min = 1;
	long long max = *max_element(list.begin(), list.end());
	long long result = 1;
	while (min <= max) {
		long long mid = (min + max) / 2;
		long long count = 0;
		for (int i = 0; i < line_count; i++) {
			count += list[i]/mid;
		}
		if (count >= need) {
			min = mid + 1;
			if (mid > result) {
				result = mid;
			}
		}
		else {
			max = mid - 1;
		}
	}
	cout << result;
}