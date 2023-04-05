#include <iostream>
#include <stack>
#include <vector>
using namespace std;
int main() {
	int num,x, index = 1;
	cin >> num;
	vector<char> text;
	stack<int> list;
	for (int i = 0; i < num; i++) {
		cin >> x;
		while (index <= x) {
			list.push(index);
			index++;
			text.push_back('+');
		}
		if (list.top() == x) {
			list.pop();
			text.push_back('-');
		}
		else {
			cout << "NO";
			return 0;
		}
	}

	for (int i = 0; i < text.size();i++) {
		cout << text[i] << "\n";
	}
}