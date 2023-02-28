#include <iostream>
using namespace std;
int main() {
	int a, b;
	int result, result2;
	cin >> a >> b;
	result = a + b;
	result2 = a - b;
	cout << (result > result2 ? result : result2) << "\n";
	cout << (result > result2 ? result2 : result);
}