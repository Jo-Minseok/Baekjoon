#include <iostream>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int hour, min;
	cin >> hour >> min;
	cout << (hour - 9) * 60 + (min);
}