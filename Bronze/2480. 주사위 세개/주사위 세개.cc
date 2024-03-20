#include <stdio.h>

int main() {
	int num1, num2, num3, price;
	scanf("%d %d %d", &num1, &num2, &num3);
	if (num1 == num2&& num2 == num3) {
		price = 10000 + num1 * 1000;
	}
	else if (num1 == num2) {
		price = 1000 + num1 * 100;
	}
	else if (num2 == num3) {
		price = 1000 + num2 * 100;
	}
	else if (num1 == num3) {
		price = 1000 + num1 * 100;
	}
	else {
		if (num1 > num2) {
			if (num1 > num3) {
				price = num1 * 100;
			}
			else {
				price = num3 * 100;
			}
		}
		else {
			if (num2 > num3) {
				price = num2 * 100;
			}
			else {
				price = num3 * 100;
			}
		}
	}
	printf("%d", price);
	return 0;
}