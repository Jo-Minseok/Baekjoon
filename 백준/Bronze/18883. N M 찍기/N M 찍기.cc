#include <iostream>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int N, M;
	cin >> N >> M;
	for (int i = 1; i <= N * M; i++) {
		if (i % M!=0) {
			cout << i << " ";
		}
		else {
			cout << i << "\n";
		}
	}
}