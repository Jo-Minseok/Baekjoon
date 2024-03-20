#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int xpos[3] = { 0 };
	int count = 0;
	while (scanf("%d",&xpos[0]) != EOF) {
		scanf("%d %d", &xpos[1], &xpos[2]);
		count = 0;
		cout << max(xpos[1] - xpos[0] - 1, xpos[2] - xpos[1] - 1) << "\n";
	}
}