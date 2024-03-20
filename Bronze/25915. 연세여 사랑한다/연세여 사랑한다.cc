#include <iostream>
#include <cmath>
using namespace std;
int main() {
	char alpha;
	string a = "ILOVEYONSEI";
	cin >> alpha;
	int result = 0;
	for (int i = 0; i < a.length(); i++) {
		result += abs(alpha - a[i]);
		alpha = a[i];
	}
	cout << result;
}