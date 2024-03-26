#include <iostream>
using namespace std;
int main() {
	int time, alcohol;
	cin >> time >> alcohol;
	if (alcohol || time < 12 || time > 16) {
		cout << 280;
	}
	else {
		cout << 320;
	}
}