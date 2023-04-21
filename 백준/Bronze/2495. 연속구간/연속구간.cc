#include <iostream>
#include <string>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	string text;
	int count = 3;
	while (count--) {
		cin >> text;
		int num_count = 1, max = 1;
		for (int i = 1; i < text.length(); i++) {
			if (text[i - 1] == text[i]) {
				num_count++;
			}
			else {
				if (max < num_count) {
					max = num_count;
				}
				num_count = 1;
			}
		}
		if (max < num_count) {
			max = num_count;
		}
		cout << max << "\n";
	}
}