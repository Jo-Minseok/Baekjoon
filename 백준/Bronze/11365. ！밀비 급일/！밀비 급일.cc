#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
using namespace std;
int main() {
	while (true) {
		string a,tmp;
		getline(cin,a);
		tmp = a;
		if (a == "END") {
			break;
		}
		else {
			int num = a.length()-1;
			for (int i = 0; i < a.length(); i++) {
					a[i] = tmp[num--];
			}
			cout << a << endl;
		}
	}
}