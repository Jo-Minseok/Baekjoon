#include <iostream>
#include <string>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	string a, b, c, d;
	string tmp1, tmp2;
	unsigned long long result = 0;
	cin >> a >> b >> c >> d;
	tmp1 = a + b;
	tmp2 = c + d;
	result = stoll(tmp1) + stoll(tmp2);
	cout << result;
}