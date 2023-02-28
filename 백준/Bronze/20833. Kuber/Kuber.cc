#include <iostream>
#include <cmath>
using namespace std;
int main() {
	int length;
	int total=0;
	cin >> length;
	for (int i = 1; i <= length; i++) {
		total += pow(i, 3);
	}
	cout << total;
}