#include <iostream>
#include <cmath>
using namespace std;
int main() {
	int year;
	int subin, buy;
	int result = 0;
	cin >> year >> subin >> buy;
	for (int i = 0; i <= year; i++) {
		result += subin * i + buy * pow(i, 2);
	}
	cout << result;
}