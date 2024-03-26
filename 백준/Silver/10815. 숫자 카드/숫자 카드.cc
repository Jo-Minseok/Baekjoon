#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	vector<int> manual;
	vector<bool> result;
	int manual_count, num, have_count;
	cin >> manual_count;
	for (int i = 0; i < manual_count; i++) {
		cin >> num;
		manual.push_back(num);
	}
	sort(manual.begin(), manual.end());
	cin >> have_count;
	for (int i = 0; i < have_count; i++) {
		cin >> num;
		if (binary_search(manual.begin(),manual.end(),num)) {
			result.push_back(true);
		}
		else {
			result.push_back(false);
		}
	}
	for (int i = 0; i < result.size(); i++) {
		if (result[i]) {
			cout << 1 << " ";
		}
		else {
			cout << 0 << " ";
		}
	}

}