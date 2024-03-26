#include <iostream>
using namespace std;

int main() {
	int count,change;
	int qurter=0, dim=0, nikel=0, peny=0;
	cin >> count;
	for (int i = 0; i < count; i++) {
		change = 0;
		cin >> change;
		cout << change / 25 << " ";
		change %= 25;
		cout << change / 10 << " ";
		change %= 10;
		cout << change / 5 << " ";
		change %= 5;
		cout << change / 1 << " " << endl;
	}
}