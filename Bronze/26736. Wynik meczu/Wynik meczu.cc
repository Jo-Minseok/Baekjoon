#include <iostream>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	string score;
	cin >> score;
	int a = 0, b = 0;
	for (int i = 0; i < score.length(); i++) {
		if (score[i] == 'A') {
			a++;
		}
		else if (score[i] == 'B') {
			b++;
		}
	}
	cout << a << " : " << b;
}