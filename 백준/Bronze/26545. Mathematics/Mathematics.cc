#include <iostream>
using namespace std;
int main() {
	int result = 0, count,num;
	cin >> count;
	for (int i = 0; i < count; i++) {
		cin >> num;
		result += num;
	}
	cout << result;
}