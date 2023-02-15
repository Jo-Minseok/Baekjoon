#include <iostream>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int size;
	int result = 0;
	cin >> size;
	for (int i = 0; i <= size; i++) {
		for (int j = 0; j <= i; j++) {
			result += i + j;
		}
	}
	cout << result;
}