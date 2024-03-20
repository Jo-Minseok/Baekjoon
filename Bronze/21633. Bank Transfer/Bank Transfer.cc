#include <iostream>
using namespace std;
int main() {
	double num;
	cin >> num;
	double tax;
	if (num / 100 + 25 >= 2000) {
		tax = 2000;
	}
	else if(num/100+25 <= 100){
		tax = 100;
	}
	else {
		tax = num / 100 + 25;
	}
	printf("%.2f", tax);
}