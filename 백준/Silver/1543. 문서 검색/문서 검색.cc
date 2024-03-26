#include <iostream>
#include <string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	string first, second;
	int result = 0;
	getline(cin, first);
	getline(cin, second);
	while (first.find(second) != string::npos) {
		result++;
		first = first.substr(first.find(second)+second.length(),first.length()-second.length());
	}
	cout << result;
}