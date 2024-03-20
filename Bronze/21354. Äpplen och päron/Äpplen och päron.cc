#include <iostream>
using namespace std;
int main() {
	int axel, petra;
	cin >> axel >> petra;
	axel *= 7;
	petra *= 13;
	if (axel > petra) {
		cout << "Axel";
	}
	else if (axel < petra) {
		cout << "Petra";
	}
	else {
		cout << "lika";
	}
}