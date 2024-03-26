#include <stdio.h>

int main() {
	int tmp, tmp2;
	int num1, num2;
	scanf("%d %d", &tmp, &tmp2);
	num1 = (tmp % 10) * 100 + ((tmp / 10) % 10) * 10 + (tmp / 100);
	num2 = (tmp2 % 10) * 100 + ((tmp2 / 10) % 10) * 10 + (tmp2 / 100);
	printf("%d", num1 > num2 ? num1 : num2);

	return 0;
}