#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int test_case,num,index= 0;
	cin >> test_case;
	for (int i = 0; i < test_case; i++) {
		index = 0;
		cin >> num;
		while (num>0) {
			if (num % 2 == 1) {
				cout << index << " ";
			}
			num /= 2;
			index++;
		}
	}
}