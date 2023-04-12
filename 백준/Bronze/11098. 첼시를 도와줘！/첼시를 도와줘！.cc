#include <iostream>
#include <string>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int test_case,human,price,highest;
	string name,result;
	cin >> test_case;
	while (test_case--) {
		highest = 0;
		cin >> human;
		while (human--) {
			cin >> price >> name;
			if (price > highest) {
				result = name;
				highest = price;
			}
		}
		cout << result << "\n";
	}
}