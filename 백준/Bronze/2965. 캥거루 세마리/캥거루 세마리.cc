#include <iostream>
#include <algorithm>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int xpos[3] = { 0 };
	for (int i = 0; i < 3; i++) {
		cin >> xpos[i];
	}
	sort(xpos, xpos + 3);
	cout << max(xpos[1] - xpos[0] - 1, xpos[2] - xpos[1] - 1);
}