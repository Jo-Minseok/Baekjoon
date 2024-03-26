#include <iostream>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int xpos, ypos;
	int test_count;
	int result = 0;
	cin >> test_count;
	bool pos[100][100] = {false};
	for (int i = 0; i < test_count; i++) {
		cin >> xpos >> ypos;
		for (int j = ypos; j < ypos + 10; j++) {
			for (int k = xpos; k < xpos + 10; k++) {
				pos[j][k] = true;
			}
		}
	}
	for (int i = 0; i < 100; i++) {
		for (int j = 0; j < 100; j++) {
			if (pos[i][j] == true) {
				result++;
			}
		}
	}
	cout << result;

}