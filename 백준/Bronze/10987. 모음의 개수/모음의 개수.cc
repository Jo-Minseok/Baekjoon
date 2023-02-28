#include <iostream>
using namespace std;
int main() {
	string a;
	cin >> a;
	int result = 0;
	for (int i = 0; i < a.length(); i++) {
		if (a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u') {
			result++;
		}
	}
	cout << result;
}