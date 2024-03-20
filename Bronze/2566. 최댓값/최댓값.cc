#include <iostream>
using namespace std;
int main() {
	int max = 0, num;
	int c_index=0, r_index=0;
	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			cin >> num;
			if (max < num) {
				max = num;
				c_index = i;
				r_index = j;
			}
		}
	}
	cout << max << endl;
	cout << c_index+1 << " " <<  r_index+1;
}