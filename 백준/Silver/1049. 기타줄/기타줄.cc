#include <iostream>
#include <algorithm>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int store_count, broken;
	int package, single;
	int package_min = 1000, single_min = 1000;
	int result[3] = { 0 };
	int final_result = 100000;
	cin >> broken >> store_count;
	for (int i = 0; i < store_count; i++) {
		cin >> package >> single;
		if (package_min > package) {
			package_min = package;
		}
		if (single_min > single) {
			single_min = single;
		}
	}
	result[0] = single_min * broken;
	result[1] = broken/6 * package_min + broken % 6 * single_min;
	if (broken % 6 != 0) {
		result[2] = broken / 6 * package_min + package_min;
	}
	else {
		result[2] = broken / 6 * package_min;
	}
	sort(result, result + 3);
	cout << result[0];
}