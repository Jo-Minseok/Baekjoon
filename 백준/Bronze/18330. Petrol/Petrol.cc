#include <iostream>
using namespace std;
int main() {
	int nextmonth_gasoline;
	int month_leftgassoline;
	cin >> nextmonth_gasoline >> month_leftgassoline;
	int next_total = month_leftgassoline + 60;
	if (next_total >= nextmonth_gasoline) {
		cout << nextmonth_gasoline * 1500;
	}
	else {
		cout << (nextmonth_gasoline-next_total) * 3000 + next_total * 1500;
	}
}