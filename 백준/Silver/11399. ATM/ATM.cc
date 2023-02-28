#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int test_case,num,result =0;
	vector<int> list;
	cin >> test_case;
	for (int i = 0; i < test_case; i++) {
		cin >> num;
		list.push_back(num);
	}
	sort(list.begin(), list.end());
	for (int i = 0; i < test_case; i++) {
		for (int j = 0; j <= i; j++) {
			result += list[j];
		}
	}
	cout << result;
}