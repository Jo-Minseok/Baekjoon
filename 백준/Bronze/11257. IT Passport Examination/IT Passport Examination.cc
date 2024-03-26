#include <iostream>
using namespace std;
int main() {
	int count;
	double str, man, tech,sum;
	string a;
	cin >> count;
	for (int i = 0; i < count; i++) {
		cin >> a >> str >> man >> tech;
		sum = man + str + tech;
		if (sum >= 55) {
			if (str >= (35 * 0.3)&& man >= (25*0.3) && tech >= (40*0.3)) {
				cout << a << " " << sum << " PASS" << endl;
			}
			else {
				cout << a << " " << sum << " FAIL" << endl;
			}
		}
		else {
			cout << a << " " << sum << " FAIL" << endl;
		}
	}

}