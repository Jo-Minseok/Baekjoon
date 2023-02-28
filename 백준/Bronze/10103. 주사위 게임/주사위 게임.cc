#include <iostream>
using namespace std;
int main() {
	int count;
	cin >> count;
	int first, second;
	int chang = 100, sang = 100;
	for (int i = 0; i < count; i++) {
		cin >> first >> second;
		if (first < second) {
			sang -= second;
		}
		else if(first > second) {
			chang -= first;
		}
	}
	cout << sang << "\n" << chang;
}