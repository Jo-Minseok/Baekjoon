#include <iostream>
#include <algorithm>
using namespace std;

bool comp(char a, char b) {
	return a > b;
}

int main() {
	string a;
	cin >> a;
	sort(&a[0], &a[0] + a.length(),comp);
	cout << a;
}