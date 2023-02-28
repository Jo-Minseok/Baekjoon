#include <iostream>
using namespace std;
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int count;
	cin >> count;
	for (int i = 0; i < count; i++) {
		bool check = true;
		int walk = 0;
		string a;
		cin >> a;
		for (int j = 0; j < a.length(); j++) {
			if (a[j] == 'U' && check) {
				walk++;
			}
			else if(a[j]=='D') {
				check = false;
			}
		}
		cout << walk <<endl;
	}
}