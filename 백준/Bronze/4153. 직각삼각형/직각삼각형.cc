#include <stdio.h>
#include <math.h>

int angle(int a, int b, int c) {
	int max, num1, num2;
	if (a >= b && a >= c) {
		max = a;
		num1 = b;
		num2 = c;
	}
	else if (b >= c && b >= a) {
		max = b;
		num1 = a;
		num2 = c;
	}
	else if (c >= a && c >= b) {
		max = c;
		num1 = a;
		num2 = b;
	}

	if (pow(max, 2) == pow(num1, 2) + pow(num2, 2)) {
		return 1;
	}
	else {
		return 0;
	}
}

int main() {
	int ausar, auset, heru;
	while (1) {
		scanf("%d %d %d", &ausar, &auset, &heru);
		if (ausar == 0 && auset == 0 && heru == 0) {
			break;
		}
		else {
			if (angle(ausar, auset, heru)==1) {
				puts("right");
			}
			else {
				puts("wrong");
			}
		}
	}

	return 0;
}