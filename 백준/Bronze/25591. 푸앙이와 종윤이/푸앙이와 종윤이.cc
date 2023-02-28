#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cin.tie(0);
	int num1, num2;
	int a, b ,c,d,q=0,r=0;
	cin >> num1 >> num2;
	a = 100 - num1;
	b = 100 - num2;
	c = 100 - (a + b);
	d = a * b;
	q = d / 100;
	r = d % 100;
	cout << a << " " << b << " " << c << " " << d << " " << q << " " << r << endl;
	cout << c+q << " " << r;
}