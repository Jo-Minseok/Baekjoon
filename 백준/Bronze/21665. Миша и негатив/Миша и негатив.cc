#include <iostream>
using namespace std;
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	char arr[100][100];
	char arr2[100][100];
	int h, w;
	cin >> h >> w;
	int count = 0;
	string* a = new string[h];
	for (int i = 0; i < w; i++) {
		for (int j = 0; j < h; j++) {
			cin >> arr[i][j];
		}
	}

	for (int i = 0; i < w; i++) {
		for (int j = 0; j < h; j++) {
			cin >> arr2[i][j];
			if (arr2[i][j] == arr[i][j]) {
				count++;
			}
		}
	}
	cout << count;
}