#include <stdio.h>

int main(void) {
	int num, num2;
	scanf("%d %d", &num, &num2);
	printf("%.9f",(double)num / num2);
	return 0;
}
