#include <iostream>
#include <string>
using namespace std;
int main() {
	string kda,tmp;
	int result[3] = { 0 }, index = 0;
	cin >> kda;
	for (int i = 0; i < kda.length(); i++) {
		if (kda[i] != '/') {
			tmp += kda[i];
		}
		else {
			result[index++] = stoi(tmp);
			tmp = "";
		}
	}
	result[2] = stoi(tmp);
	if (result[1] == 0 || result[0] + result[2] < result[1]) {
		cout << "hasu";
	}
	else {
		cout << "gosu";
	}
}