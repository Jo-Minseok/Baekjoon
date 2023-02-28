#include <stdio.h>

int main() {
	int k, n, m,result = 0;
	scanf("%d %d %d", &k, &n, &m);
	printf("%d",k * n-m > 0 ? k*n-m:0);
	return 0;
}