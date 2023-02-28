#include <iostream>
#include <queue>
using namespace std;
int main() {
	int count;
	queue<char> test;
	cin >> count;
	for (int i = 0; i < count; i++) {
		string text;
		cin >> text;
		for (int j = 0; j < text.length(); j++) {
			if (test.empty()) {
				test.push(text[j]);
			}
			if (test.back() != text[j]) {
				test.push(text[j]);
			}
		}
		while(1){
			char a = test.front();
			test.pop();
			cout << a;
			if (test.size() == 0) {
				break;
			}
		}
		cout << "\n";
	}
}