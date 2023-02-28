#include <iostream>
using namespace std;
int main() {
	int w1, h1;
	int w2, h2;
	cin >> w1 >> h1 >> w2 >> h2;
	int result = h1 + h2 + w2 + h2 + h1 + w1;
	if (w1 > w2) {
		result += w1 - w2;
	}
	else {
		result += w2 - w1;
	}
	cout << result + 4;
}