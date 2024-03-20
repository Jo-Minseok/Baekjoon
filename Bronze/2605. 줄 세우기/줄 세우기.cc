#include <iostream>
#include <vector>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	vector<int> list;
	int test_case;
	int num;
	cin >> test_case;
	vector<int>::iterator it;
	for (int i = 0; i < test_case; i++) {
		cin >> num;
		if (num != 0) {
			list.insert(it+i-num, i+1);
		}
		else {
			list.push_back(i+1);
		}
		it = list.begin();
	}
	for (; it != list.end(); it++) {
		cout << *it << " ";
	}
}