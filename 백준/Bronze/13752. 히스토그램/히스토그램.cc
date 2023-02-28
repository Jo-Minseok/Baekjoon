#include <iostream>
using namespace std;
int main() {
	int count;
	cin >> count;
	int num;
	for (int i = 0; i < count; i++) {
		cin >> num;
		for (int j = 0; j < num; j++) {
			cout << "=";
		}
		cout << "\n";
	}
}