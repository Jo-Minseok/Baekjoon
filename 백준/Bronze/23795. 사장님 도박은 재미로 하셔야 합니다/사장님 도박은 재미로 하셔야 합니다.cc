#include <stdio.h>
int main() {
	long a[2000] = { 0 },count = 0,sum = 0;
	while (1) {
		scanf("%lld", &a[count]);
		if (a[count] == -1) {
			break;
		}
		else {
			sum += a[count];
			count++;
		}
	}
	printf("%d", sum);
	return 0;
}