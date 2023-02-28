#include <stdio.h>

int main() {
	int a[2], b[2], count[2]={0};
	for (int i = 0; i < 2; i++) {
		scanf("%d %d", &a[i], &b[i]);
	}
	count[0] = a[0] + b[1];
	count[1] = a[1] + b[0];
	printf("%d", count[0] > count[1] ? count[1] : count[0]);
	return 0;
}