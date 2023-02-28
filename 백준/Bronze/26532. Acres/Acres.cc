#include <iostream>
#include <cmath>
using namespace std;
int main() {
	double yard;
	double yard2;
	cin >> yard >> yard2;
	double aker = yard* yard2 / 4840;
	cout << ceil(aker / 5);
}