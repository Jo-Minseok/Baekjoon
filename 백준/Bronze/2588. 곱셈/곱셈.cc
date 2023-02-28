#include <stdio.h>

int main() {
	int num, num2;
	scanf("%d", &num);
	scanf("%d", &num2);

	int n3 = num * (num2 % 10);
	int n4 = num * (num2 % 100 / 10);
	int n5 = num * (num2 / 100);
	printf("%d\n", n3);
	printf("%d\n", n4);
	printf("%d\n", n5);
	printf("%d\n", n5 * 100 + n4 * 10 + n3);
	return 0;
}