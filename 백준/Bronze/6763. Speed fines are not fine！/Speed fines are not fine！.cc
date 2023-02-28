#include <iostream>
using namespace std;

int main() {
	int num, num2,price;
	cin >> num >> num2;
	if (num >= num2) {
		cout << "Congratulations, you are within the speed limit!";
	}
	else {
		if (num2 - num <= 20&&num2-num>=1) {
			price = 100;
		}
		else if (num2 - num <=30 && num2-num >= 21) {
			price = 270;
		}
		else{
			price = 500;
		}
		cout << "You are speeding and your fine is $" << price << ".";
	}
}