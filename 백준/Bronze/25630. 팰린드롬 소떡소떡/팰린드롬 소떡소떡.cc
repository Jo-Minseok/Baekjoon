#include <iostream>
using namespace std;
int main() {
	int count;
	cin >> count;
	int last_index = count-1;
	int result = 0;
	string a;
	cin >> a;
	for (int i = 0; i < count/2; i++) {
		if (a[i] != a[last_index--]) {
			result++;
		}
	}
	cout << result;
}