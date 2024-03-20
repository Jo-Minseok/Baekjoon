#include <stdio.h>

int main() {
	int num, num2, num3;
	int big=0, mid=0, sma=0;
	scanf("%d %d %d", &num, &num2, &num3);
	if (num > num2) {
		if (num > num3) {
			if (num2 > num3) {
				big = num;
				mid = num2;
				sma = num3;
			}
			else {
				big = num;
				mid = num3;
				sma = num2;
			}
		}
	}

	if (num2 > num) {
		if (num2 > num3) {
			if (num > num3) {
				big = num2;
				mid = num;
				sma = num3;
			}
			else {
				big = num2;
				mid = num3;
				sma = num;
			}
		}
	}

	if (num3 > num2) {
		if (num3 > num) {
			if (num2 > num) {
				big = num3;
				mid = num2;
				sma = num;
			}
			else {
				big = num3;
				mid = num;
				sma = num2;
			}
		}
	}

	printf("%d %d %d", sma, mid, big);
	return 0;
}