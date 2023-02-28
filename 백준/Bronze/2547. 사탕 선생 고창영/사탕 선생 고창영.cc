#include <iostream>
using namespace std;
int main() {
	int count;
	cin >> count;
	for (int i = 0; i < count; i++) {
		unsigned long long sum = 0,candy;
		int count_student;
		cin >> count_student;
		for (int j = 0; j < count_student; j++) {
			cin >> candy;
			sum = (candy+sum)%count_student;
		}
		if (sum % count_student == 0) {
			cout << "YES\n";
		}
		else {
			cout << "NO\n";
		}
	}
}