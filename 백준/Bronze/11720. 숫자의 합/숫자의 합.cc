#include <stdio.h>

int main() {
	int count, i =0, sum=0, num;
	char plus[100];
	scanf("%d", &count);
	scanf("%s", plus);
	for (i = 0; i < count; i++) {
		sum += plus[i]-'0';
	}
	printf("%d", sum);
	return 0;
}