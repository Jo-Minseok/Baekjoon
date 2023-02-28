#include <iostream>

using namespace std;

int main() {
	double a,temp;
	cin >> a;
	temp = a;
	while (1) {
		cin >> a;
		if (a == 999) {
			break;
		}
		printf("%.2f\n",a-temp);
		temp = a;
	}
}