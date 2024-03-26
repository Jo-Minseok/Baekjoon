#include <iostream>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int a,num,count =0;
	while (1) {
		cin >> a;
		if (a == 0) {
			return 0;
		}
		for (int i = 0; i < a; i++) {
			cin >> num;
		}
		cout << "Case " << ++count<<": Sorting... done!\n";
	}
}