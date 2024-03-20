#include <iostream>
#include <string>
using namespace std;
int main() {
	int count = 0,result= 0;
	cin >> count;
	for (int i = 0; i < count; i++) {
		string a;
		cin >> a;
		a[0] = a[1] = ' ';
		if (stoi(a) <= 90) {
			result++;
		}
	}
	cout << result;
}