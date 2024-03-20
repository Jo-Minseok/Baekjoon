#include <iostream>
#include <string>
#include <bitset>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	string num;
	string result;
	cin >> num;
	if (num == "0") {
		cout << 0;
		return 0;
	}
	for (int i = 0; i < num.length(); i++) {
		int tmp = num[i] - '0';
		bitset<3> list(tmp);
		result += list.to_string();
	}
	int index = 0;
	for (int i = 0; i < result.length(); i++,index++) {
		if (result[i] != '0') {
			break;
		}
	}
	cout << result.substr(index, result.length());
}