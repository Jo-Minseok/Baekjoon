#include <iostream>
using namespace std;
int main() {
	int num;
	cin >> num;
	int min,max;
	int index = 1;
	min = max = 1;
	while (true) {
		if (num >= min && num <= max) {
			break;
		}
		min = max + 1;
		max = max + 6 * index;
		index++;
	}
	cout << index;
}