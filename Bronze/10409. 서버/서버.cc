#include <iostream>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int test_case, time_limit, _time;
	int result = 0,_totaltime = 0;
	bool check = true;
	cin >> test_case >> time_limit;
	for (int i = 0; i < test_case; i++) {
		cin >> _time;
		if (_time + _totaltime <= time_limit && check) {
			_totaltime += _time;
			result++;
		}
		else {
			check = false;
		}
	}
	cout << result;
}