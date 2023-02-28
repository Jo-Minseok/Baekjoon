#include <iostream>
using namespace std;
int main() {
	int num1, num2;
	cin >> num1 >> num2;
	string* a = new string[num1];
	string* b = new string[num2];
	for (int i = 0; i < num1; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < num2; i++) {
		cin >> b[i];
	}
	for (int i = 0; i < num1; i++) {
		for (int j = 0; j < num2; j++) {
			cout << a[i] << " as " << b[j] << "\n";
		}
	}
}