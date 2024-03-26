#include <iostream>
using namespace std;
int main() {
	int count;
	int num, num2;
	cin >> count;
	for (int i = 0; i < count; i++) {
		cin >> num >> num2;
		cout << "Case " << i + 1 << ": " << num + num2 << "\n";
	}
}