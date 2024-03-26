#include <iostream>
#include <string>
#include <stack>
#include <sstream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int test_case;
	cin >> test_case;
	cin.ignore();
	for (int i = 1; i <= test_case; i++) {
		stack<string> list;
		string text;
		string part;
		stringstream a;
		getline(cin, text);
		a.str(text);
		while (a >> part) {
			list.push(part);
		}
		cout << "Case #" << i << ": ";
		while (!list.empty()) {
			cout << list.top();
			cout << " ";
			list.pop();
		}
		cout << "\n";
	}
}