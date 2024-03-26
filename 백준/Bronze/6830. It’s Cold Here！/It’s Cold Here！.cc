#include <iostream>
using namespace std;
int main() {
	string area;
	int temp;
	int count = 0;
	int max;
	string result;
	while (cin >> area >> temp) {
		if (count == 0) {
			max = temp;
			result = area;
		}
		else {
			if (max > temp) {
				max = temp;
				result = area;
			}
		}
		count++;
	}
	cout << result;
}