#include <iostream>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int count,result =0;
	cin >> count;
	int ori, soy, sau;
	cin >> ori >> soy >> sau;
	if (ori < count) {
		result += ori;
	}
	else {
		result += count;
	}
	if (soy < count) {
		result += soy;
	}
	else {
		result += count;
	}
	if (sau < count) {
		result += sau;
	}
	else {
		result += count;
	}
	cout << result;
}