#include <stdio.h>
#include <math.h>

int main() {
	int tmp, num[5], sum = 0;
	scanf("%d", &tmp);
	for (int i = 0; i < 5; i++) {
		sum += pow(tmp % 10,5);
		tmp = tmp / 10;
	}
	printf("%d", sum);
	return 0;
}