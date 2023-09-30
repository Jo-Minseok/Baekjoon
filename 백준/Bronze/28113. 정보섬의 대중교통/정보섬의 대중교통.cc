#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, A, B;
	cin >> N >> A >> B;
	if (N + (B - N) < A) {
		cout << "Subway";
	}
	else if (N + (B - N) > A) {
		cout << "Bus";
	}
	else {
		cout << "Anything";
	}
}