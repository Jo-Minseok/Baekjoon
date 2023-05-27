#include <iostream>
#include <string>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	string a;
	cin >> a;
	unsigned long long result = 0;
	for (int i = 0; i < a.length(); i++) {
		result += stoll(a);
		a += a[0];
		a = a.substr(1, a.length() - 1);
	}
	cout << result;
}