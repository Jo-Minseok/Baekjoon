#include <iostream>

using namespace std;

int main() {
	int num, tmp[3];
	cin >> num;
	for (int i = 0; i < num; i++) {
		int count = 0;
		for (int j = 0; j < 3; j++) {
			cin >> tmp[j];
			cout << tmp[j] << " ";
			if (tmp[j] >= 10) {
				count++;
			}
		}
		switch (count) {
		case 0:
			cout << "\nzilch\n\n";
			break;
		case 1:
			cout << "\ndouble\n\n";
			break;
		case 2:
			cout << "\ndouble-double\n\n";
			break;
		case 3:
			cout << "\ntriple-double\n\n";
			break;
		}
	}
}