#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main() {
	string text;
	getline(cin, text);
	while (text != ".") {
		bool check = true;
		stack<char> stack;
		for (int i = 0; i < text.length(); i++) {
			if (text[i] == '(' || text[i] == '[') {
				stack.push(text[i]);
			}
			else if (text[i] == ')') {
				if (!stack.empty() && stack.top() == '(') {
					stack.pop();
				}
				else {
					check = false;
				}
			}
			else if (text[i] == ']') {
				if (!stack.empty() && stack.top() == '[') {
					stack.pop();
				}
				else {
					check = false;
				}
			}
		}
		if (stack.empty() && check) {
			cout << "yes" << endl;
		}
		else {
			cout << "no" << endl;
		}
		getline(cin, text);
	}
	return 0;
}