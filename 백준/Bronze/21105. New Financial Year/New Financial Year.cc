#include <iostream>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int num;
	cin >> num;
	double P, C;
	for (int i = 0; i < num; i++) {
		cin >> P >> C;
		printf("%.9f\n",(100 * P) / (C + 100));
	}
}