#include <iostream>
using namespace std;
int main() {
	int count, a= 0 ,b=0;
	string result;

	cin >> count >> result;
	for (int i = 0; i < count; i++) {
		if (result[i] == 'A') {
			a++;
		}
		else {
			b++;
		}
	}
	if (a > b) {
		cout << "A";
	}
	else if (a < b) {
		cout << "B";
	}
	else {
		cout << "Tie";
	}
}