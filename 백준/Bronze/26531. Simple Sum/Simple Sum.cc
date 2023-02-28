#include <iostream>
#include <string>
using namespace std;
int main() {
	string math;
	getline(cin, math);
	int index = 0;
	int first, second, result;
	for (int i = 0; i < math.length(); i++) {
		switch (index) {
		case 0:
			if (math[i] >= '0' && math[i] <= '9') {
				first = math[i] - '0';
				index++;
			}
			break;
		case 1:
			if (math[i] >= '0' && math[i] <= '9') {
				second = math[i] - '0';
				index++;
			}
			break;
		case 2:
			if (math[i] >= '0' && math[i] <= '9') {
				result = math[i] - '0';
				index++;
			}
			break;
		}
	}
	if (first + second == result) {
		cout << "YES";
	}
	else {
		cout << "NO";
	}
}