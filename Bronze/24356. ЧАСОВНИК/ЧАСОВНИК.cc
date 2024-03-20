#include <iostream>
#include <cmath>
using namespace std;
int main() {
	int sh, sm;
	int eh, em;
	int min;
	cin >> sh >> sm >> eh >> em;
	int T1 = sh * 60 + sm;
	int T2 = eh * 60 + em;
	if (T2 - T1 < 0) {
		min = T2 - T1 + 1440;
	}
	else {
		min = T2 - T1;
	}
	cout << min << " " << min / 30;
}