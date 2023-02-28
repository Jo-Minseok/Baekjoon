#include <iostream>
#include <string>

using namespace std;

int main() {
	string unit;
	double num;
	int count;
	cin >> count;
	for (int i = 0; i < count; i++) {
		cin >> num >> unit;
		if (unit == "kg") {
			printf("%.4f lb\n",num * 2.2046);
		}
		else if (unit == "g") {
			printf("%.4f l\n", num * 3.7854);
		}
		else if (unit == "lb"){
			printf("%.4f kg\n", num * 0.4536);
		}
		else if (unit == "l") {
			printf("%.4f g\n", num * 0.2642);
		}
	}
}