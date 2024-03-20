#include <iostream>
using namespace std;
int main() {
	int count;
	int candy, need, candy_count;
	int result = 0;
	cin >> count;
	for (int i = 0; i < count; i++) {
		result = 0;
		cin >> candy >> need;
		for (int j = 0; j < candy; j++) {
			cin >> candy_count;
			if (candy_count / need > 0) {
				result += candy_count / need;
			}
		}
		cout << result << "\n";
	}
}