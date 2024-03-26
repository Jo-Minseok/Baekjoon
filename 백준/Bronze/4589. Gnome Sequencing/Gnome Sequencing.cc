#include <iostream>

using namespace std;

int main() {
	int count = 0;
	int tmp[3];
	cin >> count;
	cout << "Gnomes:" << endl;
	for (int i = 0; i < count; i++) {
		cin >> tmp[0] >> tmp[1] >> tmp[2];
		if ((tmp[0] > tmp[1]&& tmp[1] > tmp[2]) || (tmp[0] <tmp[1] && tmp[1] < tmp[2])) {
			cout << "Ordered" << endl;
		}
		else {
			cout << "Unordered" << endl;
		}
	}
}