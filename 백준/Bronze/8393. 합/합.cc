#include <stdio.h>

int main() {
	int num;
	long long sum=0;
	scanf("%d", &num);
	for (int i = 0; i <= num; i++) {
		sum += i;
	}
	printf("%lld", sum);
	return 0;
}