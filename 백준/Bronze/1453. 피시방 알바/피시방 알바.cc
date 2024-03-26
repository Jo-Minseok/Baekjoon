#include <iostream>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int test_case,num,count_r =0;
	cin >> test_case;
	bool check[101] = { false };
	while (test_case--) {
		cin >> num;
		if (check[num] == true) {
			count_r++;
		}
		else {
			check[num] = true;
		}
	}
	cout << count_r;
}