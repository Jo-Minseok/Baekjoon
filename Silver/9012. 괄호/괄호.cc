#include <iostream>
#include <stack>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int count;
	cin >> count;
	for (int i = 0; i < count; i++) {
		string PS;
		stack<char> stack;
		bool check = true;
		cin >> PS;
		for (int j = 0; j < PS.length(); j++) {
			if (PS[j] == '(') {
				stack.push('(');
			}
			else if(PS[j] == ')') {
				if (stack.size() == 0) {
					check = false;
				}
				else {
					stack.pop();
				}
			}
		}
		if (stack.size() == 0&&check == true) {
			cout << "YES\n";
		}
		else {
			cout << "NO\n";
		}
	}
}