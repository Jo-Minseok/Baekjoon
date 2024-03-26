#include <iostream>
using namespace std;
int main() {
	int num;
	long long result = 1;
	cin >> num;
	for (int i = 1; i <= num; i++) {
		result *= i;
	}
	cout << result;
}